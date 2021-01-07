#include "mainui.h"

void MainUI::avoidError() {
    //升級所需楓幣
    if(ui->ArcLV_from->value() > ui->ArcLV_to->value()) {
        warningMsg(QStringLiteral("目標等級需比當前等級還大唷！"));
        ui->ArcLV_from->setValue(1);
        ui->ArcLV_to->setValue(2);
        ui->cost->setText(decimalSeparator(UPGRADE_BASE));
    }
    else {
        for(int i = 0; i < 6; i++) {
            arcLV = ArcLV[i]->value();
            arcCurrent = ArcCurrent[i]->value();
            arcUpgradeInt[i] = ArcUpgrade[i]->text().toInt();

            if(arcCurrent > arcUpgradeInt[i]) {
                if(arcUpgradeInt[i] != 0 && arcLV != ARCMAXLV) {
                    warningMsg(QStringLiteral("當前數量超過升級數量！"));
                    ArcCurrent[i]->setValue(0);
                }
                else if(arcLV == ARCMAXLV) {
                    warningMsg(QStringLiteral("ARC滿等就不能再合成啦！"));
                    ArcCurrent[i]->setValue(0);
                }
                else {
                    warningMsg(QStringLiteral("請先輸入ARC等級唷！"));
                    ArcCurrent[i]->setValue(0);
                }
            }
        }
    }
}
