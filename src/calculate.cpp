#include "mainui.h"

//更新各ARC的升級資訊
void MainUI::updateArcToolTips(QLabel* arcimg, int arc) {
    //更新變數
    dailyTask();

    int arcLv = ArcLV[arc]->value();
    int arcVal = ArcCurrent[arc]->value();
    int arcVal_max = arcUpgradeList[arcLv - 1] + arcVal;
    int target = ArcUpgrade[arc]->text().toInt();
    int target_max = ARCMAXTOTAL;

    //升級 & 滿級所需楓幣
    arcUpgradeMeso[arc] = arcUpgradeCost(arc, arcLv, arcLv + 1);
    arcUpgradeMeso_max[arc] = arcUpgradeCost(arc, arcLv, ARCMAXLV);

    //升級 & 滿級所需天數
    arcUpgradeDays[arc] = 0;
    arcMaxDays[arc] = 0;

    if(arcLv == 0 || (!dailyIsChecked[arc] && !weeklyIsChecked[arc])) {
        arcimg->setToolTip(QStringLiteral("升級所需楓幣：?\n升級所需天數：?\n升級日期：?\n-\n滿級所需楓幣：?\n滿級所需天數：?\n滿級日期：?"));
    }
    else {
        while (true) {
            if (dailyIsChecked[arc]) {
                arcVal += dailyMission[arc];
                arcVal_max += dailyMission[arc];
            }
            if (weeklyIsChecked[arc] && (arcMaxDays[arc] % 7 == 0)) {
                arcVal += weeklyMission[arc];
                arcVal_max += weeklyMission[arc];
            }

            if (arcVal >= target && arcVal_max >= target_max) break;
            if (arcVal < target) arcUpgradeDays[arc]++;
            if (arcVal_max < target_max) arcMaxDays[arc]++;
        }

        arcimg->setToolTip(QStringLiteral("升級所需楓幣：%1\n升級所需天數：%2\n升級日期：%3\n-\n滿級所需楓幣：%4\n滿級所需天數：%5\n滿級日期：%6")
                    .arg(decimalSeparator(arcUpgradeMeso[arc]))
                    .arg(arcUpgradeDays[arc])
                    .arg(ui->startDate->date().addDays(arcUpgradeDays[arc]).toString("yyyy/MM/dd"))
                    .arg(decimalSeparator(arcUpgradeMeso_max[arc]))
                    .arg(arcMaxDays[arc])
                    .arg(ui->startDate->date().addDays(arcMaxDays[arc]).toString("yyyy/MM/dd"))
        );
    }
}

//更新各AUT的升級資訊
void MainUI::updateAutToolTips(QLabel* autimg, int aut) {
    //更新變數
    dailyTask_aut();

    int autLv = AutLV[aut]->value();
    int autVal = AutCurrent[aut]->value();
    int autVal_max = autUpgradeList[autLv - 1] + autVal;
    int target = AutUpgrade[aut]->text().toInt();

    //升級 & 滿級所需楓幣
    autUpgradeMeso[aut] = autUpgradeCost(aut, autLv, autLv + 1);
    autUpgradeMeso_max[aut] = autUpgradeCost(aut, autLv, AUTMAXLV);

    //升級 & 滿級所需天數
    autUpgradeDays[aut] = 0;
    autMaxDays[aut] = 0;

    if(autLv == 0 || !dailyIsChecked_aut[aut]) {
        autimg->setToolTip(QStringLiteral("升級所需楓幣：?\n升級所需天數：?\n升級日期：?\n-\n滿級所需楓幣：?\n滿級所需天數：?\n滿級日期：?"));
    }
    else {
        while (autVal < target || autVal_max < AUTMAXTOTAL) {
            autVal += dailyMission_aut[aut];
            autVal_max += dailyMission_aut[aut];
            if (aut == 0 && ui->mob265->isChecked()) {
                autVal += D265_MOB;
                autVal_max += D265_MOB;
            }

            if (autVal < target) autUpgradeDays[aut]++;
            autMaxDays[aut]++;
        }

        autimg->setToolTip(QStringLiteral("升級所需楓幣：%1億\n升級所需天數：%2\n升級日期：%3\n-\n滿級所需楓幣：%4億\n滿級所需天數：%5\n滿級日期：%6")
                    .arg(autUpgradeMeso[aut])
                    .arg(autUpgradeDays[aut])
                    .arg(ui->startDate_aut->date().addDays(autUpgradeDays[aut]).toString("yyyy/MM/dd"))
                    .arg(autUpgradeMeso_max[aut])
                    .arg(autMaxDays[aut])
                    .arg(ui->startDate_aut->date().addDays(autMaxDays[aut]).toString("yyyy/MM/dd"))
        );
    }
}

//計算到達目標ARC所需時間
void MainUI::dailyTask() {
    int targetArc = ui->targetArc->value();
    int maxReachArc = hyperStats + guildSkill; //計算前先加上極限屬性 & 公會技能增加的ARC
    day = 0;

    dailyIsChecked[0] = ui->daily200->isChecked();
    dailyIsChecked[1] = ui->daily210->isChecked();
    dailyIsChecked[2] = ui->daily220->isChecked();
    dailyIsChecked[3] = ui->daily225->isChecked();
    dailyIsChecked[4] = ui->daily230->isChecked();
    dailyIsChecked[5] = ui->daily235->isChecked();
    weeklyIsChecked[0] = ui->weekly200->isChecked();
    weeklyIsChecked[1] = ui->weekly210->isChecked();
    weeklyIsChecked[2] = ui->weekly220->isChecked();
    weeklyIsChecked[3] = ui->weekly225->isChecked();
    weeklyIsChecked[4] = ui->weekly230->isChecked();
    weeklyIsChecked[5] = ui->weekly235->isChecked();

    //計算前先偵錯
    avoidError();

    //若已達到
    if(targetArc <= ArcTotal->text().toInt()) {
        ui->targetDays->setNum(0);
        ui->targetDate->setDate(ui->startDate->date());
    }
    //若未達到
    else {
        //計算可能達到的最高ARC
        for(int i = 0; i < ARCTYPE; i++){
            arcLV = ArcLV[i]->value();
            dailyGet[i] = (dailyIsChecked[i]) ? dailyMission[i] : 0;
            weeklyGet[i] = (weeklyIsChecked[i]) ? weeklyMission[i] : 0;

            if(dailyGet[i] + weeklyGet[i] != 0) maxReachArc += 220;
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
            int current[ARCTYPE];
            int cntLv[ARCTYPE];

            //如果目標ARC不為10的倍數則無條件進位
            if((targetArc % 10) != 0) targetArc += 10 - (targetArc % 10);

            //計算目前各ARC累積量
            for(int i = 0; i < ARCTYPE; i++) {
                cntLv[i] = 0;
                arcLV = ArcLV[i]->value();
                arcCurrent = ArcCurrent[i]->value();
                current[i] = (arcLV == 0) ? 0 : (arcUpgradeList[arcLV - 1] + arcCurrent);
            }

            //迴圈一次等於過一天
            while(count < targetArc) {
                for(int i = 0; i < ARCTYPE; i++){
                    arcLV = ArcLV[i]->value();
                    //當前等級+暫存等級小於上限且可獲得數量大於0
                    if((arcLV + cntLv[i]) < ARCMAXLV && (dailyGet[i] + weeklyGet[i]) > 0){
                        current[i] += dailyGet[i];
                        if(day % 7 == 0) current[i] += weeklyGet[i];

                        if (current[i] >= arcUpgradeList[arcLV + cntLv[i]]) {
                            count += (arcLV + cntLv[i] == 0) ? 30 : 10;
                            cntLv[i]++;
                        }
                    }
                }

                //起始日獲得量也計算進去，若第一次獲得就達標，所需天數就是0天
                if(count < targetArc) day++;
            }

            ui->targetDays->setNum(day);
            ui->targetDate->setDate(ui->startDate->date().addDays(day));
        }
    }
}

//計算到達目標AUT所需時間
void MainUI::dailyTask_aut() {
    int targetAut = ui->targetAut->value();
    int maxReachAut = 0;
    day = 0;

    dailyIsChecked_aut[0] = ui->daily260->isChecked();
    dailyIsChecked_aut[1] = ui->daily270->isChecked();
    dailyIsChecked_aut[2] = ui->daily275->isChecked();

    //計算前先偵錯
    avoidError();

    //若已達到
    if(targetAut <= AutTotal->text().toInt()) {
        ui->targetDays_aut->setNum(0);
        ui->targetDate_aut->setDate(ui->startDate_aut->date());
    }
    //若未達到
    else {
        dailyGet[0] = (dailyIsChecked_aut[0] && ui->mob265->isChecked()) ? dailyMission_aut[0] + D265_MOB : dailyMission_aut[0];
        dailyGet[0] = (dailyIsChecked_aut[0]) ? dailyGet[0] : 0;
        dailyGet[1] = (dailyIsChecked_aut[1]) ? dailyMission_aut[1] : 0;
        dailyGet[2] = (dailyIsChecked_aut[2]) ? dailyMission_aut[2] : 0;

        //計算可能達到的最高AUT
        for(int i = 0; i < AUTTYPE; i++){
            autLV = AutLV[i]->value();
            if(dailyGet[i] != 0) maxReachAut += 110;
            else if(autLV != 0) maxReachAut += autLV * 10;
        }
        //-------------------------------------------------------------
        //目標AUT超過可能達到的最高值，停止計算
        if(targetAut > maxReachAut) {
            warningMsg(QStringLiteral("目標訂太高了，無法達到 OAO"));
            ui->targetAut->setValue(0);
        }
        else {
            int count = AutTotal->text().toInt();
            int current[AUTTYPE];
            int cntLv[AUTTYPE];

            //如果目標AUT不為10的倍數則無條件進位
            if((targetAut % 10) != 0) targetAut += 10 - (targetAut % 10);

            //計算目前各AUT累積量
            for(int i = 0; i < AUTTYPE; i++) {
                cntLv[i] = 0;
                autLV = AutLV[i]->value();
                autCurrent = AutCurrent[i]->value();

                if(autLV == 0) current[i] = 0;
                else current[i] = autUpgradeList[autLV - 1] + autCurrent;
            }

            //迴圈一次等於過一天
            while(count < targetAut) {
                for(int i = 0; i < AUTTYPE; i++){
                    autLV = AutLV[i]->value();
                    //當前等級+暫存等級小於上限且一天可獲得數量大於0
                    if((autLV + cntLv[i]) < AUTMAXLV && dailyGet[i] > 0){
                        current[i] += dailyGet[i];

                        if(current[i] >= (autUpgradeList[autLV + cntLv[i]])) {
                            count += 10;
                            cntLv[i]++;
                        }
                    }
                }

                //起始日獲得量也計算進去，若第一次獲得就達標，所需天數就是0天
                if(count < targetAut) day++;
            }

            ui->targetDays_aut->setNum(day);
            ui->targetDate_aut->setDate(ui->startDate_aut->date().addDays(day));
        }
    }
}
