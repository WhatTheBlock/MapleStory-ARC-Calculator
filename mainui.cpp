/*
//　個人巴哈小屋【https://home.gamer.com.tw/evildjkay】
//　巴哈文章【https://forum.gamer.com.tw/Co.php?bsn=07650&sn=6273565】
//　數據資料來源【1. https://forum.gamer.com.tw/C.php?bsn=7650&snA=962710】
//　　　　　　　【2. https://strategywiki.org/wiki/MapleStory/Hyper_Stats】
*/

#include "mainui.h"

//初始化設定
MainUI::MainUI(QWidget *parent) : QWidget(parent), ui(new Ui::MainUI) {
    QApplication::setStyle(QStyleFactory::create("Fusion")); //設定UI介面
    ui->setupUi(this);
    ui->background->viewport()->setCursor(Qt::ArrowCursor); //設定TextEdit的鼠標為標準箭頭

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
    ui->d200->setMaximum(D200_MAX);
    ui->d210->setMaximum(D210_MAX);
    ui->d220->setMaximum(D220_MAX);
    ui->d225->setMaximum(D225_MAX);
    ui->d230->setMaximum(D230_MAX);
    ui->d235->setMaximum(D235_MAX);
    ui->ArcLV_to->setMaximum(ARCMAXLV);
    ui->ArcLV_from->setMaximum(ARCMAXLV - 1);
    ui->ArcDamage_x->setMaximum(ARCMAX);
    ui->ArcDamage_y->setMaximum(ARCMAX_MOB);
    ui->targetArc->setMaximum(ARCMAX);

    //設定日期為電腦當前時間
    ui->startDate->setDate(QDate::currentDate());
    ui->targetDate->setDate(QDate::currentDate());

    //累加各階ARC升級數量，Lv1=12、Lv2=27、Lv3=47...
    for(int i = 1; i < ARCMAXLV; i++){
        if(i != 1) upgradeList[i] = i * i + 11 + upgradeList[i - 1];
        else upgradeList[i] = i * i + 11;
    }
    upgradeList[0] = 1;

    //極限屬性
    hyperStats = 0;

    //公會技能
    guildSkill = 0;
}

MainUI::~MainUI() { delete ui; }
