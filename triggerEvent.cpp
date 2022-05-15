/* 觸發事件 */

#include "mainui.h"

//變更視窗大小
void MainUI::on_tabWidget_currentChanged(int index) {
    switch(index) {
    case 0: {
        MainUI::setMinimumSize(720, 429);
        MainUI::setMaximumSize(720, 429);
    } break;
    case 1: {
        MainUI::setMinimumSize(720, 429);
        MainUI::setMaximumSize(720, 429);
    } break;
    case 2: {
        MainUI::setMinimumSize(402, 659);
        MainUI::setMaximumSize(402, 659);
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

void MainUI::on_targetArc_valueChanged() { dailyTask(); }

void MainUI::on_startDate_userDateChanged(const QDate &date) {
    ui->targetDate->setDate(date.addDays(day));
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

//勾選打怪任務
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
