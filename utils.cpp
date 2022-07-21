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
    //更新變數避免計算錯誤
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

    for(int i = 0; i < 2; i++) {
        autLV = AutLV[i]->value();
        autCurrent = AutCurrent[i]->value();
        autUpgradeInt[i] = AutUpgrade[i]->text().toInt();

        if(autCurrent > autUpgradeInt[i]) {
            if(autUpgradeInt[i] != 0 && autLV != AUTMAXLV) {
                AutCurrent[i]->setValue(autUpgradeInt[i]);
            }
            else AutCurrent[i]->setValue(0);
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

//更新升級所需AUT數量
void MainUI::upgradeVal_aut() {
    AutTotal->setNum(0);

    for(int i = 0; i < 2; i++) {
        autLV = AutLV[i]->value();

        //更新目前AUT
        if(autLV != 0) AutTotal->setNum(autLV * 10 + AutTotal->text().toInt());

        switch(autLV) {
        case 0: AutUpgrade[i]->setText("?"); break;
        case AUTMAXLV: AutUpgrade[i]->setNum(0); break;
        default: AutUpgrade[i]->setNum(9 * autLV * autLV + 20 * autLV); break;
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

//更新目前AUT
void MainUI::updateAut() {
    for(int i = 0; i < 2; i++) {
        autLV = AutLV[i]->value();

        //更新目前AUT
        if(autLV != 0) AutTotal->setNum(autLV * 10 + AutTotal->text().toInt());
    }
}

//更新屬性增加量數據
void MainUI::updateAp(int mode) {
    //計算屬性增加量不可納入極限屬性 & 公會技能增加的ARC
    int arc = ArcTotal->text().toInt() - hyperStats - guildSkill;
    int aut = AutTotal->text().toInt();

    switch (mode) {
    case 0: ArcTotal->setToolTip(QStringLiteral("屬性增加量：%1").arg(arc * NORMAL_ARC)); break;
    case 1: ArcTotal->setToolTip(QStringLiteral("屬性增加量：%1").arg(arc * NORMAL_ARC * XENON_RATIO)); break;
    case 2: ArcTotal->setToolTip(QStringLiteral("屬性增加量：%1").arg(arc * NORMAL_ARC * DA_RATIO)); break;
    case 3: AutTotal->setToolTip(QStringLiteral("屬性增加量：%1").arg(aut * NORMAL_AUT + 300)); break;
    case 4: AutTotal->setToolTip(QStringLiteral("屬性增加量：%1").arg((aut * NORMAL_AUT + 300) * XENON_RATIO)); break;
    case 5: AutTotal->setToolTip(QStringLiteral("屬性增加量：%1").arg((aut * NORMAL_AUT + 300) * DA_RATIO)); break;
    }
}

//升級所需楓幣
int MainUI::arcUpgradeCost(int lv, int from, int to) {
    double result = 0;

    for(int i = from - 1; i < to - 1; i++) {
        switch (lv) {
        case 0: result += ARC200_COST[i]; break;
        case 1: result += ARC210_COST[i]; break;
        case 2: result += ARC220_COST[i]; break;
        default: result += ARC225_COST[i]; break;
        }
    }

    return result;
}
double MainUI::autUpgradeCost(int lv, int from, int to) {
    double result = 0;

    for(int i = from - 1; i < to - 1; i++) {
        switch (lv) {
        case 0: result += AUT260_COST[i]; break;
        case 1: result += AUT270_COST[i]; break;
        }
    }

    return result;
}

//ARC被擊傷害 & 增傷
void MainUI::arcDamage(int x, int y) {
    float percent = (float(x) / float(y)) * 100;

    for(int i = 0; i < 9; i++) {
        if(percent < damageList_arc[i]) {
            ui->damage->setNum(damageList_arc[i]);
            ui->hit_damage->setNum(hit_damageList_arc[i]);
            break;
        }
        else if(percent >= damageList_arc[i] && percent < damageList_arc[i + 1]) {
            ui->damage->setNum(damageList_arc[i]);
            ui->hit_damage->setNum(hit_damageList_arc[i]);
            break;
        }
        else {
            ui->damage->setNum(damageList_arc[i]);
            ui->hit_damage->setNum(hit_damageList_arc[i]);
        }
    }

    //1.5倍傷害需求尾數為5的值需額外加5
    if((y * 15) % 100 == 50) ui->maxDamage_arc->setNum(y * 1.5 + 5);
    else ui->maxDamage_arc->setNum(y * 1.5);
}

//AUT被擊傷害 & 增傷
void MainUI::autDamage(int x, int y) {
    if(x < y) {
        if(y - x <= 100) {
            ui->damage_aut->setNum(damageList_aut[(y - x) / 10]);
            ui->hit_damage_aut->setNum(hit_damageList_aut[(y - x) / 10]);
        }
        else {
            ui->damage_aut->setNum(5);
            ui->hit_damage_aut->setNum(200);
        }
    }
    else {
        if(x - y <= 50) ui->damage_aut->setNum(damageList_aut2[(x - y) / 10]);
        else ui->damage_aut->setNum(125);
        ui->hit_damage_aut->setNum(100);
    }
}

//秘法觸媒
void MainUI::transArc(int lv, int arc) {
    ui->transArc_before->setEnabled((lv == ARCMAXLV) ? false : true);

    double total = floor((arcUpgradeList[lv - 1] + arc) * 0.8);

    for(int i = 0; i < lv; i++) {
        if(total >= arcUpgradeList[lv - i - 1]) {
            ui->transCost->setText(decimalSeparator(arcUpgradeCost(ui->selectARC->currentIndex(), 1, lv - i)));

            ui->transLV_after->setNum(lv - i);
            ui->transArc_after->setNum(total - arcUpgradeList[lv - i - 1]);
            break;
        }
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

void MainUI::arcLvChanged(QLabel* arcimg, int arc) {
    upgradeVal();
    updateAp(ArcMode->currentIndex());
    updateArcToolTips(arcimg, arc);
}

void MainUI::autLvChanged(QLabel* autimg, int aut) {
    upgradeVal_aut();
    updateAp(AutMode->currentIndex() + 3);
    updateAutToolTips(autimg, aut);
}
