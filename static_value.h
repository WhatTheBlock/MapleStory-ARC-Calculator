#ifndef STATIC_VALUE_H
#define STATIC_VALUE_H

//版本
#define VERCODE 290

#define ARCMAXLV 20         //ARC等級上限
#define ARCMAX 1450         //個人最高ARC
#define ARCMAX_MOB 1320     //怪物最高ARC
#define ARC_LV19_MAX 372    //ARC LV19的最高數量

//職業屬性提升比率
#define NORMAL_ARC 10
#define NORMAL_AUT 20       //AUT計算方式不一樣 (AUT*20+300)
#define XENON_ARC 0.39
#define XENON_ARC_NEW 0.48
#define XENON_AUT 0.39
#define XENON_AUT_NEW 0.96
#define DA_ARC 17.5
#define DA_ARC_NEW 21
#define DA_AUT 17.5
#define DA_AUT_NEW 42

//最高取得量
#define D200_MIS 6
#define D200_MOB 8
#define D205_MOB 8
#define D210_MIS 15
#define D210_MOB 4
#define D215_MOB 4
#define D220_MIS 524
#define D220_MOB 240
#define D225_MIS 30
#define D225_MOB 24
#define D230_MIS 6
#define D230_MOB 8
#define D235_MIS 6
#define D235_MOB 8

//轉硬幣倍率
#define ARC_TO_COIN_220 30
#define ARC_TO_COIN_225 3

//升級所需楓幣
#define UPGRADE_BASE 19040000
#define UPGRADE_BASE_INCREASE 6600000
#define UPGRADE_BASE_DISC 9500000
#define UPGRADE_BASE_DISC_INCREASE 7130000

//被擊傷害 & 增傷規則
const int damageList[] = {10, 30, 60, 70, 80, 100, 110, 130, 150};
const int hit_damageList[] = {280, 240, 180, 160, 140, 100, 80, 40, 0};

//極限屬性
const int hyperStatsList[] = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90, 100};

//公會技能
const int guildSkillList[] = {0, 15, 20, 25, 30};

//URL
#define UpdateURL "https://raw.githubusercontent.com/WhatTheBlock/MapleStory-ARC-Calculator/master/update.json"
#define ReleaseURL "https://github.com/WhatTheBlock/MapleStory-ARC-Calculator/releases/latest"
#define GithubURL "https://github.com/WhatTheBlock/MapleStory-ARC-Calculator"
#define BahamutURL "https://forum.gamer.com.tw/Co.php?bsn=07650&sn=6273565"

#endif // STATIC_VALUE_H
