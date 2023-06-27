#include "mainui.h"

void MainUI::settingsInit() {
    settings = QSharedPointer<QSettings>(new QSettings("HKEY_CURRENT_USER\\Software\\MapleStory ARC Calculator", QSettings::NativeFormat));
}

void MainUI::importSettings() {
    settingsInit();

    ui->tabWidget->setCurrentIndex(settings->value("mainPage").toInt());
    ui->toolBox->setCurrentIndex(settings->value("othersPage").toInt());

    ui->daily200->setChecked(settings->value("ARC/daily200").toBool());
    ui->weekly200->setChecked(settings->value("ARC/weekly200").toBool());
    ui->daily210->setChecked(settings->value("ARC/daily210").toBool());
    ui->weekly210->setChecked(settings->value("ARC/weekly210").toBool());
    ui->daily220->setChecked(settings->value("ARC/daily220").toBool());
    ui->weekly220->setChecked(settings->value("ARC/weekly220").toBool());
    ui->daily225->setChecked(settings->value("ARC/daily225").toBool());
    ui->weekly225->setChecked(settings->value("ARC/weekly225").toBool());
    ui->daily230->setChecked(settings->value("ARC/daily230").toBool());
    ui->weekly230->setChecked(settings->value("ARC/weekly230").toBool());
    ui->daily235->setChecked(settings->value("ARC/daily235").toBool());
    ui->weekly235->setChecked(settings->value("ARC/weekly235").toBool());
    ui->daily260->setChecked(settings->value("AUT/daily260").toBool());
    ui->mob260->setChecked(settings->value("AUT/mob260", true).toBool());
    ui->mob265->setChecked(settings->value("AUT/mob265").toBool());
    ui->daily270->setChecked(settings->value("AUT/daily270").toBool());
    ui->daily275->setChecked(settings->value("AUT/daily275").toBool());

    ArcLV[0]->setValue(settings->value("ARC/Arc1LV").toInt());
    ArcLV[1]->setValue(settings->value("ARC/Arc2LV").toInt());
    ArcLV[2]->setValue(settings->value("ARC/Arc3LV").toInt());
    ArcLV[3]->setValue(settings->value("ARC/Arc4LV").toInt());
    ArcLV[4]->setValue(settings->value("ARC/Arc5LV").toInt());
    ArcLV[5]->setValue(settings->value("ARC/Arc6LV").toInt());
    AutLV[0]->setValue(settings->value("AUT/Aut1LV").toInt());
    AutLV[1]->setValue(settings->value("AUT/Aut2LV").toInt());
    AutLV[2]->setValue(settings->value("AUT/Aut3LV").toInt());

    ArcCurrent[0]->setValue(settings->value("ARC/Arc1current").toInt());
    ArcCurrent[1]->setValue(settings->value("ARC/Arc2current").toInt());
    ArcCurrent[2]->setValue(settings->value("ARC/Arc3current").toInt());
    ArcCurrent[3]->setValue(settings->value("ARC/Arc4current").toInt());
    ArcCurrent[4]->setValue(settings->value("ARC/Arc5current").toInt());
    ArcCurrent[5]->setValue(settings->value("ARC/Arc6current").toInt());
    AutCurrent[0]->setValue(settings->value("AUT/Aut1current").toInt());
    AutCurrent[1]->setValue(settings->value("AUT/Aut2current").toInt());
    AutCurrent[2]->setValue(settings->value("AUT/Aut3current").toInt());

    ArcMode->setCurrentIndex(settings->value("ARC/ArcMode").toInt());
    AutMode->setCurrentIndex(settings->value("AUT/AutMode").toInt());

    ui->HyperStats->setValue(settings->value("ARC/HyperStats").toInt());
    ui->GuildSkillLV->setValue(settings->value("ARC/GuildSkillLV").toInt());

    ui->targetArc->setValue(settings->value("ARC/targetArc").toInt());
    ui->targetAut->setValue(settings->value("AUT/targetAut").toInt());
}
