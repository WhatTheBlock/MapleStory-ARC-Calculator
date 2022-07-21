#include "mainui.h"

//更新各ARC的升級資訊
void MainUI::updateArcToolTips(QLabel* arcimg, int arc) {
    dailyTask();

    int dailyGet[6] = { 0 };
    dailyGet[0] = ui->d200->value();
    dailyGet[1] = ui->d210->value();
    dailyGet[2] = ui->d220->value();
    dailyGet[3] = ui->d225->value();
    dailyGet[4] = ui->d230->value();
    dailyGet[5] = ui->d235->value();

    bool mobbingMissionState[6] = { 0 };
    mobbingMissionState[0] = ui->mobbingMission_200->isChecked();
    mobbingMissionState[1] = ui->mobbingMission_210->isChecked();
    mobbingMissionState[2] = ui->mobbingMission_220->isChecked();
    mobbingMissionState[3] = ui->mobbingMission_225->isChecked();
    mobbingMissionState[4] = ui->mobbingMission_230->isChecked();
    mobbingMissionState[5] = ui->mobbingMission_235->isChecked();

    int mobbingMission[6] = { 0 };
    mobbingMission[0] = D200_MOB;
    mobbingMission[1] = D210_MOB;
    mobbingMission[2] = D220_MOB;
    mobbingMission[3] = D225_MOB;
    mobbingMission[4] = D230_MOB;
    mobbingMission[5] = D235_MOB;

    int arcLv = ArcLV[arc]->value();
    int characterLV = ui->characterLV->value();
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

    if(arcLv == 0 || (dailyGet[arc] == 0 && !mobbingMissionState[arc])) {
        arcimg->setToolTip(QStringLiteral("升級所需楓幣：?\n升級所需天數：?\n升級日期：?\n-\n滿級所需楓幣：?\n滿級所需天數：?\n滿級日期：?"));
    }
    else {
        if(arc == 2) {
            arcVal *= ARC_TO_COIN_220;
            arcVal_max *= ARC_TO_COIN_220;
            target *=  ARC_TO_COIN_220;
            target_max *=  ARC_TO_COIN_220;
        }
        else if(arc == 3) {
            arcVal *= ARC_TO_COIN_225;
            arcVal_max *= ARC_TO_COIN_225;
            target *= ARC_TO_COIN_225;
            target_max *=  ARC_TO_COIN_225;
        }

        while(arcVal < target) {
            if(mobbingMissionState[arc]) {
                arcVal += mobbingMission[arc];
                if(arc == 0 && characterLV >= 205) arcVal += D205_MOB;
                else if(arc == 1 && characterLV >= 215) arcVal += D215_MOB;
            }
            arcVal += dailyGet[arc];
            arcUpgradeDays[arc]++;
        }

        while(arcVal_max < target_max) {
            if(mobbingMissionState[arc]) {
                arcVal_max += mobbingMission[arc];
                if(arc == 0 && characterLV >= 205) arcVal_max += D205_MOB;
                else if(arc == 1 && characterLV >= 215) arcVal_max += D215_MOB;
            }
            arcVal_max += dailyGet[arc];
            arcMaxDays[arc]++;
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
    dailyTask_aut();

    bool mobbingMissionState[3] = { 0 };
    mobbingMissionState[0] = ui->mobbingMission_260->isChecked();
    mobbingMissionState[1] = ui->mobbingMission_270->isChecked();

    int mobbingMission[3] = { 0 };
    mobbingMission[0] = D260_MOB;
    mobbingMission[1] = D270_MOB;

    int autLv = AutLV[aut]->value();
    int autVal = AutCurrent[aut]->value();
    int autVal_max = autUpgradeList[autLv - 1] + autVal;
    int target = AutUpgrade[aut]->text().toInt();
    int target_max = AUTMAXTOTAL;

    //升級 & 滿級所需楓幣
    autUpgradeMeso[aut] = autUpgradeCost(aut, autLv, autLv + 1);
    autUpgradeMeso_max[aut] = autUpgradeCost(aut, autLv, AUTMAXLV);

    //升級 & 滿級所需天數
    autUpgradeDays[aut] = 0;
    autMaxDays[aut] = 0;

    if(autLv == 0 || !mobbingMissionState[aut]) {
        autimg->setToolTip(QStringLiteral("升級所需楓幣：?\n升級所需天數：?\n升級日期：?\n-\n滿級所需楓幣：?\n滿級所需天數：?\n滿級日期：?"));
    }
    else {
        while(autVal < target) {
            autVal += mobbingMission[aut];
            if(aut == 0 && ui->mob265->isChecked()) autVal += D265_MOB;
            autUpgradeDays[aut]++;
        }

        while(autVal_max < target_max) {
            autVal_max += mobbingMission[aut];
            if(aut == 0 && ui->mob265->isChecked()) autVal_max += D265_MOB;
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

    //計算前先偵錯
    avoidError();

    //若已達到
    if(targetArc <= ArcTotal->text().toInt()) {
        ui->targetDays->setNum(0);
        ui->targetDate->setDate(ui->startDate->date());
    }
    //若未達到
    else {
        if(ui->characterLV->value() >= 205)
            dailyGet[0] = (ui->mobbingMission_200->isChecked()) ? ui->d200->value() + D200_MOB + D205_MOB : ui->d200->value();
        else dailyGet[0] = (ui->mobbingMission_200->isChecked()) ? ui->d200->value() + D200_MOB : ui->d200->value();
        if(ui->characterLV->value() >= 215)
            dailyGet[1] = (ui->mobbingMission_210->isChecked()) ? ui->d210->value() + D210_MOB + D215_MOB : ui->d210->value();
        else dailyGet[1] = (ui->mobbingMission_210->isChecked()) ? ui->d210->value() + D210_MOB : ui->d210->value();
        dailyGet[2] = (ui->mobbingMission_220->isChecked()) ? ui->d220->value() + D220_MOB : ui->d220->value();
        dailyGet[3] = (ui->mobbingMission_225->isChecked()) ? ui->d225->value() + D225_MOB : ui->d225->value();
        dailyGet[4] = (ui->mobbingMission_230->isChecked()) ? ui->d230->value() + D230_MOB : ui->d230->value();
        dailyGet[5] = (ui->mobbingMission_235->isChecked()) ? ui->d235->value() + D235_MOB : ui->d235->value();

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
                    current[i] = arcUpgradeList[arcLV - 1] + arcCurrent;
                    if(i == 2) current[i] *= ARC_TO_COIN_220; //拉契爾恩轉換為硬幣來計算
                    else if (i == 3) current[i] *= ARC_TO_COIN_225; //阿爾卡娜轉換為硬幣來計算
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

                        if(current[i] >= (arcUpgradeList[arcLV + cntLv[i]] * a2c)) {
                            (arcLV + cntLv[i] == 0) ? count += 30 : count += 10;
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

//計算到達目標AUT所需時間
void MainUI::dailyTask_aut() {
    int targetAut = ui->targetAut->value();
    int maxReachAut = 0;
    day = 0;

    //計算前先偵錯
    avoidError();

    //若已達到
    if(targetAut <= AutTotal->text().toInt()) {
        ui->targetDays_aut->setNum(0);
        ui->targetDate_aut->setDate(ui->startDate_aut->date());
    }
    //若未達到
    else {
        if(ui->mobbingMission_260->isChecked())
            dailyGet[0] = (ui->mob265->isChecked()) ? D260_MOB + D265_MOB : D260_MOB;
        else dailyGet[0] = 0;
        dailyGet[1] = (ui->mobbingMission_270->isChecked()) ? D270_MOB : 0;

        //計算可能達到的最高AUT
        for(int i = 0; i < 2; i++){
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
            int current[3];
            int cntLv[3];

            //如果目標AUT不為10的倍數則無條件進位
            if((targetAut % 10) != 0) targetAut += 10 - (targetAut % 10);

            //計算目前各AUT累積量
            for(int i = 0; i < 2; i++) {
                cntLv[i] = 0;
                autLV = AutLV[i]->value();
                autCurrent = AutCurrent[i]->value();

                if(autLV == 0) current[i] = 0;
                else current[i] = autUpgradeList[autLV - 1] + autCurrent;
            }

            //迴圈一次等於過一天
            while(count < targetAut) {
                for(int i = 0; i < 2; i++){
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
                day++;
            }
            ui->targetDays_aut->setNum(day);
            ui->targetDate_aut->setDate(ui->startDate_aut->date().addDays(day));
        }
    }
}
