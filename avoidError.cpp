#include "mainui.h"

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
