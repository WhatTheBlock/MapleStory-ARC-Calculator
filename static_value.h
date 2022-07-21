#ifndef STATIC_VALUE_H
#define STATIC_VALUE_H

//版本
#define VERCODE 290

#define ARCMAXLV 20         //ARC等級上限
#define AUTMAXLV 11         //AUT等級上限
#define ARCMAX 1450         //個人最高ARC
#define AUTMAX 220          //個人最高AUT
#define ARCMAX_MOB 1320     //怪物最高ARC (黑魔法師)
#define AUTMAX_MOB 300      //怪物最高AUT (卡洛斯)
#define ARC_LV19_MAX 372    //ARC LV19的最高數量
#define ARCMAXTOTAL 2679    //ARC升級至上限的總數
#define AUTMAXTOTAL 4565    //AUT升級至上限的總數

//職業屬性增加量比率
#define NORMAL_ARC 10
#define NORMAL_AUT 20       //AUT計算方式不一樣 (AUT*20+300)
#define XENON_RATIO 0.48
#define DA_RATIO 21

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
#define D260_MOB 5
#define D265_MOB 5
#define D270_MOB 5
#define D275_MOB 5

//轉硬幣倍率
#define ARC_TO_COIN_220 30
#define ARC_TO_COIN_225 3

//升級所需楓幣
#define ARC200_COST_BASE 7070000
#define ARC200_COST_INCREASE 3960000
#define ARC210_COST_BASE 10840000
#define ARC210_COST_INCREASE 4620000
#define ARC220_COST_BASE 14610000
#define ARC220_COST_INCREASE 5280000
#define ARC225_COST_BASE 17136000    //225~235
#define ARC225_COST_INCREASE 5940000
const double AUT260_COST[] = {1.854, 2.739, 3.623, 4.507, 5.392, 6.276, 7.161, 8.045, 8.929, 9.814};
const double AUT270_COST[] = {2.039, 3.012, 3.985, 4.957, 5.931, 6.903, 7.877, 8.849, 9.821, 10.795}; //可能不準確

//被擊傷害 & 增傷規則
const int damageList_arc[] = {10, 30, 60, 70, 80, 100, 110, 130, 150};
const int damageList_aut[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10, 5};
const int damageList_aut2[] = {100, 105, 110, 115, 120, 125};
const int hit_damageList_arc[] = {280, 240, 180, 160, 140, 100, 80, 40, 0};
const int hit_damageList_aut[] = {100, 150, 150, 150, 150, 150, 200, 200, 200, 200, 200};

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
