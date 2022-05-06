#include "mainui.h"

//提醒訊息
void MainUI::warningMsg(QString str){
    QMessageBox::warning(this, QStringLiteral("嘿！"), str);
}

//加入分位符號
QString MainUI::decimalSeparator(int n){
    QString temp = QString::number(n);

    if(n == 0) return "0";
    if(n < 10000000) return temp.mid(0,1) + "," + temp.mid(1,3) + "," + temp.mid(4,3);
    else if(n < 100000000) return temp.mid(0,2) + "," + temp.mid(2,3) + "," + temp.mid(5,3);
    else if(n < 1000000000) return temp.mid(0,3) + "," + temp.mid(3,3) + "," + temp.mid(6,3);
    else return temp.mid(0,1) + "," + temp.mid(1,3) + "," + temp.mid(4,3) + "," + temp.mid(7,3);
}

void MainUI::avoidError() {
    //升級所需楓幣
    if(ui->ArcLV_from->value() > ui->ArcLV_to->value()) {
        ui->ArcLV_from->setValue(ui->ArcLV_to->value());
    }
    else {
        for(int i = 0; i < 6; i++) {
            arcLV = ArcLV[i]->value();
            arcCurrent = ArcCurrent[i]->value();
            arcUpgradeInt[i] = ArcUpgrade[i]->text().toInt();

            if(arcCurrent > arcUpgradeInt[i]) {
                if(arcUpgradeInt[i] != 0 && arcLV != ARCMAXLV) {
                    ArcCurrent[i]->setValue(arcUpgradeInt[i]);
                }
                else ArcCurrent[i]->setValue(0);
            }
        }
    }
}

//更新升級所需ARC數量
void MainUI::upgradeVal() {
    //計算前先加上極限屬性 & 公會技能增加的ARC
    ArcTotal->setNum(hyperStats + guildSkill);

    for(int i = 0; i < 6; i++) {
        arcLV = ArcLV[i]->value();

        //更新目前ARC
        if(arcLV != 0) ArcTotal->setNum((arcLV + 2) * 10 + ArcTotal->text().toInt());

        switch(arcLV) {
        case 0: ArcUpgrade[i]->setText("?"); break;
        case ARCMAXLV: ArcUpgrade[i]->setNum(0); break;
        default: ArcUpgrade[i]->setNum(arcLV * arcLV + 11); break;
        }
    }

    //防止輸入錯誤
    avoidError();
}

//更新目前ARC
void MainUI::updateArc() {
    //計算前先加上極限屬性 & 公會技能增加的ARC
    ArcTotal->setNum(hyperStats + guildSkill);

    for(int i = 0; i < 6; i++) {
        arcLV = ArcLV[i]->value();

        //更新目前ARC
        if(arcLV != 0) ArcTotal->setNum((arcLV + 2) * 10 + ArcTotal->text().toInt());
    }
}

//更新屬性增加量數據
void MainUI::updateAp(int mode) {
    //計算屬性增加量不可納入極限屬性 & 公會技能增加的ARC
    int arc = ArcTotal->text().toInt() - hyperStats - guildSkill;

    switch (mode) {
    case 0: ArcTotal->setToolTip(QStringLiteral("屬性增加量：%1").arg(arc * 10)); break;
    case 1: ArcTotal->setToolTip(QStringLiteral("屬性增加量：%1").arg(arc * 3.9)); break;
    case 2: ArcTotal->setToolTip(QStringLiteral("屬性增加量：%1").arg(arc * 175)); break;
    }
}

//升級所需楓幣
int MainUI::upgradeMeso(int from, int to, bool discount) {
    if(from == to || from == 0 || from == ARCMAXLV) return 0;
    //套用強化費用減少
    else if(discount) {
        int result_disc = UPGRADE_BASE_DISC;

        for(int i = to - 2; i >= 1; i--){
            for(int j = 0; j < i; j++) result_disc += UPGRADE_BASE_DISC_INCREASE;
            result_disc += UPGRADE_BASE_DISC;
        }

        if(from > 1) result_disc -= upgradeMeso(1, from, discount);
        return result_disc;
    }
    //無套用
    else {
        int result = UPGRADE_BASE;

        for(int i = to - 2; i >= 1; i--){
            for(int j = 0; j < i; j++) result += UPGRADE_BASE_INCREASE;
            result += UPGRADE_BASE;
        }

        if(from > 1) result -= upgradeMeso(1, from, discount);
        return result;
    }
}

//被擊傷害 / 增傷
void MainUI::ArcDamage(int x, int y) {
    float percent = (float(x) / float(y)) * 100;

    for(int i = 0; i < 9; i++) {
        if(percent < damageList[i]) {
            ui->damage->setNum(damageList[i]);
            ui->hit_damage->setNum(hit_damageList[i]);
            break;
        }
        else if(percent >= damageList[i] && percent < damageList[i + 1]) {
            ui->damage->setNum(damageList[i]);
            ui->hit_damage->setNum(hit_damageList[i]);
            break;
        }
        else {
            ui->damage->setNum(damageList[i]);
            ui->hit_damage->setNum(hit_damageList[i]);
        }
    }

    //1.5倍傷害需求尾數為5的值需額外加5
    if((y * 15) % 100 == 50) ui->damage150->setNum(y * 1.5 + 5);
    else ui->damage150->setNum(y * 1.5);
}

//秘法觸媒
void MainUI::transArc(int lv, int arc) {
    double total = floor((upgradeList[lv - 1] + ui->transArc_before->value()) * 0.8);

    for(int i = 0; i < lv; i++) {
        if(total >= upgradeList[lv - i - 1]) {
            ui->transCost->setText(decimalSeparator(upgradeMeso(1, lv - i, ui->discountSwitch->isChecked())));

            ui->transLV_after->setNum(lv - i);
            ui->transArc_after->setNum(total - upgradeList[lv - i - 1]);
            break;
        }
    }

    if(arc == (lv * lv + 11)) {
        ui->transLV_before->setValue(lv + 1);
        ui->transArc_before->setValue(0);
    }

    if(lv == ARCMAXLV) {
        ui->transLV_before->setValue(ARCMAXLV - 1);
        ui->transArc_before->setValue(ARC_LV19_MAX);
        warningMsg(QStringLiteral("19等滿經驗直接轉就好\n可以省一筆錢唷！"));
    }
}

//清除任務狀態
void MainUI::clearMission() {
    ui->mobbingMission_200->setChecked(false);
    ui->mobbingMission_210->setChecked(false);
    ui->mobbingMission_220->setChecked(false);
    ui->mobbingMission_225->setChecked(false);
    ui->mobbingMission_230->setChecked(false);
    ui->mobbingMission_235->setChecked(false);
    ui->d200->setValue(0);
    ui->d210->setValue(0);
    ui->d220->setValue(0);
    ui->d225->setValue(0);
    ui->d230->setValue(0);
    ui->d235->setValue(0);
}
