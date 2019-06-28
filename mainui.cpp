/*
//   哈囉大家好：）我是來自艾麗亞的曉亦夏風
//   寫這個小工具只是單純為了練習程式撰寫能力
//   變數命名方式不太理想，先跟各位說聲抱歉QnQ
//   歡迎加巴哈好友，巴哈小屋：https://home.gamer.com.tw/evildjkay
//   巴哈文章：https://forum.gamer.com.tw/Co.php?bsn=07650&sn=6273565
//   數據資料來源：https://forum.gamer.com.tw/C.php?bsn=7650&snA=962710
*/

#include "mainui.h"
#include "ui_mainui.h"

#define ARCMAXLV 20             //當前版本ARC等級上限
#define ARCMAX 1320            //當前版本個人最高ARC
#define ARCMAX_MOB 1320   //當前版本怪物最高ARC

//初始化設定
MainUI::MainUI(QWidget *parent) :  QWidget(parent), ui(new Ui::MainUI) {
    QApplication::setStyle(QStyleFactory::create("Fusion")); //設定UI介面
    ui->setupUi(this);
    ui->background->viewport()->setCursor(Qt::ArrowCursor); //設定TextEdit的鼠標為標準箭頭

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
    ApTotal = ui->ApTotal;
    ArcMode = ui->ArcMode;

    //設定數據範圍
    for(int i=0; i<6; i++) {
        ArcLV[i]->setValidator(new QIntValidator(0, ARCMAXLV, this));
        ArcCurrent[i]->setValidator(new QIntValidator(0, (ARCMAXLV*ARCMAXLV)+11, this));
    }
    ui->ArcLV_to->setMaximum(ARCMAXLV);
    ui->ArcLV_from->setMaximum(ARCMAXLV);
    ui->ArcDamage_x->setMaximum(ARCMAX);
    ui->ArcDamage_y->setMaximum(ARCMAX_MOB);
    ui->targetArc->setMaximum(ARCMAX);
    ui->d200->setValidator(new QIntValidator(0, 8, this));
    ui->d210->setValidator(new QIntValidator(0, 15, this));
    ui->d220->setValidator(new QIntValidator(0, 500, this));
    ui->d220_vip->setValidator(new QIntValidator(0, 500, this));
    ui->d225->setValidator(new QIntValidator(0, 30, this));
    ui->d225_vip->setValidator(new QIntValidator(0, 40, this));
    ui->d230->setValidator(new QIntValidator(0, 8, this));
    ui->d235->setValidator(new QIntValidator(0, 8, this));

    //設定日期為電腦當前時間
    ui->startDate->setDate(QDate::currentDate());
    ui->targetDate->setDate(QDate::currentDate());

    //累加各階ARC升級數量，Lv1=12、Lv2=27、Lv3=47
    for(int i=1; i<ARCMAXLV; i++){
        if(i != 1) upgradeList[i] = i * i + 11 + upgradeList[i - 1];
        else upgradeList[i] = i * i + 11;
    }
    upgradeList[0] = 1;
}
MainUI::~MainUI() { delete ui; }

//提醒訊息
void MainUI::warningMsg(QString str){
    msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), str);
    msg->exec();
}

//更新升級所需ARC數量
void MainUI::upgradeVal() {
    ArcTotal->setText("0");
    for(int i=0; i<6; i++) {
        ArcLVint[i] = ArcLV[i]->text().toInt();
        if(ArcLVint[i] != 0) ArcTotal->setNum((ArcLVint[i] + 2) * 10 + ArcTotal->text().toInt()); //更新目前ARC
        if(ArcLVint[i] > ARCMAXLV) {
            warningMsg(QStringLiteral("此版本的ARC等級上限為%1等唷！").arg(ARCMAXLV));
            ArcLV[i]->setText(QString::number(ARCMAXLV));
        }
        switch(ArcLVint[i]) {
        case 0: ArcUpgrade[i]->setText("?"); break;
        case ARCMAXLV: ArcUpgrade[i]->setNum(0); break;
        default: ArcUpgrade[i]->setNum(ArcLVint[i] * ArcLVint[i] + 11); break;
        }
    }
    avoidError(); //防止輸入錯誤
}

//防止輸入錯誤
void MainUI::avoidError() {
    for(int i=0; i<6; i++) {
        ArcLVint[i] = ArcLV[i]->text().toInt();
        ArcCurrentint[i] = ArcCurrent[i]->text().toInt();
        ArcUpgradeint[i] = ArcUpgrade[i]->text().toInt();
        if(ArcCurrentint[i]>ArcUpgradeint[i]) {
            if(ArcUpgradeint[i] != 0 && ArcLVint[i] != ARCMAXLV) {
                warningMsg(QStringLiteral("當前數量超過升級數量！"));
                ArcCurrent[i]->clear();
            }
            else if(ArcLVint[i] == ARCMAXLV) {
                warningMsg(QStringLiteral("ARC滿等就不能再合成啦！"));
                ArcCurrent[i]->clear();
            }
            else {
                warningMsg(QStringLiteral("請先輸入ARC等級唷＞w＜"));
                ArcCurrent[i]->clear();
            }
        }
    }
}

//更新屬性增加量數據
void MainUI::updateAp(int mode) {
    switch (mode) {
    case 0: ApTotal->setNum(ArcTotal->text().toInt() * 10); break;
    case 1: ApTotal->setNum(ArcTotal->text().toInt() * 3.9); break;
    case 2: ApTotal->setNum(ArcTotal->text().toInt() * 175); break;
    }
}

//升級所需楓幣
int MainUI::upgradeMeso(int from, int to, int arc1) {
    int base = 19040000;
    int base_arc1 = 9500000;
    int result = 19040000;
    int result_arc1 = 9500000;

    if(arc1 == 2) {
        for(int i = to - 2; i >= 1; i--){
            for(int j = 0; j < i; j++) result_arc1+=7130000;
            result_arc1+=base_arc1;
        }
        if(from > 1) result_arc1 -= upgradeMeso(1, from, arc1);
        return result_arc1;
    }
    else {
        for(int i = to - 2; i >= 1; i--){
            for(int j = 0; j < i; j++) result+=6600000;
            result+=base;
        }
        if(from > 1) result -= upgradeMeso(1, from, arc1);
        return result;
    }
}

//被擊傷害 / 增傷
void MainUI::ArcDamage(int x, int y) {
    int damageList[9] = {10, 30, 60, 70, 80, 100, 110, 130, 150};
    int hit_damageList[9] = {280, 240, 180, 160, 140, 100, 80, 40, 0};

    double percent = double(x) / double(y);
    if(percent < 0.1) { ui->damage->setNum(damageList[0]); ui->hit_damage->setNum(hit_damageList[0]); }
    else if(percent >= 0.1 && percent < 0.3) { ui->damage->setNum(damageList[1]); ui->hit_damage->setNum(hit_damageList[1]); }
    else if(percent >= 0.3 && percent < 0.5) { ui->damage->setNum(damageList[2]); ui->hit_damage->setNum(hit_damageList[2]); }
    else if(percent >= 0.5 && percent < 0.7) { ui->damage->setNum(damageList[3]); ui->hit_damage->setNum(hit_damageList[3]); }
    else if(percent >= 0.7 && percent < 1) { ui->damage->setNum(damageList[4]); ui->hit_damage->setNum(hit_damageList[4]); }
    else if(percent >= 1 && percent < 1.1) { ui->damage->setNum(damageList[5]); ui->hit_damage->setNum(hit_damageList[5]); }
    else if(percent >= 1.1 && percent < 1.3) { ui->damage->setNum(damageList[6]); ui->hit_damage->setNum(hit_damageList[6]); }
    else if(percent >= 1.3 && percent < 1.5) { ui->damage->setNum(damageList[7]); ui->hit_damage->setNum(hit_damageList[7]); }
    else { ui->damage->setNum(damageList[8]); ui->hit_damage->setNum(hit_damageList[8]); }

    //1.5倍傷害需求尾數為5的值需額外加5
    if((y * 15) % 100 == 50) ui->damage150->setNum(y * 1.5 + 5);
    else ui->damage150->setNum(y * 1.5);
}

//計算到達目標ARC所需時間
void MainUI::dailyTask() {
    int targetArc = ui->targetArc->value();
    int dailyGet[8];
    int maxReachArc = 0;
    int count = ArcTotal->text().toInt();
    int current[6];
    int cntLv[6];
    bool vip;
    day = 0;

    avoidError();

    if(ui->vipSwitch->isChecked()) vip = true;
    else vip = false;

    //如果目前ARC已達到目標ARC
    if(targetArc <= ArcTotal->text().toInt()) {
        ui->targetDays->setNum(0);
        ui->targetDate->setDate(ui->startDate->date());
    }
    //若未達到才計算
    else {
        dailyGet[0] = ui->d200->text().toInt();
        dailyGet[1] = ui->d210->text().toInt();
        dailyGet[2] = ui->d220->text().toInt();
        dailyGet[3] = ui->d225->text().toInt();
        dailyGet[4] = ui->d230->text().toInt();
        dailyGet[5] = ui->d235->text().toInt();
        dailyGet[6] = ui->d220_vip->text().toInt();
        dailyGet[7] = ui->d225_vip->text().toInt();

        //計算可能達到的最高ARC
        for(int i=0; i<6; i++){
            if(vip){
                switch (i) {
                case 2:
                    if(dailyGet[6] != 0) maxReachArc += 220;
                    else if(dailyGet[i] != 0) maxReachArc += 220;
                    else if(ArcLVint[i] != 0) maxReachArc += ArcLVint[i]*10+20; break;
                case 3:
                    if(dailyGet[7] != 0) maxReachArc += 220;
                    else if(dailyGet[i] != 0) maxReachArc += 220;
                    else if(ArcLVint[i] != 0) maxReachArc += ArcLVint[i]*10+20; break;
                default:
                    if(dailyGet[i] != 0) maxReachArc += 220;
                    else if(ArcLVint[i] != 0) maxReachArc += ArcLVint[i]*10+20; break;
                }
            }
            else {
                if(dailyGet[i] != 0) maxReachArc += 220;
                else if(ArcLVint[i] != 0) maxReachArc += ArcLVint[i]*10+20;
            }
        }
        //-------------------------------------------------------------
        //目標ARC超過可能達到的最高值，停止計算
        if(targetArc > maxReachArc) {
            warningMsg(QStringLiteral("目標訂太高了，無法達到 OAO"));
            ui->targetArc->setValue(0);
        }
        else {
            if((targetArc % 10) != 0) targetArc = targetArc - (targetArc % 10) + 10; //如果目標ARC不為10的倍數則無條件進位
            for(int i=0; i<6; i++) {  //計算目前各ARC累積量
                cntLv[i] = 0; //init
                if(ArcLVint[i] == 0) current[i] = 0;
                else {
                    switch (i) {
                    case 2: //拉契爾恩ARC換為硬幣來計算
                        if(ArcLVint[i] == 1) current[i] = ArcCurrentint[i] * 30;
                        else current[i] = (upgradeList[ArcLVint[i] - 1] + ArcCurrentint[i]) * 30;
                        break;
                    case 3: //阿爾卡娜ARC換為硬幣來計算
                        if(ArcLVint[i] == 1) current[i] = ArcCurrentint[i] * 3;
                        else current[i] = (upgradeList[ArcLVint[i] - 1] + ArcCurrentint[i]) * 3;
                        break;
                    default:
                        if(ArcLVint[i] == 1) current[i] = ArcCurrentint[i];
                        else current[i] = upgradeList[ArcLVint[i] - 1] + ArcCurrentint[i];
                        break;
                    }
                }
            }
            while(count < targetArc) { //迴圈一次等於過一天
                for(int i=0; i<6; i++){
                    if((ArcLVint[i] + cntLv[i]) < ARCMAXLV){ //當前等級+暫存等級小於上限才繼續累加
                        switch (i) {
                        case 2:
                            if(vip && dailyGet[6] > dailyGet[i]){
                                current[i] += dailyGet[6];
                                if(current[i] >= (upgradeList[ArcLVint[i] + cntLv[i]] * 30)) {
                                    if(ArcLVint[i] + cntLv[i] == 0) count += 30;
                                    else count += 10;
                                    cntLv[i]++;
                                }
                            }
                            else if(dailyGet[i] != 0) {
                                current[i] += dailyGet[i];
                                if(current[i] >= (upgradeList[ArcLVint[i] + cntLv[i]] * 30)) {
                                    if(ArcLVint[i] + cntLv[i] == 0) count += 30;
                                    else count += 10;
                                    cntLv[i]++;
                                }
                            } break;
                        case 3:
                            if(vip && dailyGet[7] > dailyGet[i]){
                                current[i] += dailyGet[7];
                                if(current[i] >= (upgradeList[ArcLVint[i] + cntLv[i]] * 3)) {
                                    if(ArcLVint[i] + cntLv[i] == 0) count += 30;
                                    else count += 10;
                                    cntLv[i]++;
                                }
                            }
                            else if(dailyGet[i] != 0) {
                                current[i] += dailyGet[i];
                                if(current[i] >= (upgradeList[ArcLVint[i] + cntLv[i]] * 3)) {
                                    if(ArcLVint[i] + cntLv[i] == 0) count += 30;
                                    else count += 10;
                                    cntLv[i]++;
                                }
                            } break;
                        default:
                            if(dailyGet[i] != 0) {
                                current[i] += dailyGet[i];
                                if(current[i] >= upgradeList[ArcLVint[i] + cntLv[i]]) {
                                    if(ArcLVint[i] + cntLv[i] == 0) count += 30;
                                    else count += 10;
                                    cntLv[i]++;
                                }
                            } break;
                        }
                    }
                }
                day++;
            }
            ui->targetDays->setNum(day);
            ui->targetDate->setDate(ui->startDate->date().addDays(day));
        }
    }
}

//秘法觸媒
void MainUI::transArc(int lv, int arc){
    double total = ceil((upgradeList[lv - 1] + arc) * 0.8);
    for(int i = 0; i < lv; i++) {
        if(total >= upgradeList[lv - i - 1]) {
            if(ui->arc1Switch->isChecked()) ui->transCost->setText(decimalSeparator(upgradeMeso(1, lv - i, 2)));
            else ui->transCost->setText(decimalSeparator(upgradeMeso(1, lv - i, 0)));
            ui->transLV_after->setNum(lv - i);
            ui->transArc_after->setNum(total - upgradeList[lv - i - 1]);
            break;
        }
    }
}

QString MainUI::decimalSeparator(int n){
    QString temp = QString::number(n);
    if(n<10000000) return temp.mid(0,1)+","+temp.mid(1,3)+","+temp.mid(4,3);
    else if(n<100000000) return temp.mid(0,2)+","+temp.mid(2,3)+","+temp.mid(5,3);
    else if(n<1000000000) return temp.mid(0,3)+","+temp.mid(3,3)+","+temp.mid(6,3);
    else return temp.mid(0,1)+","+temp.mid(1,3)+","+temp.mid(4,3)+","+temp.mid(7,3);
}

//觸發事件
void MainUI::on_Arc1LV_textChanged(const QString &a) { upgradeVal(); updateAp(ArcMode->currentIndex()); dailyTask(); }
void MainUI::on_Arc2LV_textChanged(const QString &a) { upgradeVal(); updateAp(ArcMode->currentIndex()); dailyTask(); }
void MainUI::on_Arc3LV_textChanged(const QString &a) { upgradeVal(); updateAp(ArcMode->currentIndex()); dailyTask(); }
void MainUI::on_Arc4LV_textChanged(const QString &a) { upgradeVal(); updateAp(ArcMode->currentIndex()); dailyTask(); }
void MainUI::on_Arc5LV_textChanged(const QString &a) { upgradeVal(); updateAp(ArcMode->currentIndex()); dailyTask(); }
void MainUI::on_Arc6LV_textChanged(const QString &a) { upgradeVal(); updateAp(ArcMode->currentIndex()); dailyTask(); }
void MainUI::on_Arc1current_textChanged(const QString &a) { dailyTask(); }
void MainUI::on_Arc2current_textChanged(const QString &a) { dailyTask(); }
void MainUI::on_Arc3current_textChanged(const QString &a) { dailyTask(); }
void MainUI::on_Arc4current_textChanged(const QString &a) { dailyTask(); }
void MainUI::on_Arc5current_textChanged(const QString &a) { dailyTask(); }
void MainUI::on_Arc6current_textChanged(const QString &a) { dailyTask(); }
void MainUI::on_ArcMode_currentIndexChanged(int index) { updateAp(index); }
void MainUI::on_d200_textChanged(const QString &d) {
    int d200 = d.toInt();
    if(d200 > 8) {
        warningMsg(QStringLiteral("消逝的旅途每日任務一天最高是8顆ARC唷！"));
        ui->d200->clear();
    }
    else dailyTask();
}
void MainUI::on_d210_textChanged(const QString &d) {
    int d210 = d.toInt();
    if(d210 > 15) {
        warningMsg(QStringLiteral("啾啾島每日任務一天最高是15顆ARC唷！"));
        ui->d210->clear();
    }
    else dailyTask();
}
void MainUI::on_d220_textChanged(const QString &d) {
    int d220 = d.toInt();
    if(d220 > 500) {
        warningMsg(QStringLiteral("拉契爾恩每日任務一天最高是500個硬幣唷！"));
        ui->d220->clear();
    }
    else dailyTask();
}
void MainUI::on_d220_vip_textChanged(const QString &d) {
    int d220_vip = d.toInt();
    if(d220_vip > 500) {
        warningMsg(QStringLiteral("拉契爾恩每日任務使用高服一天最高是500個硬幣唷！"));
        ui->d220_vip->clear();
    }
    else dailyTask();
}
void MainUI::on_d225_textChanged(const QString &d) {
    int d225 = d.toInt();
    if(d225 > 30) {
        warningMsg(QStringLiteral("阿爾卡娜每日任務一天最高是30個硬幣唷！"));
        ui->d225->clear();
    }
    else dailyTask();
}
void MainUI::on_d225_vip_textChanged(const QString &d) {
    int d225_vip = d.toInt();
    if(d225_vip > 40) {
        warningMsg(QStringLiteral("阿爾卡娜每日任務使用高服一天最高是40個硬幣唷！"));
        ui->d225_vip->clear();
    }
    else dailyTask();
}
void MainUI::on_d230_textChanged(const QString &d) {
    int d230 = d.toInt();
    if(d230 > 8) {
        warningMsg(QStringLiteral("魔菈斯每日任務一天最高是8顆ARC唷！"));
        ui->d230->clear();
    }
    else dailyTask();
}
void MainUI::on_d235_textChanged(const QString &d) {
    int d235 = d.toInt();
    if(d235 > 8) {
        warningMsg(QStringLiteral("艾斯佩拉每日任務一天最高是8顆ARC唷！"));
        ui->d235->clear();
    }
    else dailyTask();
}
void MainUI::on_startDate_userDateChanged(const QDate &date) {
    ui->targetDate->setDate(ui->startDate->date().addDays(day));
}
void MainUI::on_vipSwitch_stateChanged(int Switch) { dailyTask(); }
void MainUI::on_ArcLV_from_valueChanged(int from) {
    int to = ui->ArcLV_to->value();
    if(from > to) {
        warningMsg(QStringLiteral("目標等級需比當前等級還大唷！"));
        ui->ArcLV_from->setValue(1);
        ui->ArcLV_to->setValue(2);
        ui->cost->setNum(19040000);
    }
    else if(ui->arc1Switch->isChecked()) ui->cost->setText(decimalSeparator(upgradeMeso(from, to, 2)));
    else ui->cost->setText(decimalSeparator(upgradeMeso(from, to, 0)));
}
void MainUI::on_ArcLV_to_valueChanged(int to) {
    int from = ui->ArcLV_from->value();
    if(from > to) {
        warningMsg(QStringLiteral("目標等級需比當前等級還大唷！"));
        ui->ArcLV_from->setValue(1);
        ui->ArcLV_to->setValue(2);
        ui->cost->setNum(19040000);
    }
    else if(ui->arc1Switch->isChecked()) ui->cost->setText(decimalSeparator(upgradeMeso(from, to, 2)));
    else ui->cost->setText(decimalSeparator(upgradeMeso(from, to, 0)));
}
void MainUI::on_ArcDamage_x_valueChanged(int x) { ArcDamage(x, ui->ArcDamage_y->value()); }
void MainUI::on_ArcDamage_y_valueChanged(int y){ ArcDamage(ui->ArcDamage_x->value(), y); }
void MainUI::on_targetArc_valueChanged(int val) { dailyTask(); }
void MainUI::on_transLV_before_valueChanged(int lv) {
    int arc = ui->transArc_before->value();
    if(arc > (lv * lv + 11)) {
        warningMsg(QStringLiteral("成長值超過該等級升級數量！"));
        ui->transArc_before->setValue(0);
    }
    else transArc(lv, arc);
}
void MainUI::on_transArc_before_valueChanged(int arc) {
    int lv = ui->transLV_before->value();
    if(arc > (lv * lv + 11)) {
        warningMsg(QStringLiteral("成長值超過該等級升級數量！"));
        ui->transArc_before->setValue(0);
    }
    else transArc(lv, arc);
}
void MainUI::on_arc1Switch_stateChanged(int Switch) {
    int from = ui->ArcLV_from->value();
    int to = ui->ArcLV_to->value();
    int lv = ui->transLV_before->value();
    int arc = ui->transArc_before->value();
    ui->cost->setText(decimalSeparator(upgradeMeso(from, to, Switch)));
    transArc(lv, arc);
}
