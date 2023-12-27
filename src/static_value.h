#ifndef STATIC_VALUE_H
#define STATIC_VALUE_H

//版本
#define VERCODE 311

#define ARCMAXLV 20         //ARC等級上限
#define ARCTYPE 6           //ARC種類
#define AUTMAXLV 11         //AUT等級上限
#define AUTTYPE 6           //AUT種類
#define ARCMAX 1450         //個人最高ARC (不含活動技能、道具)
#define AUTMAX 660          //個人最高AUT
#define ARCMAX_MOB 1320     //怪物最高ARC (黑魔法師)
#define AUTMAX_MOB 480      //怪物最高AUT (極限咖凌)
#define ARC_LV19_MAX 372    //ARC LV19的最高數量
#define ARCMAXTOTAL 2679    //ARC升級至上限的總數
#define AUTMAXTOTAL 4565    //AUT升級至上限的總數

//職業屬性增加量比率
#define NORMAL_ARC 10
#define NORMAL_AUT 20       //AUT計算方式不一樣 (AUT*20+300)
#define XENON_RATIO 0.48
#define DA_RATIO 21

//最高取得量
#define D200_MIS 45
#define D200_MOB 20
#define D210_MIS 45
#define D210_MOB 20
#define D220_MIS 45
#define D220_MOB 20
#define D225_MIS 45
#define D225_MOB 20
#define D230_MIS 45
#define D230_MOB 20
#define D235_MIS 45
#define D235_MOB 20
#define D260_MOB 20 //賽爾尼溫
#define D265_MOB 10 //阿爾克斯
#define D270_MOB 10 //奧迪溫
#define D275_MOB 10 //桃園境
#define D280_MOB 10 //阿爾泰利亞
#define D285_MOB 10 //卡爾西翁

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
#define iconResource1 "https://namu.wiki/w/%EC%96%B4%EC%84%BC%ED%8B%B1%ED%8F%AC%EC%8A%A4"
#define iconResource2 "https://namu.wiki/w/%EA%B7%B8%EB%9E%80%EB%94%94%EC%8A%A4"
#define dataResource1 "https://maplestory.fandom.com/wiki/MapleStory_Wiki"
#define dataResource2 "https://namu.wiki/w/%EB%A9%94%EC%9D%B4%ED%94%8C%EC%8A%A4%ED%86%A0%EB%A6%AC"

#endif // STATIC_VALUE_H
