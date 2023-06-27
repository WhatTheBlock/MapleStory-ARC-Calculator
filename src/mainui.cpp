﻿/*
//　數據資料來源【1. https://forum.gamer.com.tw/C.php?bsn=7650&snA=962710】
//　　　　　　　【2. https://strategywiki.org/wiki/MapleStory/Hyper_Stats】
//　　　　　　　【3. https://namu.wiki/w/%EA%B0%90%EC%8B%9C%EC%9E%90%20%EC%B9%BC%EB%A1%9C%EC%8A%A4】
//　　　　　　　【4. https://home.gamer.com.tw/artwork.php?sn=5010798】
//　　　　　　　【5. https://forum.gamer.com.tw/C.php?bsn=7650&snA=1023650】
//　圖示來源【https://maplestory.fandom.com/wiki/MapleStory】
*/

#include "mainui.h"

//初始化設定
MainUI::MainUI(QWidget *parent) : QWidget(parent), ui(new Ui::MainUI) {
    QApplication::setStyle(QStyleFactory::create("Fusion")); //設定UI介面
    ui->setupUi(this);

    //檢查更新
    checkUpdate();

    ArcLV[0] = ui->Arc1LV;
    ArcLV[1] = ui->Arc2LV;
    ArcLV[2] = ui->Arc3LV;
    ArcLV[3] = ui->Arc4LV;
    ArcLV[4] = ui->Arc5LV;
    ArcLV[5] = ui->Arc6LV;
    AutLV[0] = ui->Aut1LV;
    AutLV[1] = ui->Aut2LV;
    AutLV[2] = ui->Aut3LV;
    ArcCurrent[0] = ui->Arc1current;
    ArcCurrent[1] = ui->Arc2current;
    ArcCurrent[2] = ui->Arc3current;
    ArcCurrent[3] = ui->Arc4current;
    ArcCurrent[4] = ui->Arc5current;
    ArcCurrent[5] = ui->Arc6current;
    AutCurrent[0] = ui->Aut1current;
    AutCurrent[1] = ui->Aut2current;
    AutCurrent[2] = ui->Aut3current;
    ArcUpgrade[0] = ui->Arc1upgrade;
    ArcUpgrade[1] = ui->Arc2upgrade;
    ArcUpgrade[2] = ui->Arc3upgrade;
    ArcUpgrade[3] = ui->Arc4upgrade;
    ArcUpgrade[4] = ui->Arc5upgrade;
    ArcUpgrade[5] = ui->Arc6upgrade;
    AutUpgrade[0] = ui->Aut1upgrade;
    AutUpgrade[1] = ui->Aut2upgrade;
    AutUpgrade[2] = ui->Aut3upgrade;
    ArcTotal = ui->ArcTotal;
    AutTotal = ui->AutTotal;
    ArcMode = ui->ArcMode;
    AutMode = ui->AutMode;

    //極限屬性
    hyperStats = 0;

    //公會技能
    guildSkill = 0;

    //設定數據範圍
    ui->ArcLV_to->setMaximum(ARCMAXLV);
    ui->ArcLV_from->setMaximum(ARCMAXLV - 1);
    ui->AutLV_to->setMaximum(AUTMAXLV);
    ui->AutLV_from->setMaximum(AUTMAXLV - 1);
    ui->ArcDamage_x->setMaximum(ARCMAX);
    ui->ArcDamage_y->setMaximum(ARCMAX_MOB);
    ui->AutDamage_x->setMaximum(AUTMAX);
    ui->AutDamage_y->setMaximum(AUTMAX_MOB);
    ui->targetArc->setMaximum(ARCMAX);
    ui->targetAut->setMaximum(AUTMAX);

    //設定日期為電腦當前時間
    ui->startDate->setDate(QDate::currentDate());
    ui->startDate_aut->setDate(QDate::currentDate());
    ui->targetDate->setDate(QDate::currentDate());
    ui->targetDate_aut->setDate(QDate::currentDate());

    //累加各階ARC升級數量，Lv1=12、Lv2=27、Lv3=47...
    arcUpgradeList[0] = 0;
    for(int i = 1; i < ARCMAXLV; i++) arcUpgradeList[i] = i * i + 11 + arcUpgradeList[i - 1];

    //累加各階AUT升級數量，Lv1=29、Lv2=105、Lv3=246...
    autUpgradeList[0] = 0;
    for(int i = 1; i < AUTMAXLV; i++) autUpgradeList[i] = 9 * i * i + 20 * i + autUpgradeList[i - 1];

    //設定符文升級費用
    for(int i = 0; i < ARCMAXLV - 1; i++) {
        ARC200_COST[i] = ARC200_COST_BASE + ARC200_COST_INCREASE * i;
        ARC210_COST[i] = ARC210_COST_BASE + ARC210_COST_INCREASE * i;
        ARC220_COST[i] = ARC220_COST_BASE + ARC220_COST_INCREASE * i;
        ARC225_COST[i] = ARC225_COST_BASE + ARC225_COST_INCREASE * i;
    }

    //gif button
    auto movie = new QMovie(this);
    movie->setFileName(":/images/lightbulb.gif");
    connect(movie, &QMovie::frameChanged, [=]{
        ui->weeklyAll->setIcon(movie->currentPixmap());
    });
    movie->start();

    //tooltip
    ui->daily200->setToolTip(QStringLiteral("每日可獲得%1個").arg(D200_MOB));
    ui->daily210->setToolTip(QStringLiteral("每日可獲得%1個").arg(D210_MOB));
    ui->daily220->setToolTip(QStringLiteral("每日可獲得%1個").arg(D220_MOB));
    ui->daily225->setToolTip(QStringLiteral("每日可獲得%1個").arg(D225_MOB));
    ui->daily230->setToolTip(QStringLiteral("每日可獲得%1個").arg(D230_MOB));
    ui->daily235->setToolTip(QStringLiteral("每日可獲得%1個").arg(D235_MOB));
    ui->weekly200->setToolTip(QStringLiteral("每週可獲得%1個").arg(D200_MIS));
    ui->weekly210->setToolTip(QStringLiteral("每週可獲得%1個").arg(D210_MIS));
    ui->weekly220->setToolTip(QStringLiteral("每週可獲得%1個").arg(D220_MIS));
    ui->weekly225->setToolTip(QStringLiteral("每週可獲得%1個").arg(D225_MIS));
    ui->weekly230->setToolTip(QStringLiteral("每週可獲得%1個").arg(D230_MIS));
    ui->weekly235->setToolTip(QStringLiteral("每週可獲得%1個").arg(D235_MIS));
    ui->mob260->setToolTip(QStringLiteral("每日可獲得%1個").arg(D260_MOB));
    ui->mob265->setToolTip(QStringLiteral("每日可獲得%1個").arg(D265_MOB));
    ui->mob270->setToolTip(QStringLiteral("每日可獲得%1個").arg(D270_MOB));
    ui->mob275->setToolTip(QStringLiteral("每日可獲得%1個").arg(D275_MOB));

    //載入存檔
    importSettings();
}

MainUI::~MainUI() { delete ui; }
