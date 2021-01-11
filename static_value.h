#ifndef STATIC_VALUE_H
#define STATIC_VALUE_H

#define VERCODE 271

#define ARCMAXLV 20         //ARC等級上限
#define ARCMAX 1450         //個人最高ARC
#define ARCMAX_MOB 1320     //怪物最高ARC

//ARC最高取得量
#define D200_MAX 14         //消逝的旅途每日最高取得量
#define D210_MAX 19         //啾啾島每日最高取得量
#define D220_MAX 500        //拉契爾恩每日最高取得量
#define D220_MOB 120        //拉契爾恩打怪每日取得量
#define D225_MAX 30         //阿爾卡娜每日最高取得量
#define D225_MOB 24         //阿爾卡娜打怪每日取得量
#define D230_MAX 8          //魔菈斯每日最高取得量
#define D235_MAX 8          //艾斯佩拉每日最高取得量

//ARC轉硬幣倍率
#define ARC_TO_COIN_220 30  //拉契爾恩
#define ARC_TO_COIN_225 3   //阿爾卡娜

//ARC升級所需楓幣
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
#define ReleaseURL "https://github.com/WhatTheBlock/MapleStory-ARC-Calculator/releases"
#define GithubURL "https://github.com/WhatTheBlock/MapleStory-ARC-Calculator"
#define BahamutURL "https://forum.gamer.com.tw/Co.php?bsn=07650&sn=6273565"

#endif // STATIC_VALUE_H
