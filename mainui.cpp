#include "mainui.h"
#include "ui_mainui.h"

#define ARCMAXLV 20

//初始化設定
MainUI::MainUI(QWidget *parent) :  QWidget(parent), ui(new Ui::MainUI) {
    QApplication::setStyle(QStyleFactory::create("Fusion")); //設定UI介面
    ui->setupUi(this);
    ui->background->viewport()->setCursor(Qt::ArrowCursor); //設定LineEdit的鼠標為標準箭頭

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
        ArcLV[i]->setValidator(new QIntValidator(0, 20, this));
        ArcCurrent[i]->setValidator(new QIntValidator(0, 372, this));
    }
    ui->ArcLV_from->setValidator(new QIntValidator(1, 20 ,this));
    ui->ArcLV_to->setValidator(new QIntValidator(1, 20, this));
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

//更新屬性增加量數據
void MainUI::updateAp(int mode) {
    switch (mode) {
    case 0: ApTotal->setText(QString::number(ArcTotal->text().toInt()*10)); break;
    case 1: ApTotal->setText(QString::number(ArcTotal->text().toInt()*3.9)); break;
    case 2: ApTotal->setText(QString::number(ArcTotal->text().toInt()*140)); break;
    }
}

//觸發事件
void MainUI::on_Arc1LV_textChanged(const QString &a) { upgradeVal(); updateAp(ArcMode->currentIndex()); }
void MainUI::on_Arc2LV_textChanged(const QString &a) { upgradeVal(); updateAp(ArcMode->currentIndex()); }
void MainUI::on_Arc3LV_textChanged(const QString &a) { upgradeVal(); updateAp(ArcMode->currentIndex()); }
void MainUI::on_Arc4LV_textChanged(const QString &a) { upgradeVal(); updateAp(ArcMode->currentIndex()); }
void MainUI::on_Arc5LV_textChanged(const QString &a) { upgradeVal(); updateAp(ArcMode->currentIndex()); }
void MainUI::on_Arc6LV_textChanged(const QString &a) { upgradeVal(); updateAp(ArcMode->currentIndex()); }
void MainUI::on_Arc1current_textChanged(const QString &a) { avoidError(); }
void MainUI::on_Arc2current_textChanged(const QString &a) { avoidError(); }
void MainUI::on_Arc3current_textChanged(const QString &a) { avoidError(); }
void MainUI::on_Arc4current_textChanged(const QString &a) { avoidError(); }
void MainUI::on_Arc5current_textChanged(const QString &a) { avoidError(); }
void MainUI::on_Arc6current_textChanged(const QString &a) { avoidError(); }
void MainUI::on_ArcMode_currentIndexChanged(int index) { updateAp(index); }
void MainUI::on_ArcLV_from_textChanged(const QString &ArcLV_from_text) {
    int from = ArcLV_from_text.toInt();
    int to = ui->ArcLV_to->text().toInt();
    if(from>20 || from < 1) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("當前等級範圍是1~20唷！"));
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
    if(to>20 || to < 1) {
        QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("嘿！"), QStringLiteral("目標等級範圍是1~20唷！"));
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

