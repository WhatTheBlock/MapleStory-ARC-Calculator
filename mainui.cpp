#include "mainui.h"
#include "ui_mainui.h"

#define ARCMAXLV 20

MainUI::MainUI(QWidget *parent) :  QWidget(parent), ui(new Ui::MainUI) {
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    ui->setupUi(this);
    ui->background->viewport()->setCursor(Qt::ArrowCursor); //設定textedit的鼠標為標準箭頭

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

    //設定ARC等級範圍與當前數量範圍
    for(int i=0; i<6; i++) {
        ArcLV[i]->setValidator(new QIntValidator(0, 20, this));
        ArcCurrent[i]->setValidator(new QIntValidator(0, 372, this));
    }
}
MainUI::~MainUI() { delete ui; }

void MainUI::upgradeVal() {
    ArcTotal->setText("0");
    for(int i=0; i<6; i++) {
        //更新升級所需ARC數量
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

void MainUI::avoidError() {
    //防止輸入錯誤
    for(int i=0; i<6; i++) {
        ArcLVint[i] = ArcLV[i]->text().toInt();
        ArcCurrentint[i] = ArcCurrent[i]->text().toInt();
        ArcUpgradeint[i] = ArcUpgrade[i]->text().toInt();
        if(ArcCurrentint[i]>ArcUpgradeint[i]) {
            if(ArcUpgradeint[i] != 0 && ArcLVint[i] != ARCMAXLV) {
                QMessageBox *msg = new QMessageBox(QMessageBox::Warning,QStringLiteral("這不科學！"), QStringLiteral("當前數量超過升級數量OuO"));
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

void MainUI::updateAp(int mode) {
    switch (mode) {
    case 0: ApTotal->setText(QString::number(ArcTotal->text().toInt()*10)); break;
    case 1: ApTotal->setText(QString::number(ArcTotal->text().toInt()*3.9)); break;
    case 2: ApTotal->setText(QString::number(ArcTotal->text().toInt()*140)); break;
    }
}


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


