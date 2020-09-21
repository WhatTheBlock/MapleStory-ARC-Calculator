/*
//　個人巴哈小屋【https://home.gamer.com.tw/evildjkay】
//　巴哈文章【https://forum.gamer.com.tw/Co.php?bsn=07650&sn=6273565】
//　數據資料來源【1. https://forum.gamer.com.tw/C.php?bsn=7650&snA=962710】
//　　　　　　　【2. https://strategywiki.org/wiki/MapleStory/Hyper_Stats】
*/

#include "mainui.h"
#include "ui_mainui.h"
#include "static_value.h"

//初始化設定
MainUI::MainUI(QWidget *parent) : QWidget(parent), ui(new Ui::MainUI) {
    QApplication::setStyle(QStyleFactory::create("Fusion")); //設定UI介面
    ui->setupUi(this);
    ui->background->viewport()->setCursor(Qt::ArrowCursor); //設定TextEdit的鼠標為標準箭頭

    //檢查更新
    nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &MainUI::onResult);
    url.setUrl(UpdateURL);
    nam->get(QNetworkRequest(url));

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

//提醒訊息
void MainUI::warningMsg(QString str){
    QMessageBox::warning(this, QStringLiteral("嘿！"), str);
}

//檢查更新
void MainUI::onResult(QNetworkReply *reply) {
    if(reply->error() == QNetworkReply::NoError) {
        QByteArray result = reply->readAll();
        QJsonDocument jsonResponse = QJsonDocument::fromJson(result);
        QJsonObject obj = jsonResponse.object();

        if(VERCODE < obj["verCode"].toInt()) {
            msg = new QMessageBox(QMessageBox::Information, QStringLiteral("發現新版本！"), QStringLiteral("是否現在更新？"), QMessageBox::NoButton, this);
            msg->addButton(QStringLiteral("取消"), QMessageBox::ActionRole);
            QPushButton *yes = msg->addButton(QStringLiteral("好唷！"), QMessageBox::ActionRole);
            msg->setDefaultButton(yes);
            msg->exec();
            if(msg->clickedButton() == yes) QDesktopServices::openUrl(QUrl(ReleaseURL));
        }
    } //else qDebug() << "ERROR";

    reply->deleteLater();
}

//更新升級所需ARC數量
void MainUI::upgradeVal() {
    //計算前先加上極限屬性 & 公會技能增加的ARC
    ArcTotal->setNum(hyperStats + guildSkill);

    for(int i = 0; i < 6; i++) {
        arcLV = ArcLV[i]->value();

        //更新目前ARC
        if(arcLV != 0) ArcTotal->setNum((arcLV + 2) * 10 + ArcTotal->text().toInt());

        switch(arcLV) {
        case 0: ArcUpgrade[i]->setText("?"); break;
        case ARCMAXLV: ArcUpgrade[i]->setNum(0); break;
        default: ArcUpgrade[i]->setNum(arcLV * arcLV + 11); break;
        }
    }

    avoidError(); //防止輸入錯誤
}

//防止輸入錯誤
void MainUI::avoidError() {
    for(int i = 0; i < 6; i++) {
        arcLV = ArcLV[i]->value();
        arcCurrent = ArcCurrent[i]->value();
        arcUpgradeInt[i] = ArcUpgrade[i]->text().toInt();

        if(arcCurrent > arcUpgradeInt[i]) {
            if(arcUpgradeInt[i] != 0 && arcLV != ARCMAXLV) {
                warningMsg(QStringLiteral("當前數量超過升級數量！"));
                ArcCurrent[i]->setValue(0);
            }
            else if(arcLV == ARCMAXLV) {
                warningMsg(QStringLiteral("ARC滿等就不能再合成啦！"));
                ArcCurrent[i]->setValue(0);
            }
            else {
                warningMsg(QStringLiteral("請先輸入ARC等級唷＞w＜"));
                ArcCurrent[i]->setValue(0);
            }
        }
    }
}

//更新屬性增加量數據
void MainUI::updateAp(int mode) {
    //計算屬性增加量不可納入極限屬性 & 公會技能增加的ARC
    int arc = ArcTotal->text().toInt() - hyperStats - guildSkill;

    switch (mode) {
    case 0: ArcTotal->setToolTip(QStringLiteral("屬性增加量：%1").arg(arc * 10)); break;
    case 1: ArcTotal->setToolTip(QStringLiteral("屬性增加量：%1").arg(arc * 3.9)); break;
    case 2: ArcTotal->setToolTip(QStringLiteral("屬性增加量：%1").arg(arc * 175)); break;
    }
}

//升級所需楓幣
int MainUI::upgradeMeso(int from, int to, int arc1) {
    //套用強化費用減少
    if(arc1 == 2) {
        int result_arc1 = UPGRADE_BASE_ARC1;

        for(int i = to - 2; i >= 1; i--){
            for(int j = 0; j < i; j++) result_arc1 += UPGRADE_BASE_ARC1_INCREASE;
            result_arc1 += UPGRADE_BASE_ARC1;
        }

        if(from > 1) result_arc1 -= upgradeMeso(1, from, arc1);
        return result_arc1;
    }
    //無套用
    else {
        int result = UPGRADE_BASE;

        for(int i = to - 2; i >= 1; i--){
            for(int j = 0; j < i; j++) result += UPGRADE_BASE_INCREASE;
            result += UPGRADE_BASE;
        }

        if(from > 1) result -= upgradeMeso(1, from, arc1);
        return result;
    }
}

//被擊傷害 / 增傷
void MainUI::ArcDamage(int x, int y) {
    float proportion = (float(x) / float(y)) * 100;

    //執行效率極差但是能寫的很短XD
    for(int i = 0; i < 9; i++) {
        if(proportion < damageList[i]) {
            ui->damage->setNum(damageList[i]);
            ui->hit_damage->setNum(hit_damageList[i]);
            break;
        }
        else if(proportion >= damageList[i] && proportion < damageList[i + 1]) {
            ui->damage->setNum(damageList[i]);
            ui->hit_damage->setNum(hit_damageList[i]);
            break;
        }
        else {
            ui->damage->setNum(damageList[i]);
            ui->hit_damage->setNum(hit_damageList[i]);
        }
    }

    //1.5倍傷害需求尾數為5的值需額外加5
    if((y * 15) % 100 == 50) ui->damage150->setNum(y * 1.5 + 5);
    else ui->damage150->setNum(y * 1.5);
}

//計算到達目標所需時間
void MainUI::dailyTask() {
    int targetArc = ui->targetArc->value();
    int maxReachArc = hyperStats + guildSkill; //計算前先加上極限屬性 & 公會技能增加的ARC
    day = 0;

    //計算前先偵錯
    avoidError();

    //若已達到
    if(targetArc <= ArcTotal->text().toInt()) {
        ui->targetDays->setNum(0);
        ui->targetDate->setDate(ui->startDate->date());
    }
    //若未達到
    else {
        dailyGet[0] = ui->d200->value();
        dailyGet[1] = ui->d210->value();
        if(ui->mobbingMission_220->isChecked())
            dailyGet[2] = ui->d220->value() + D220_MOBBING;
        else dailyGet[2] = ui->d220->value();
        if(ui->mobbingMission_225->isChecked())
            dailyGet[3] = ui->d225->value() + D225_MOBBING;
        else dailyGet[3] = ui->d225->value();
        dailyGet[4] = ui->d230->value();
        dailyGet[5] = ui->d235->value();

        //計算可能達到的最高ARC
        for(int i = 0; i < 6; i++){
            arcLV = ArcLV[i]->value();
            if(dailyGet[i] != 0) maxReachArc += 220;
            else if(arcLV != 0) maxReachArc += arcLV * 10 + 20;
        }
        //-------------------------------------------------------------
        //目標ARC超過可能達到的最高值，停止計算
        if(targetArc > maxReachArc) {
            warningMsg(QStringLiteral("目標訂太高了，無法達到 OAO"));
            ui->targetArc->setValue(0);
        }
        else {
            int count = ArcTotal->text().toInt();
            int current[6];
            int cntLv[6];

            //如果目標ARC不為10的倍數則無條件進位
            if((targetArc % 10) != 0) targetArc += 10 - (targetArc % 10);

            //計算目前各ARC累積量
            for(int i = 0; i < 6; i++) {
                cntLv[i] = 0; //init
                arcLV = ArcLV[i]->value();
                arcCurrent = ArcCurrent[i]->value();

                if(arcLV == 0) current[i] = 0;
                else {
                    switch (i) {
                    case 2: //拉契爾恩轉換為硬幣來計算
                        if(arcLV == 1) current[i] = arcCurrent * ARC_TO_COIN_220;
                        else current[i] = (upgradeList[arcLV - 1] + arcCurrent) * ARC_TO_COIN_220;
                        break;
                    case 3: //阿爾卡娜轉換為硬幣來計算
                        if(arcLV == 1) current[i] = arcCurrent * ARC_TO_COIN_225;
                        else current[i] = (upgradeList[arcLV - 1] + arcCurrent) * ARC_TO_COIN_225;
                        break;
                    default:
                        if(arcLV == 1) current[i] = arcCurrent;
                        else current[i] = upgradeList[arcLV - 1] + arcCurrent;
                        break;
                    }
                }
            }

            //迴圈一次等於過一天
            while(count < targetArc) {
                for(int i = 0; i < 6; i++){
                    arcLV = ArcLV[i]->value();
                    //當前等級+暫存等級小於上限且一天可獲得數量大於0
                    if((arcLV + cntLv[i]) < ARCMAXLV && dailyGet[i] > 0){
                        current[i] += dailyGet[i];

                        //設定ARC轉硬幣倍率
                        int a2c;
                        switch (i) {
                        case 2: a2c = ARC_TO_COIN_220; break;
                        case 3: a2c = ARC_TO_COIN_225; break;
                        default: a2c = 1; break;
                        }

                        if(current[i] >= (upgradeList[arcLV + cntLv[i]] * a2c)) {
                            if(arcLV + cntLv[i] == 0) count += 30;
                            else count += 10;
                            cntLv[i]++;
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

//加入分位符號
QString MainUI::decimalSeparator(int n){
    QString temp = QString::number(n);

    if(n<10000000) return temp.mid(0,1) + "," + temp.mid(1,3) + "," + temp.mid(4,3);
    else if(n<100000000) return temp.mid(0,2) + "," + temp.mid(2,3) + "," + temp.mid(5,3);
    else if(n<1000000000) return temp.mid(0,3) + "," + temp.mid(3,3) + "," + temp.mid(6,3);
    else return temp.mid(0,1) + "," + temp.mid(1,3) + "," + temp.mid(4,3) + "," + temp.mid(7,3);
}

//觸發事件
void MainUI::on_Arc1LV_valueChanged(int a) { upgradeVal(); updateAp(ArcMode->currentIndex()); dailyTask(); }
void MainUI::on_Arc2LV_valueChanged(int a) { upgradeVal(); updateAp(ArcMode->currentIndex()); dailyTask(); }
void MainUI::on_Arc3LV_valueChanged(int a) { upgradeVal(); updateAp(ArcMode->currentIndex()); dailyTask(); }
void MainUI::on_Arc4LV_valueChanged(int a) { upgradeVal(); updateAp(ArcMode->currentIndex()); dailyTask(); }
void MainUI::on_Arc5LV_valueChanged(int a) { upgradeVal(); updateAp(ArcMode->currentIndex()); dailyTask(); }
void MainUI::on_Arc6LV_valueChanged(int a) { upgradeVal(); updateAp(ArcMode->currentIndex()); dailyTask(); }

void MainUI::on_Arc1current_valueChanged(int a) { dailyTask(); }
void MainUI::on_Arc2current_valueChanged(int a) { dailyTask(); }
void MainUI::on_Arc3current_valueChanged(int a) { dailyTask(); }
void MainUI::on_Arc4current_valueChanged(int a) { dailyTask(); }
void MainUI::on_Arc5current_valueChanged(int a) { dailyTask(); }
void MainUI::on_Arc6current_valueChanged(int a) { dailyTask(); }

void MainUI::on_ArcMode_currentIndexChanged(int index) { updateAp(index); }

void MainUI::on_d200_valueChanged(int a) { dailyTask(); }
void MainUI::on_d210_valueChanged(int a) { dailyTask(); }
void MainUI::on_d220_valueChanged(int a) { dailyTask(); }
void MainUI::on_mobbingMission_220_stateChanged(int state) { dailyTask(); }
void MainUI::on_d225_valueChanged(int a) { dailyTask(); }
void MainUI::on_mobbingMission_225_stateChanged(int state) { dailyTask(); }
void MainUI::on_d230_valueChanged(int a) { dailyTask(); }
void MainUI::on_d235_valueChanged(int a) { dailyTask(); }

void MainUI::on_startDate_userDateChanged(const QDate &date) {
    ui->targetDate->setDate(date.addDays(day));
}

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
void MainUI::on_arc1Switch_stateChanged(int state) {
    int from = ui->ArcLV_from->value();
    int to = ui->ArcLV_to->value();
    int lv = ui->transLV_before->value();
    int arc = ui->transArc_before->value();
    ui->cost->setText(decimalSeparator(upgradeMeso(from, to, state)));
    transArc(lv, arc);
}

void MainUI::on_ArcDamage_x_valueChanged(int x) { ArcDamage(x, ui->ArcDamage_y->value()); }
void MainUI::on_ArcDamage_y_valueChanged(int y) { ArcDamage(ui->ArcDamage_x->value(), y); }

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

void MainUI::on_HyperStats_valueChanged(int lv) { hyperStats = hyperStatsList[lv]; upgradeVal(); dailyTask(); }
void MainUI::on_GuildSkillLV_valueChanged(int lv) { guildSkill = guildSkillList[lv]; upgradeVal(); dailyTask(); }

void MainUI::on_bahamut_clicked() { QDesktopServices::openUrl(QUrl(BahamutURL)); }
void MainUI::on_github_clicked() { QDesktopServices::openUrl(QUrl(GithubURL)); }
