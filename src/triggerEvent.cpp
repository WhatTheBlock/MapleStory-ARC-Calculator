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
            on_toolBox_currentChanged(settings->value("othersPage").toInt());
            break;
    }
    settings->setValue("mainPage", index);
}
void MainUI::on_toolBox_currentChanged(int index) {
    switch(index) {
        case 0:
            if(ui->tabWidget->currentIndex() == 2) MainUI::setFixedSize(372, 649);
            break;
        case 1:
            if(ui->tabWidget->currentIndex() == 2) MainUI::setFixedSize(372, 444);
            break;
    }
    settings->setValue("othersPage", index);
}

void MainUI::on_Arc1LV_valueChanged(int lv) {
    arcLvChanged(ui->arcimg1, 0);
    settings->setValue("ARC/Arc1LV", lv);
}
void MainUI::on_Arc2LV_valueChanged(int lv) {
    arcLvChanged(ui->arcimg2, 1);
    settings->setValue("ARC/Arc2LV", lv);
}
void MainUI::on_Arc3LV_valueChanged(int lv) {
    arcLvChanged(ui->arcimg3, 2);
    settings->setValue("ARC/Arc3LV", lv);
}
void MainUI::on_Arc4LV_valueChanged(int lv) {
    arcLvChanged(ui->arcimg4, 3);
    settings->setValue("ARC/Arc4LV", lv);
}
void MainUI::on_Arc5LV_valueChanged(int lv) {
    arcLvChanged(ui->arcimg5, 4);
    settings->setValue("ARC/Arc5LV", lv);
}
void MainUI::on_Arc6LV_valueChanged(int lv) {
    arcLvChanged(ui->arcimg6, 5);
    settings->setValue("ARC/Arc6LV", lv);
}
void MainUI::on_Aut1LV_valueChanged(int lv) {
    autLvChanged(ui->autimg1, 0);
    settings->setValue("AUT/Aut1LV", lv);
}
void MainUI::on_Aut2LV_valueChanged(int lv) {
    autLvChanged(ui->autimg2, 1);
    settings->setValue("AUT/Aut2LV", lv);
}
void MainUI::on_Aut3LV_valueChanged(int lv) {
    autLvChanged(ui->autimg3, 2);
    settings->setValue("AUT/Aut3LV", lv);
}

void MainUI::on_Arc1current_valueChanged(int val) {
    updateArcToolTips(ui->arcimg1, 0);
    settings->setValue("ARC/Arc1current", val);
}
void MainUI::on_Arc2current_valueChanged(int val) {
    updateArcToolTips(ui->arcimg2, 1);
    settings->setValue("ARC/Arc2current", val);
}
void MainUI::on_Arc3current_valueChanged(int val) {
    updateArcToolTips(ui->arcimg3, 2);
    settings->setValue("ARC/Arc3current", val);
}
void MainUI::on_Arc4current_valueChanged(int val) {
    updateArcToolTips(ui->arcimg4, 3);
    settings->setValue("ARC/Arc4current", val);
}
void MainUI::on_Arc5current_valueChanged(int val) {
    updateArcToolTips(ui->arcimg5, 4);
    settings->setValue("ARC/Arc5current", val);
}
void MainUI::on_Arc6current_valueChanged(int val) {
    updateArcToolTips(ui->arcimg6, 5);
    settings->setValue("ARC/Arc6current", val);
}
void MainUI::on_Aut1current_valueChanged(int val) {
    updateAutToolTips(ui->autimg1, 0);
    settings->setValue("AUT/Aut1current", val);
}
void MainUI::on_Aut2current_valueChanged(int val) {
    updateAutToolTips(ui->autimg2, 1);
    settings->setValue("AUT/Aut2current", val);
}
void MainUI::on_Aut3current_valueChanged(int val) {
    updateAutToolTips(ui->autimg3, 2);
    settings->setValue("AUT/Aut3current", val);
}

void MainUI::on_ArcMode_currentIndexChanged(int index) {
    updateAp(index);
    settings->setValue("ARC/ArcMode", index);
}
void MainUI::on_AutMode_currentIndexChanged(int index) {
    updateAp(index + 3);
    settings->setValue("AUT/AutMode", index);
}

void MainUI::on_daily200_clicked() {
    updateArcToolTips(ui->arcimg1, 0);
    settings->setValue("ARC/daily200", ui->daily200->isChecked());
}
void MainUI::on_daily210_clicked() {
    updateArcToolTips(ui->arcimg2, 1);
    settings->setValue("ARC/daily210", ui->daily210->isChecked());
}
void MainUI::on_daily220_clicked() {
    updateArcToolTips(ui->arcimg3, 2);
    settings->setValue("ARC/daily220", ui->daily220->isChecked());
}
void MainUI::on_daily225_clicked() {
    updateArcToolTips(ui->arcimg4, 3);
    settings->setValue("ARC/daily225", ui->daily225->isChecked());
}
void MainUI::on_daily230_clicked() {
    updateArcToolTips(ui->arcimg5, 4);
    settings->setValue("ARC/daily230", ui->daily230->isChecked());
}
void MainUI::on_daily235_clicked() {
    updateArcToolTips(ui->arcimg6, 5);
    settings->setValue("ARC/daily235", ui->daily235->isChecked());
}
void MainUI::on_weekly200_clicked() {
    updateArcToolTips(ui->arcimg1, 0);
    settings->setValue("ARC/weekly200", ui->weekly200->isChecked());
}
void MainUI::on_weekly210_clicked() {
    updateArcToolTips(ui->arcimg2, 1);
    settings->setValue("ARC/weekly210", ui->weekly210->isChecked());
}
void MainUI::on_weekly220_clicked() {
    updateArcToolTips(ui->arcimg3, 2);
    settings->setValue("ARC/weekly220", ui->weekly220->isChecked());
}
void MainUI::on_weekly225_clicked() {
    updateArcToolTips(ui->arcimg4, 3);
    settings->setValue("ARC/weekly225", ui->weekly225->isChecked());
}
void MainUI::on_weekly230_clicked() {
    updateArcToolTips(ui->arcimg5, 4);
    settings->setValue("ARC/weekly230", ui->weekly230->isChecked());
}
void MainUI::on_weekly235_clicked() {
    updateArcToolTips(ui->arcimg6, 5);
    settings->setValue("ARC/weekly235", ui->weekly235->isChecked());
}

void MainUI::on_daily260_clicked() {
    updateAutToolTips(ui->autimg1, 0);
    settings->setValue("AUT/daily260", ui->daily260->isChecked());
}
void MainUI::on_daily270_clicked() {
    updateAutToolTips(ui->autimg2, 1);
    settings->setValue("AUT/daily270", ui->daily270->isChecked());
}
void MainUI::on_daily275_clicked() {
    updateAutToolTips(ui->autimg3, 2);
    settings->setValue("AUT/daily275", ui->daily275->isChecked());
}
void MainUI::on_mob260_clicked() {
    updateAutToolTips(ui->autimg1, 0);
    settings->setValue("AUT/mob260", true);
    settings->setValue("AUT/mob265", false);
}
void MainUI::on_mob265_clicked() {
    updateAutToolTips(ui->autimg1, 0);
    settings->setValue("AUT/mob260", false);
    settings->setValue("AUT/mob265", true);
}

void MainUI::on_targetArc_valueChanged(int val) {
    dailyTask();
    settings->setValue("ARC/targetArc", val);
}
void MainUI::on_targetAut_valueChanged(int val) {
    dailyTask_aut();
    settings->setValue("AUT/targetAut", val);
}

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
    on_daily200_clicked();
    on_daily210_clicked();
    on_daily220_clicked();
    on_daily225_clicked();
    on_daily230_clicked();
    on_daily235_clicked();
}
void MainUI::on_weeklyAll_clicked() {
    ui->weekly200->setChecked(true);
    ui->weekly210->setChecked(true);
    ui->weekly220->setChecked(true);
    ui->weekly225->setChecked(true);
    ui->weekly230->setChecked(true);
    ui->weekly235->setChecked(true);
    on_weekly200_clicked();
    on_weekly210_clicked();
    on_weekly220_clicked();
    on_weekly225_clicked();
    on_weekly230_clicked();
    on_weekly235_clicked();
}

//ARC升級所需楓幣
void MainUI::on_selectARC_currentIndexChanged(int index) {
    ui->cost->setText(decimalSeparator(arcUpgradeCost(index, ui->ArcLV_from->value(), ui->ArcLV_to->value())));
    transArc(ui->transArc_before->value());
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
void MainUI::on_transArc_before_valueChanged(int arc) {
    transArc(arc);
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
    settings->setValue("ARC/HyperStats", lv);
}
//公會技能
void MainUI::on_GuildSkillLV_valueChanged(int lv) {
    guildSkill = guildSkillList[lv];
    upgradeVal();
    dailyTask();
    settings->setValue("ARC/GuildSkillLV", lv);
}

//介紹文章
void MainUI::on_bahamut_clicked() {
    QDesktopServices::openUrl(QUrl(BahamutURL));
}

//Github repo
void MainUI::on_github_clicked() {
    QDesktopServices::openUrl(QUrl(GithubURL));
}

//清除存檔資料
void MainUI::on_clearSettings_clicked() {
    QMessageBox::StandardButton result = QMessageBox::question(this, QStringLiteral("清除存檔資料"), QStringLiteral("是否刪除存檔資料？"),  QMessageBox::Yes|QMessageBox::No, QMessageBox::No);
    switch (result) {
    case QMessageBox::Yes:
        settings->clear();
        settings->sync();
        QMessageBox::information(this, QStringLiteral("刪除成功！"), QStringLiteral("請重啟程式。"));
        break;
    default: break;
    }
}
