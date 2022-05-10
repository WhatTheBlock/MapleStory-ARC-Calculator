/* 觸發事件 */

#include "mainui.h"

void MainUI::on_tabWidget_currentChanged(int index) {
    switch(index) {
    case 0: {
        MainUI::setMinimumSize(720, 429);
        MainUI::setMaximumSize(720, 429);
    } break;
    case 1: {
        MainUI::setMinimumSize(639, 369);
        MainUI::setMaximumSize(639, 369);
    } break;
    }
}


void MainUI::on_Arc1LV_valueChanged(int lv) {
    arcLvChanged(ui->arcimg1, 0, lv);
}
void MainUI::on_Arc2LV_valueChanged(int lv) {
    arcLvChanged(ui->arcimg2, 1, lv);
}
void MainUI::on_Arc3LV_valueChanged(int lv) {
    arcLvChanged(ui->arcimg3, 2, lv);
}
void MainUI::on_Arc4LV_valueChanged(int lv) {
    arcLvChanged(ui->arcimg4, 3, lv);
}
void MainUI::on_Arc5LV_valueChanged(int lv) {
    arcLvChanged(ui->arcimg5, 4, lv);
}
void MainUI::on_Arc6LV_valueChanged(int lv) {
    arcLvChanged(ui->arcimg6, 5, lv);
}

void MainUI::on_Arc1current_valueChanged() {
    updateArcToolTips(ui->arcimg1, 0, 99);
}
void MainUI::on_Arc2current_valueChanged() {
    updateArcToolTips(ui->arcimg2, 1, 99);
}
void MainUI::on_Arc3current_valueChanged() {
    updateArcToolTips(ui->arcimg3, 2, 99);
}
void MainUI::on_Arc4current_valueChanged() {
    updateArcToolTips(ui->arcimg4, 3, 99);
}
void MainUI::on_Arc5current_valueChanged() {
    updateArcToolTips(ui->arcimg5, 4, 99);
}
void MainUI::on_Arc6current_valueChanged() {
    updateArcToolTips(ui->arcimg6, 5, 99);
}

void MainUI::on_ArcMode_currentIndexChanged(int index) { updateAp(index); }

void MainUI::on_d200_valueChanged() {
    updateArcToolTips(ui->arcimg1, 0, 99);
}
void MainUI::on_mobbingMission_200_stateChanged() {
    on_d200_valueChanged();
}
void MainUI::on_d210_valueChanged() {
    updateArcToolTips(ui->arcimg2, 1, 99);
}
void MainUI::on_mobbingMission_210_stateChanged() {
    on_d210_valueChanged();
}
void MainUI::on_d220_valueChanged() {
    updateArcToolTips(ui->arcimg3, 2, 99);
}
void MainUI::on_mobbingMission_220_stateChanged() {
    on_d220_valueChanged();
}
void MainUI::on_d225_valueChanged() {
    updateArcToolTips(ui->arcimg4, 3, 99);
}
void MainUI::on_mobbingMission_225_stateChanged() {
    on_d225_valueChanged();
}
void MainUI::on_d230_valueChanged() {
    updateArcToolTips(ui->arcimg5, 4, 99);
}
void MainUI::on_mobbingMission_230_stateChanged() {
    on_d230_valueChanged();
}
void MainUI::on_d235_valueChanged() {
    updateArcToolTips(ui->arcimg6, 5, 99);
}
void MainUI::on_mobbingMission_235_stateChanged() {
    on_d235_valueChanged();
}

void MainUI::on_startDate_userDateChanged(const QDate &date) {
    ui->targetDate->setDate(date.addDays(day));
}

void MainUI::on_ArcLV_from_valueChanged() {
    avoidError();

    ui->cost->setText(decimalSeparator(upgradeMeso(ui->ArcLV_from->value(), ui->ArcLV_to->value(), ui->discountSwitch->isChecked())));
}
void MainUI::on_ArcLV_to_valueChanged() {
    on_ArcLV_from_valueChanged();
}
void MainUI::on_discountSwitch_stateChanged(int state) {
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

//一鍵勾選打怪任務
void MainUI::on_allMobbing_clicked() {
    int temp = ui->targetArc->value();
    ui->targetArc->setValue(0);

    clearMission();

    ui->mobbingMission_200->setChecked(true);
    if(ui->characterLV->value() >= 210) ui->mobbingMission_210->setChecked(true);
    if(ui->characterLV->value() >= 220) ui->mobbingMission_220->setChecked(true);
    if(ui->characterLV->value() >= 225) ui->mobbingMission_225->setChecked(true);
    if(ui->characterLV->value() >= 230) ui->mobbingMission_230->setChecked(true);
    if(ui->characterLV->value() >= 235) ui->mobbingMission_235->setChecked(true);

    ui->targetArc->setValue(temp);
}

//打怪和組隊任務都解滿
void MainUI::on_allMission_clicked() {
    on_allMobbing_clicked();
    ui->d200->setValue(D200_MIS);
    if(ui->characterLV->value() >= 210) ui->d210->setValue(D210_MIS);
    if(ui->characterLV->value() >= 220) ui->d220->setValue(D220_MIS);
    if(ui->characterLV->value() >= 225) ui->d225->setValue(D225_MIS);
    if(ui->characterLV->value() >= 230) ui->d230->setValue(D230_MIS);
    if(ui->characterLV->value() >= 235) ui->d235->setValue(D235_MIS);
}
