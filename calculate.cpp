#include "mainui.h"

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

//更新各ARC的升級資訊
void MainUI::updateArcToolTips(QLabel* arcimg, int arc, int lv) {
    //升級所需楓幣
    if(lv <= ARCMAXLV) {
        if(arc == 0) arcUpgradeMeso[arc] = upgradeMeso(lv, lv + 1, true);
        else arcUpgradeMeso[arc] = upgradeMeso(lv, lv + 1, false);
    }

    //升級所需天數
    int temp = ArcCurrent[arc]->value();
    arcUpgradeDays[arc] = 0;

    switch (arc) {
    case 0:
        while(temp < ArcUpgrade[arc]->text().toInt()) {
            if(ui->d200->value() == 0) {
                arcUpgradeDays[arc] = 9999;
                break;
            }
            else {
                temp += ui->d200->value();
                arcUpgradeDays[arc]++;
            }
        } break;
    case 1:
        while(temp < ArcUpgrade[arc]->text().toInt()) {
            if(ui->d210->value() == 0) {
                arcUpgradeDays[arc] = 9999;
                break;
            }
            else {
                temp += ui->d210->value();
                arcUpgradeDays[arc]++;
            }
        } break;
    case 2:
        temp *= ARC_TO_COIN_220;
        while(temp < ArcUpgrade[arc]->text().toInt() * ARC_TO_COIN_220) {
            if(ui->d220->value() == 0) {
                if(ui->mobbingMission_220->isChecked()) {
                    temp += D220_MOB;
                    arcUpgradeDays[arc]++;
                }
                else {
                    arcUpgradeDays[arc] = 9999;
                    break;
                }
            }
            else {
                if(ui->mobbingMission_220->isChecked()) {
                    temp += ui->d220->value() + D220_MOB;
                }
                else temp += ui->d220->value();
                arcUpgradeDays[arc]++;
            }
        } break;
    case 3:
        temp *= ARC_TO_COIN_225;
        while(temp < ArcUpgrade[arc]->text().toInt() * ARC_TO_COIN_225) {
            if(ui->d225->value() == 0) {
                if(ui->mobbingMission_225->isChecked()) {
                    temp += D225_MOB;
                    arcUpgradeDays[arc]++;
                }
                else {
                    arcUpgradeDays[arc] = 9999;
                    break;
                }
            }
            else {
                if(ui->mobbingMission_225->isChecked()) {
                    temp += ui->d225->value() + D225_MOB;
                }
                else temp += ui->d225->value();
                arcUpgradeDays[arc]++;
            }
        } break;
    case 4:
        while(temp < ArcUpgrade[arc]->text().toInt()) {
            if(ui->d230->value() == 0) {
                arcUpgradeDays[arc] = 9999;
                break;
            }
            else {
                temp += ui->d230->value();
                arcUpgradeDays[arc]++;
            }
        } break;
    case 5:
        while(temp < ArcUpgrade[arc]->text().toInt()) {
            if(ui->d235->value() == 0) {
                arcUpgradeDays[arc] = 9999;
                break;
            }
            else {
                temp += ui->d235->value();
                arcUpgradeDays[arc]++;
            }
        } break;
    }

    //若所需天數無窮大時
    if(arcUpgradeDays[arc] >= 9999) {
        arcimg->setToolTip(
                    QStringLiteral("升級所需楓幣：%1\n升級所需天數：?\n升級日期：?")
                        .arg(decimalSeparator(arcUpgradeMeso[arc]))
        );
    }
    else {
        arcimg->setToolTip(
                    QStringLiteral("升級所需楓幣：%1\n升級所需天數：%2\n升級日期：%3")
                        .arg(decimalSeparator(arcUpgradeMeso[arc]))
                        .arg(arcUpgradeDays[arc])
                        .arg(ui->startDate->date().addDays(arcUpgradeDays[arc]).toString("yyyy/MM/dd"))
        );
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

//計算到達目標所需時間
void MainUI::dailyTask() {
    int targetArc = ui->targetArc->value();
    int maxReachArc = hyperStats + guildSkill; //計算前先加上極限屬性 & 公會技能增加的ARC
    day = 0;

    //計算前先偵錯
    avoidError();

    //若已達到
    if(targetArc <= ArcTotal->text().toInt()) {
        ui->targetDays->setNum(0);
        ui->targetDate->setDate(ui->startDate->date());
    }
    //若未達到
    else {
        dailyGet[0] = ui->d200->value();
        dailyGet[1] = ui->d210->value();
        if(ui->mobbingMission_220->isChecked())
            dailyGet[2] = ui->d220->value() + D220_MOB;
        else dailyGet[2] = ui->d220->value();
        if(ui->mobbingMission_225->isChecked())
            dailyGet[3] = ui->d225->value() + D225_MOB;
        else dailyGet[3] = ui->d225->value();
        dailyGet[4] = ui->d230->value();
        dailyGet[5] = ui->d235->value();

        //計算可能達到的最高ARC
        for(int i = 0; i < 6; i++){
            arcLV = ArcLV[i]->value();
            if(dailyGet[i] != 0) maxReachArc += 220;
            else if(arcLV != 0) maxReachArc += arcLV * 10 + 20;
        }
        //-------------------------------------------------------------
        //目標ARC超過可能達到的最高值，停止計算
        if(targetArc > maxReachArc) {
            warningMsg(QStringLiteral("目標訂太高了，無法達到 OAO"));
            ui->targetArc->setValue(0);
        }
        else {
            int count = ArcTotal->text().toInt();
            int current[6];
            int cntLv[6];

            //如果目標ARC不為10的倍數則無條件進位
            if((targetArc % 10) != 0) targetArc += 10 - (targetArc % 10);

            //計算目前各ARC累積量
            for(int i = 0; i < 6; i++) {
                cntLv[i] = 0;
                arcLV = ArcLV[i]->value();
                arcCurrent = ArcCurrent[i]->value();

                if(arcLV == 0) current[i] = 0;
                else {
                    switch (i) {
                    case 2: //拉契爾恩轉換為硬幣來計算
                        if(arcLV == 1) current[i] = arcCurrent * ARC_TO_COIN_220;
                        else current[i] = (upgradeList[arcLV - 1] + arcCurrent) * ARC_TO_COIN_220;
                        break;
                    case 3: //阿爾卡娜轉換為硬幣來計算
                        if(arcLV == 1) current[i] = arcCurrent * ARC_TO_COIN_225;
                        else current[i] = (upgradeList[arcLV - 1] + arcCurrent) * ARC_TO_COIN_225;
                        break;
                    default:
                        if(arcLV == 1) current[i] = arcCurrent;
                        else current[i] = upgradeList[arcLV - 1] + arcCurrent;
                        break;
                    }
                }
            }

            //迴圈一次等於過一天
            while(count < targetArc) {
                for(int i = 0; i < 6; i++){
                    arcLV = ArcLV[i]->value();
                    //當前等級+暫存等級小於上限且一天可獲得數量大於0
                    if((arcLV + cntLv[i]) < ARCMAXLV && dailyGet[i] > 0){
                        current[i] += dailyGet[i];

                        //設定ARC轉硬幣倍率
                        int a2c;
                        switch (i) {
                        case 2: a2c = ARC_TO_COIN_220; break;
                        case 3: a2c = ARC_TO_COIN_225; break;
                        default: a2c = 1; break;
                        }

                        if(current[i] >= (upgradeList[arcLV + cntLv[i]] * a2c)) {
                            if(arcLV + cntLv[i] == 0) count += 30;
                            else count += 10;
                            cntLv[i]++;
                        }
                    }
                }
                day++;
            }
            ui->targetDays->setNum(day);
            ui->targetDate->setDate(ui->startDate->date().addDays(day));
        }
    }
}

//升級所需楓幣
int MainUI::upgradeMeso(int from, int to, bool discount) {
    if(from == to || from == 0 || from == ARCMAXLV) return 0;
    //套用強化費用減少
    else if(discount) {
        int result_arc1 = UPGRADE_BASE_DISC;

        for(int i = to - 2; i >= 1; i--){
            for(int j = 0; j < i; j++) result_arc1 += UPGRADE_BASE_DISC_INCREASE;
            result_arc1 += UPGRADE_BASE_DISC;
        }

        if(from > 1) result_arc1 -= upgradeMeso(1, from, discount);
        return result_arc1;
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
void MainUI::transArc(int lv, int arc){
    ui->transArc_before->setEnabled(true);

    if(arc > (lv * lv + 11) || lv == ARCMAXLV) {
        ui->transArc_before->setValue(0);
    }

    double total = ceil((upgradeList[lv - 1] + ui->transArc_before->value()) * 0.8);

    for(int i = 0; i < lv; i++) {
        if(total >= upgradeList[lv - i - 1]) {
            ui->transCost->setText(decimalSeparator(upgradeMeso(1, lv - i, ui->arc1Switch->isChecked())));

            ui->transLV_after->setNum(lv - i);
            ui->transArc_after->setNum(total - upgradeList[lv - i - 1]);
            break;
        }
    }

    if(lv == ARCMAXLV) {
        ui->transArc_before->setEnabled(false);
        warningMsg(QStringLiteral("19等滿經驗直接轉就好\n可以省一筆錢唷！"));
    }
}
