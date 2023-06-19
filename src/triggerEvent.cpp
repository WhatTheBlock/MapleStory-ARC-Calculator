/* 觸發事件 */

#include "mainui.h"

//變更視窗大小
void MainUI::on_tabWidget_currentChanged(int index) {
    switch (index) {
        case 0:
            MainUI::setFixedSize(688, 429);
            break;
        case 1:
            MainUI::setFixedSize(518, 424);
            break;
        case 2:
            ui->toolBox->setCurrentIndex(0);
            MainUI::setFixedSize(372, 659);
            break;
    }
}
void MainUI::on_toolBox_currentChanged(int index) {
    switch(index) {
        case 0:
            MainUI::setFixedSize(372, 659);
            break;
        case 1:
            MainUI::setFixedSize(372, 454);
            break;
    }
}

void MainUI::on_Arc1LV_valueChanged() { arcLvChanged(ui->arcimg1, 0); }
void MainUI::on_Arc2LV_valueChanged() { arcLvChanged(ui->arcimg2, 1); }
void MainUI::on_Arc3LV_valueChanged() { arcLvChanged(ui->arcimg3, 2); }
void MainUI::on_Arc4LV_valueChanged() { arcLvChanged(ui->arcimg4, 3); }
void MainUI::on_Arc5LV_valueChanged() { arcLvChanged(ui->arcimg5, 4); }
void MainUI::on_Arc6LV_valueChanged() { arcLvChanged(ui->arcimg6, 5); }
void MainUI::on_Aut1LV_valueChanged() { autLvChanged(ui->autimg1, 0); }
void MainUI::on_Aut2LV_valueChanged() { autLvChanged(ui->autimg2, 1); }
void MainUI::on_Aut3LV_valueChanged() { autLvChanged(ui->autimg3, 2); }

void MainUI::on_Arc1current_valueChanged() { updateArcToolTips(ui->arcimg1, 0); }
void MainUI::on_Arc2current_valueChanged() { updateArcToolTips(ui->arcimg2, 1); }
void MainUI::on_Arc3current_valueChanged() { updateArcToolTips(ui->arcimg3, 2); }
void MainUI::on_Arc4current_valueChanged() { updateArcToolTips(ui->arcimg4, 3); }
void MainUI::on_Arc5current_valueChanged() { updateArcToolTips(ui->arcimg5, 4); }
void MainUI::on_Arc6current_valueChanged() { updateArcToolTips(ui->arcimg6, 5); }
void MainUI::on_Aut1current_valueChanged() { updateAutToolTips(ui->autimg1, 0); }
void MainUI::on_Aut2current_valueChanged() { updateAutToolTips(ui->autimg2, 1); }
void MainUI::on_Aut3current_valueChanged() { updateAutToolTips(ui->autimg3, 2); }

void MainUI::on_ArcMode_currentIndexChanged(int index) { updateAp(index); }
void MainUI::on_AutMode_currentIndexChanged(int index) { updateAp(index + 3); }

void MainUI::on_daily200_clicked() { updateArcToolTips(ui->arcimg1, 0); }
void MainUI::on_daily210_clicked() { updateArcToolTips(ui->arcimg2, 1); }
void MainUI::on_daily220_clicked() { updateArcToolTips(ui->arcimg3, 2); }
void MainUI::on_daily225_clicked() { updateArcToolTips(ui->arcimg4, 3); }
void MainUI::on_daily230_clicked() { updateArcToolTips(ui->arcimg5, 4); }
void MainUI::on_daily235_clicked() { updateArcToolTips(ui->arcimg6, 5); }
void MainUI::on_weekly200_clicked() { on_daily200_clicked(); }
void MainUI::on_weekly210_clicked() { on_daily210_clicked(); }
void MainUI::on_weekly220_clicked() { on_daily220_clicked(); }
void MainUI::on_weekly225_clicked() { on_daily225_clicked(); }
void MainUI::on_weekly230_clicked() { on_daily230_clicked(); }
void MainUI::on_weekly235_clicked() { on_daily235_clicked(); }

void MainUI::on_daily260_clicked() { updateAutToolTips(ui->autimg1, 0); }
void MainUI::on_daily270_clicked() { updateAutToolTips(ui->autimg2, 1); }
void MainUI::on_daily275_clicked() { updateAutToolTips(ui->autimg3, 2); }
void MainUI::on_mob260_clicked() { on_daily260_clicked(); }
void MainUI::on_mob265_clicked() { on_daily260_clicked(); }

void MainUI::on_targetArc_valueChanged() { dailyTask(); }
void MainUI::on_targetAut_valueChanged() { dailyTask_aut(); }

void MainUI::on_startDate_userDateChanged(const QDate &date) {
    ui->targetDate->setDate(date.addDays(day));
}
void MainUI::on_startDate_aut_userDateChanged(const QDate &date) {
    ui->targetDate_aut->setDate(date.addDays(day));
}

void MainUI::on_selectAll_clicked() {
    on_dailyAll_clicked();
    on_weeklyAll_clicked();
}
void MainUI::on_dailyAll_clicked() {
    ui->daily200->setChecked(true);
    ui->daily210->setChecked(true);
    ui->daily220->setChecked(true);
    ui->daily225->setChecked(true);
    ui->daily230->setChecked(true);
    ui->daily235->setChecked(true);
}
void MainUI::on_weeklyAll_clicked() {
    ui->weekly200->setChecked(true);
    ui->weekly210->setChecked(true);
    ui->weekly220->setChecked(true);
    ui->weekly225->setChecked(true);
    ui->weekly230->setChecked(true);
    ui->weekly235->setChecked(true);
}

//ARC升級所需楓幣
void MainUI::on_selectARC_currentIndexChanged(int index) {
    ui->cost->setText(decimalSeparator(arcUpgradeCost(index, ui->ArcLV_from->value(), ui->ArcLV_to->value())));
    transArc(ui->transLV_before->value(), ui->transArc_before->value());
}
void MainUI::on_ArcLV_from_valueChanged() {
    if(ui->ArcLV_from->value() > ui->ArcLV_to->value()) {
        ui->ArcLV_from->setValue(ui->ArcLV_to->value());
    }

    ui->cost->setText(decimalSeparator(arcUpgradeCost(ui->selectARC->currentIndex(), ui->ArcLV_from->value(), ui->ArcLV_to->value())));
}
void MainUI::on_ArcLV_to_valueChanged() {
    on_ArcLV_from_valueChanged();
}
//AUT升級所需楓幣
void MainUI::on_selectAUT_currentIndexChanged(int index) {
    if(ui->AutLV_from->value() == ui->AutLV_to->value())
        ui->cost_aut->setText("0");
    else
        ui->cost_aut->setText(QString::number(autUpgradeCost(index, ui->AutLV_from->value(), ui->AutLV_to->value())) + QStringLiteral("億"));
}
void MainUI::on_AutLV_from_valueChanged() {
    if(ui->AutLV_from->value() > ui->AutLV_to->value())
        ui->AutLV_from->setValue(ui->AutLV_to->value());
    else if(ui->AutLV_from->value() == ui->AutLV_to->value())
        ui->cost_aut->setText("0");
    else
        ui->cost_aut->setText(QString::number(autUpgradeCost(ui->selectAUT->currentIndex(), ui->AutLV_from->value(), ui->AutLV_to->value())) + QStringLiteral("億"));
}
void MainUI::on_AutLV_to_valueChanged() {
    on_AutLV_from_valueChanged();
}

//秘法觸媒
void MainUI::on_transLV_before_valueChanged(int lv) {
    if(lv == ARCMAXLV) {
        ui->transArc_before->setValue(0);
        warningMsg(QStringLiteral("19等滿經驗直接轉就好\n可以省一筆錢唷！"));
    }

    transArc(lv, ui->transArc_before->value());
}
void MainUI::on_transArc_before_valueChanged(int arc) {
    int lv = ui->transLV_before->value();

    if(lv != ARCMAXLV) {
       transArc(lv, arc);

       if(arc == (lv * lv + 11)) {
           ui->transArc_before->setValue(0);
           ui->transLV_before->setValue(lv + 1);
       }
    }
}

//ARC傷害計算
void MainUI::on_ArcDamage_x_valueChanged(int x) {
    arcDamage(x, ui->ArcDamage_y->value());
}
void MainUI::on_ArcDamage_y_valueChanged(int y) {
    arcDamage(ui->ArcDamage_x->value(), y);
    ui->maxDamage_arc->setNum(y * 1.5);
}
//AUT傷害計算
void MainUI::on_AutDamage_x_valueChanged(int x) {
    autDamage(x, ui->AutDamage_y->value());
}
void MainUI::on_AutDamage_y_valueChanged(int y) {
    autDamage(ui->AutDamage_x->value(), y);
    ui->maxDamage_aut->setNum(y + 50);
}

//極限屬性
void MainUI::on_HyperStats_valueChanged(int lv) {
    hyperStats = hyperStatsList[lv];
    upgradeVal();
    dailyTask();
}
//公會技能
void MainUI::on_GuildSkillLV_valueChanged(int lv) {
    guildSkill = guildSkillList[lv];
    upgradeVal();
    dailyTask();
}

//介紹文章
void MainUI::on_bahamut_clicked() {
    QDesktopServices::openUrl(QUrl(BahamutURL));
}

//源碼
void MainUI::on_github_clicked() {
    QDesktopServices::openUrl(QUrl(GithubURL));
}
