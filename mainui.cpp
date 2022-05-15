/*
//　數據資料來源【1. https://forum.gamer.com.tw/C.php?bsn=7650&snA=962710】
//　　　　　　　【2. https://strategywiki.org/wiki/MapleStory/Hyper_Stats】
//　　　　　　　【3. https://namu.wiki/w/%EA%B0%90%EC%8B%9C%EC%9E%90%20%EC%B9%BC%EB%A1%9C%EC%8A%A4】
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
    ArcCurrent[0] = ui->Arc1current;
    ArcCurrent[1] = ui->Arc2current;
    ArcCurrent[2] = ui->Arc3current;
    ArcCurrent[3] = ui->Arc4current;
    ArcCurrent[4] = ui->Arc5current;
    ArcCurrent[5] = ui->Arc6current;
    ArcUpgrade[0] = ui->Arc1upgrade;
    ArcUpgrade[1] = ui->Arc2upgrade;
    ArcUpgrade[2] = ui->Arc3upgrade;
    ArcUpgrade[3] = ui->Arc4upgrade;
    ArcUpgrade[4] = ui->Arc5upgrade;
    ArcUpgrade[5] = ui->Arc6upgrade;
    ArcTotal = ui->ArcTotal;
    ArcMode = ui->ArcMode;

    //設定數據範圍
    ui->d200->setMaximum(D200_MIS);
    ui->d210->setMaximum(D210_MIS);
    ui->d220->setMaximum(D220_MIS);
    ui->d225->setMaximum(D225_MIS);
    ui->d230->setMaximum(D230_MIS);
    ui->d235->setMaximum(D235_MIS);
    ui->ArcLV_to->setMaximum(ARCMAXLV);
    ui->ArcLV_from->setMaximum(ARCMAXLV - 1);
    ui->AutLV_to->setMaximum(AUTMAXLV);
    ui->AutLV_from->setMaximum(AUTMAXLV - 1);
    ui->ArcDamage_x->setMaximum(ARCMAX);
    ui->ArcDamage_y->setMaximum(ARCMAX_MOB);
    ui->AutDamage_x->setMaximum(AUTMAX);
    ui->AutDamage_y->setMaximum(AUTMAX_MOB);
    ui->targetArc->setMaximum(ARCMAX);

    //設定日期為電腦當前時間
    ui->startDate->setDate(QDate::currentDate());
    ui->targetDate->setDate(QDate::currentDate());

    //累加各階ARC升級數量，Lv1=12、Lv2=27、Lv3=47...
    arcUpgradeList[0] = 0;
    for(int i = 1; i < ARCMAXLV; i++) arcUpgradeList[i] = i * i + 11 + arcUpgradeList[i - 1];

    //累加各階AUT升級數量，Lv1=29、Lv2=105、Lv3=246...
    autUpgradeList[0] = 0;
    for(int i = 1; i < AUTMAXLV; i++) autUpgradeList[i] = 9 * i * i + 20 * i + autUpgradeList[i - 1];

    //極限屬性
    hyperStats = 0;

    //公會技能
    guildSkill = 0;

    //設定符文升級費用
    for(int i = 0; i < ARCMAXLV - 1; i++) {
        ARC200_COST[i] = ARC200_COST_BASE + ARC200_COST_INCREASE * i;
        ARC210_COST[i] = ARC210_COST_BASE + ARC210_COST_INCREASE * i;
        ARC220_COST[i] = ARC220_COST_BASE + ARC220_COST_INCREASE * i;
        ARC225_COST[i] = ARC225_COST_BASE + ARC225_COST_INCREASE * i;
    }
}

MainUI::~MainUI() { delete ui; }



