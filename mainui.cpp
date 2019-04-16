/*
//   哈囉大家好：）我是來自艾麗亞的曉亦夏風
//   寫這個小工具只是單純為了練習程式撰寫能力
//   變數命名方式不太理想，先跟各位說聲抱歉QnQ
//   歡迎+巴哈好友，巴哈小屋：https://home.gamer.com.tw/evildjkay
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

    //設定輸入限制
    for(int i=0; i<6; i++) {
        ArcLV[i]->setValidator(new QIntValidator(0, ARCMAXLV, this));
        ArcCurrent[i]->setValidator(new QIntValidator(0, (ARCMAXLV*ARCMAXLV)+11, this));
    }
    ui->ArcLV_from->setValidator(new QIntValidator(1, ARCMAXLV ,this));
    ui->ArcLV_to->setValidator(new QIntValidator(1, ARCMAXLV, this));
    ui->ArcDamage_x->setValidator(new QIntValidator(0, ARCMAX, this));
    ui->ArcDamage_y->setValidator(new QIntValidator(30, ARCMAX_MOB, this));
    ui->d200->setValidator(new QIntValidator(0, 8, this));
    ui->d210->setValidator(new QIntValidator(0, 15, this));
    ui->d220->setValidator(new QIntValidator(0, 500, this));
    ui->d220_vip->setValidator(new QIntValidator(0, 500, this));
    ui->d225->setValidator(new QIntValidator(0, 30, this));
    ui->d225_vip->setValidator(new QIntValidator(0, 40, this));
    ui->d230->setValidator(new QIntValidator(0, 8, this));
    ui->d235->setValidator(new QIntValidator(0, 8, this));
    ui->targetArc->setValidator(new QIntValidator(30, ARCMAX, this));

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

//更新升級所需ARC數量
void MainUI::upgradeVal() {
    ArcTotal->setText("0");
    for(int i=0; i<6; i++) {
        ArcLVint[i] = ArcLV[i]->text().toInt();
        if(ArcLVint[i] != 0) ArcTotal->setText(QString::number((ArcLVint[i]+2)*10+ArcTotal->text().toInt())); //更新目前ARC
        if(ArcLVint[i] > ARCMAXLV) {
            QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("此版本的ARC等級上限為%1等唷！").arg(ARCMAXLV));
            msg->exec();
            ArcLV[i]->setText(QString::number(ARCMAXLV));
        }
        switch(ArcLVint[i]) {
        case 0: ArcUpgrade[i]->setText("?"); break;
        case ARCMAXLV: ArcUpgrade[i]->setText("0"); break;
        default: ArcUpgrade[i]->setText(QString::number(ArcLVint[i]*ArcLVint[i]+11)); break;
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
                QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("這不科學！"), QStringLiteral("當前數量超過升級數量！"));
                msg->exec();
                ArcCurrent[i]->setText("");
            }
            else if(ArcLVint[i] == ARCMAXLV) {
                QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("ARC滿等就不能再合成啦！"));
                msg->exec();
                ArcCurrent[i]->setText("");
            }
            else {
                QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("請先輸入ARC等級唷＞w＜"));
                msg->exec();
                ArcCurrent[i]->setText("");
            }
        }
    }
}

//更新屬性增加量數據
void MainUI::updateAp(int mode) {
    switch (mode) {
    case 0: ApTotal->setText(QString::number(ArcTotal->text().toInt()*10)); break;
    case 1: ApTotal->setText(QString::number(ArcTotal->text().toInt()*3.9)); break;
    case 2: ApTotal->setText(QString::number(ArcTotal->text().toInt()*140)); break;
    }
}

//強化所需楓幣
int MainUI::upgradeMeso(int from, int to) {
    int base = 1904;
    int result = 1904;

    for(int i = to - 2; i >= 1; i--){
        for(int j = 0; j < i; j++){
            result+=660;
        }
        result+=base;
    }

    if(from > 1) result -= upgradeMeso(1, from);

    return result;
}

//傷害計算
void MainUI::ArcDamage(int x, int y) {
    QString damageList[] = {"10", "30", "60", "70", "80", "100", "110", "150"};
    QString hit_damageList[] = {"280", "240", "180", "160", "140", "100", "80", "0"};

    double percent = double(x) / double(y);
    if(percent < 0.1) { ui->damage->setText(damageList[0]); ui->hit_damage->setText(hit_damageList[0]); }
    else if(percent >= 0.1 && percent < 0.3) { ui->damage->setText(damageList[1]); ui->hit_damage->setText(hit_damageList[1]); }
    else if(percent >= 0.3 && percent < 0.5) { ui->damage->setText(damageList[2]); ui->hit_damage->setText(hit_damageList[2]); }
    else if(percent >= 0.5 && percent < 0.7) { ui->damage->setText(damageList[3]); ui->hit_damage->setText(hit_damageList[3]); }
    else if(percent >= 0.7 && percent < 1) { ui->damage->setText(damageList[4]); ui->hit_damage->setText(hit_damageList[4]); }
    else if(percent >= 1 && percent < 1.25) { ui->damage->setText(damageList[5]); ui->hit_damage->setText(hit_damageList[5]); }
    else if(percent >= 1.25 && percent < 1.5) { ui->damage->setText(damageList[6]); ui->hit_damage->setText(hit_damageList[6]); }
    else { ui->damage->setText(damageList[7]); ui->hit_damage->setText(hit_damageList[7]); }

    //1.5倍傷害需求尾數為5的值需額外加5
    if((y*15)%100 == 50) ui->damage150->setText(QString::number(y*1.5+5));
    else ui->damage150->setText(QString::number(y*1.5));
}

//計算到達目標ARC所需時間
void MainUI::dailyTask() {
    int targetArc = ui->targetArc->text().toInt();
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
        ui->targetDays->setText("0");
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
            QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("目標訂太高了，無法達到 OAO"));
            msg->exec();
            ui->targetArc->setText("0");
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
                //qDebug() << current[i];
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
            if(day > 9999) ui->targetDays->setText("9999");
            else ui->targetDays->setText(QString::number(day));
            ui->targetDate->setDate(ui->startDate->date().addDays(day));
        }
    }
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
void MainUI::on_ArcLV_from_textChanged(const QString &ArcLV_from_text) {
    int from = ArcLV_from_text.toInt();
    int to = ui->ArcLV_to->text().toInt();
    if(from>ARCMAXLV || from < 1) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("當前等級範圍是1~%1唷！").arg(ARCMAXLV));
        msg->exec();
        ui->ArcLV_from->setText("1");
        ui->ArcLV_to->setText("2");
        ui->cost->setText("1904");
    }
    else {
        if(from > to) {
            QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("目標等級需比當前等級還大唷！"));
            msg->exec();
            ui->ArcLV_from->setText("1");
            ui->ArcLV_to->setText("2");
            ui->cost->setText("1904");
        }
        else ui->cost->setText(QString::number(upgradeMeso(from, to)));
    }
}
void MainUI::on_ArcLV_to_textChanged(const QString &ArcLV_to_text) {
    int from = ui->ArcLV_from->text().toInt();
    int to = ArcLV_to_text.toInt();
    if(to>ARCMAXLV || to < 1) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("目標等級範圍是1~%1唷！").arg(ARCMAXLV));
        msg->exec();
        ui->ArcLV_from->setText("1");
        ui->ArcLV_to->setText("2");
        ui->cost->setText("1904");
    }
    else {
        if(from > to) {
            QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("目標等級需比當前等級還大唷！"));
            msg->exec();
            ui->ArcLV_from->setText("1");
            ui->ArcLV_to->setText("2");
            ui->cost->setText("1904");
        }
        else if(from == to) ui->cost->setText("0");
        else ui->cost->setText(QString::number(upgradeMeso(from, to)));
    }
}
void MainUI::on_ArcDamage_x_textChanged(const QString &ArcDamage_x){
    int x = ArcDamage_x.toInt();
    int y = ui->ArcDamage_y->text().toInt();
    if(x > ARCMAX) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("自身ARC範圍是0~%1唷！").arg(ARCMAX));
        msg->exec();
        ui->ArcDamage_x->setText("0");
        ui->ArcDamage_y->setText("30");
    }
    else ArcDamage(x, y);
}
void MainUI::on_ArcDamage_y_textChanged(const QString &ArcDamage_y){
    int x = ui->ArcDamage_x->text().toInt();
    int y = ArcDamage_y.toInt();
    if(y < 30) {
        ui->damage->setText("?");
        ui->hit_damage->setText("?");
        ui->damage150->setText("?");
    }
    else if(y > ARCMAX_MOB) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("怪物ARC範圍是30~%1唷！").arg(ARCMAX_MOB));
        msg->exec();
        ui->ArcDamage_x->setText("0");
        ui->ArcDamage_y->setText("30");
    }
    else ArcDamage(x, y);
}
void MainUI::on_d200_textChanged(const QString &d) {
    int d200 = d.toInt();
    if(d200 > 8) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("消逝的旅途每日任務一天最高是8顆ARC唷！"));
        msg->exec();
        ui->d200->setText("8");
    }
    else dailyTask();
}
void MainUI::on_d210_textChanged(const QString &d) {
    int d210 = d.toInt();
    if(d210 > 15) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("啾啾島每日任務一天最高是15顆ARC唷！"));
        msg->exec();
        ui->d210->setText("15");
    }
    else dailyTask();
}
void MainUI::on_d220_textChanged(const QString &d) {
    int d220 = d.toInt();
    if(d220 > 500) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("拉契爾恩每日任務一天最高是500個硬幣唷！"));
        msg->exec();
        ui->d220->setText("0");
    }
    else dailyTask();
}
void MainUI::on_d220_vip_textChanged(const QString &d) {
    int d220_vip = d.toInt();
    if(d220_vip > 500) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("拉契爾恩每日任務使用高服一天最高是500個硬幣唷！"));
        msg->exec();
        ui->d220_vip->setText("0");
    }
    else dailyTask();
}
void MainUI::on_d225_textChanged(const QString &d) {
    int d225 = d.toInt();
    if(d225 > 30) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("阿爾卡娜每日任務一天最高是30個硬幣唷！"));
        msg->exec();
        ui->d225->setText("0");
    }
    else dailyTask();
}
void MainUI::on_d225_vip_textChanged(const QString &d) {
    int d225_vip = d.toInt();
    if(d225_vip > 40) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("阿爾卡娜每日任務使用高服一天最高是40個硬幣唷！"));
        msg->exec();
        ui->d225_vip->setText("0");
    }
    else dailyTask();
}
void MainUI::on_d230_textChanged(const QString &d) {
    int d230 = d.toInt();
    if(d230 > 8) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("魔菈斯每日任務一天最高是8顆ARC唷！"));
        msg->exec();
        ui->d230->setText("8");
    }
    else dailyTask();
}
void MainUI::on_d235_textChanged(const QString &d) {
    int d235 = d.toInt();
    if(d235 > 8) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("艾斯佩拉每日任務一天最高是8顆ARC唷！"));
        msg->exec();
        ui->d235->setText("8");
    }
    else dailyTask();
}
void MainUI::on_targetArc_textChanged(const QString &val) {
    int targetArc = val.toInt();
    if(targetArc > ARCMAX) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("目標ARC範圍是0~%1唷！").arg(ARCMAX));
        msg->exec();
        ui->targetArc->setText("0");
    }
    else dailyTask();
}
void MainUI::on_startDate_userDateChanged(const QDate &date) {
    ui->targetDate->setDate(ui->startDate->date().addDays(day));
}
void MainUI::on_vipSwitch_stateChanged(int Switch) { dailyTask(); }
