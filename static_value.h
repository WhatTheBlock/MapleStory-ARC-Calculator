#ifndef STATIC_VALUE_H
#define STATIC_VALUE_H

#define ARCMAXLV 20         //ARC等級上限
#define ARCMAX 1320         //個人最高ARC
#define ARCMAX_MOB 1320     //怪物最高ARC

//ARC最高取得量
#define D200_MAX 14         //消逝的旅途每日最高取得量
#define D210_MAX 19         //啾啾島每日最高取得量
#define D220_MAX 500        //拉契爾恩每日最高取得量
#define D220_VIP_MAX 500    //拉契爾恩每日最高取得量(高服)
#define D220_MOBBING 4      //拉契爾恩打怪每日取得量
#define D225_MAX 30         //阿爾卡娜每日最高取得量
#define D225_VIP_MAX 40     //阿爾卡娜每日最高取得量(高服)
#define D225_MOBBING 8      //阿爾卡娜打怪每日取得量
#define D230_MAX 8          //魔菈斯每日最高取得量
#define D235_MAX 8          //艾斯佩拉每日最高取得量

//ARC升級所需楓幣
#define UPGRADE_BASE 19040000
#define UPGRADE_BASE_INCREASE 6600000
#define UPGRADE_BASE_ARC1 9500000
#define UPGRADE_BASE_ARC1_INCREASE 7130000


//被擊傷害 & 增傷規則
const int damageList[] = {10, 30, 60, 70, 80, 100, 110, 130, 150};
const int hit_damageList[] = {280, 240, 180, 160, 140, 100, 80, 40, 0};

#endif // STATIC_VALUE_H
