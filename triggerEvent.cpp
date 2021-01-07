/* 觸發事件 */

#include "mainui.h"

void MainUI::on_Arc1LV_valueChanged(int lv) {
    upgradeVal();
    updateAp(ArcMode->currentIndex());
    dailyTask();
    updateArcToolTips(ui->arcimg1, 0, lv);
}
void MainUI::on_Arc2LV_valueChanged(int lv) {
    upgradeVal();
    updateAp(ArcMode->currentIndex());
    dailyTask();
    updateArcToolTips(ui->arcimg2, 1, lv);
}
void MainUI::on_Arc3LV_valueChanged(int lv) {
    upgradeVal();
    updateAp(ArcMode->currentIndex());
    dailyTask();
    updateArcToolTips(ui->arcimg3, 2, lv);
}
void MainUI::on_Arc4LV_valueChanged(int lv) {
    upgradeVal();
    updateAp(ArcMode->currentIndex());
    dailyTask();
    updateArcToolTips(ui->arcimg4, 3, lv);
}
void MainUI::on_Arc5LV_valueChanged(int lv) {
    upgradeVal();
    updateAp(ArcMode->currentIndex());
    dailyTask();
    updateArcToolTips(ui->arcimg5, 4, lv);
}
void MainUI::on_Arc6LV_valueChanged(int lv) {
    upgradeVal();
    updateAp(ArcMode->currentIndex());
    dailyTask();
    updateArcToolTips(ui->arcimg6, 5, lv);
}

void MainUI::on_Arc1current_valueChanged() { dailyTask(); }
void MainUI::on_Arc2current_valueChanged() { dailyTask(); }
void MainUI::on_Arc3current_valueChanged() { dailyTask(); }
void MainUI::on_Arc4current_valueChanged() { dailyTask(); }
void MainUI::on_Arc5current_valueChanged() { dailyTask(); }
void MainUI::on_Arc6current_valueChanged() { dailyTask(); }

void MainUI::on_ArcMode_currentIndexChanged(int index) { updateAp(index); }

void MainUI::on_d200_valueChanged() { dailyTask(); }
void MainUI::on_d210_valueChanged() { dailyTask(); }
void MainUI::on_d220_valueChanged() { dailyTask(); }
void MainUI::on_mobbingMission_220_stateChanged() { dailyTask(); }
void MainUI::on_d225_valueChanged() { dailyTask(); }
void MainUI::on_mobbingMission_225_stateChanged() { dailyTask(); }
void MainUI::on_d230_valueChanged() { dailyTask(); }
void MainUI::on_d235_valueChanged() { dailyTask(); }

void MainUI::on_startDate_userDateChanged(const QDate &date) {
    ui->targetDate->setDate(date.addDays(day));
}

void MainUI::on_ArcLV_from_valueChanged() {
    avoidError();

    ui->cost->setText(
                decimalSeparator(
                    upgradeMeso(
                        ui->ArcLV_from->value(),
                        ui->ArcLV_to->value(),
                        ui->arc1Switch->isChecked()
                    )
                )
    );
}
void MainUI::on_ArcLV_to_valueChanged() {
    on_ArcLV_from_valueChanged();
}
void MainUI::on_arc1Switch_stateChanged(int state) {
    int from = ui->ArcLV_from->value();
    int to = ui->ArcLV_to->value();
    int lv = ui->transLV_before->value();
    int arc = ui->transArc_before->value();

    ui->cost->setText(decimalSeparator(upgradeMeso(from, to, state)));
    transArc(lv, arc);
}

void MainUI::on_ArcDamage_x_valueChanged(int x) {
    ArcDamage(x, ui->ArcDamage_y->value());
}
void MainUI::on_ArcDamage_y_valueChanged(int y) {
    ArcDamage(ui->ArcDamage_x->value(), y);
}

void MainUI::on_targetArc_valueChanged() { dailyTask(); }

void MainUI::on_transLV_before_valueChanged(int lv) {
    transArc(lv, ui->transArc_before->value());
}
void MainUI::on_transArc_before_valueChanged(int arc) {
    transArc(ui->transLV_before->value(), arc);
}

void MainUI::on_HyperStats_valueChanged(int lv) {
    hyperStats = hyperStatsList[lv];
    upgradeVal();
    dailyTask();
}
void MainUI::on_GuildSkillLV_valueChanged(int lv) {
    guildSkill = guildSkillList[lv];
    upgradeVal();
    dailyTask();
}

void MainUI::on_bahamut_clicked() {
    QDesktopServices::openUrl(QUrl(BahamutURL));
}
void MainUI::on_github_clicked() {
    QDesktopServices::openUrl(QUrl(GithubURL));
}
