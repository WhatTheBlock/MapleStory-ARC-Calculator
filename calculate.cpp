#include "mainui.h"

//更新各ARC的升級資訊
void MainUI::updateArcToolTips(QLabel* arcimg, int arc, int lv) {
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

    int characterLV = ui->characterLV->value();

    //升級所需楓幣
    arcUpgradeMeso[arc] = (lv != 99) ? arcUpgradeCost(arc, lv, lv + 1) : 0;

    //升級 & 滿級所需天數
    int temp = ArcCurrent[arc]->value();
    arcUpgradeDays[arc] = 0;
    arcMaxDays[arc] = 0;

    bool invalid = false;

    switch (arc) {
    case 2:
        temp *= ARC_TO_COIN_220;
        while(temp < ArcUpgrade[arc]->text().toInt() * ARC_TO_COIN_220) {
            if(dailyGet[arc] == 0 && !mobbingMissionState[arc]) {
                invalid = true;
                break;
            }
            else {
                if(mobbingMissionState[arc]) temp += mobbingMission[arc];
                temp += dailyGet[arc];
                arcUpgradeDays[arc]++;
            }
        } break;
    case 3:
        temp *= ARC_TO_COIN_225;
        while(temp < ArcUpgrade[arc]->text().toInt() * ARC_TO_COIN_225) {
            if(dailyGet[arc] == 0 && !mobbingMissionState[arc]) {
                invalid = true;
                break;
            }
            else {
                if(mobbingMissionState[arc]) temp += mobbingMission[arc];
                temp += dailyGet[arc];
                arcUpgradeDays[arc]++;
            }
        } break;
    default:
        while(temp < ArcUpgrade[arc]->text().toInt()) {
            if(dailyGet[arc] == 0 && !mobbingMissionState[arc]) {
                invalid = true;
                break;
            }
            else {
                if(mobbingMissionState[arc]) temp += mobbingMission[arc];
                if(arc == 0 && characterLV >= 205) temp += D205_MOB;
                else if(arc == 1 && characterLV >= 215) temp += D215_MOB;
                temp += dailyGet[arc];
                arcUpgradeDays[arc]++;
            }
        }
    }

    if(invalid) arcimg->setToolTip(QStringLiteral("升級所需楓幣：?\n升級所需天數：?\n升級日期：?"));
    else {
        arcimg->setToolTip(
                    QStringLiteral("升級所需楓幣：%1\n升級所需天數：%2\n升級日期：%3")
                        .arg(decimalSeparator(arcUpgradeMeso[arc]))
                        .arg(arcUpgradeDays[arc])
                        .arg(ui->startDate->date().addDays(arcUpgradeDays[arc]).toString("yyyy/MM/dd"))
        );
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
