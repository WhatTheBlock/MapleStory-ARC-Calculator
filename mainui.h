#ifndef MAINUI_H
#define MAINUI_H

#include<QtWidgets>
#include<QStyleFactory>
#include<QDebug>
#include<QUrl>
#include<QtCore>
#include<QLineEdit>
#include<cmath>

namespace Ui {class MainUI;}

class MainUI : public QWidget{
    Q_OBJECT

public:
    explicit MainUI(QWidget *parent = nullptr);
    ~MainUI();

private slots:
    void on_Arc1LV_textChanged(const QString &a);

    void on_Arc2LV_textChanged(const QString &a);

    void on_Arc3LV_textChanged(const QString &a);

    void on_Arc4LV_textChanged(const QString &a);

    void on_Arc5LV_textChanged(const QString &a);

    void on_Arc6LV_textChanged(const QString &a);

    void on_ArcMode_currentIndexChanged(int index);

    void on_Arc1current_textChanged(const QString &arg1);

    void on_Arc2current_textChanged(const QString &arg1);

    void on_Arc3current_textChanged(const QString &arg1);

    void on_Arc4current_textChanged(const QString &arg1);

    void on_Arc5current_textChanged(const QString &arg1);

    void on_Arc6current_textChanged(const QString &arg1);

    void on_d200_textChanged(const QString &arg1);

    void on_d210_textChanged(const QString &arg1);

    void on_d220_textChanged(const QString &arg1);

    void on_d220_vip_textChanged(const QString &arg1);

    void on_d225_vip_textChanged(const QString &arg1);

    void on_d225_textChanged(const QString &arg1);

    void on_d230_textChanged(const QString &arg1);

    void on_d235_textChanged(const QString &arg1);

    void on_startDate_userDateChanged(const QDate &date);

    void on_vipSwitch_stateChanged(int arg1);

    void on_ArcLV_from_valueChanged(int arg1);

    void on_ArcLV_to_valueChanged(int arg1);

    void on_ArcDamage_x_valueChanged(int arg1);

    void on_ArcDamage_y_valueChanged(int arg1);

    void on_targetArc_valueChanged(int arg1);

    void on_transLV_before_valueChanged(int arg1);

    void on_transArc_before_valueChanged(int arg1);

    void on_arc1Switch_stateChanged(int arg1);

    void on_mobbingMission_220_stateChanged(int arg1);

    void on_mobbingMission_225_stateChanged(int arg1);

private:
    Ui::MainUI *ui;

    QLineEdit* ArcLV[6];
    QLineEdit* ArcCurrent[6];
    QLabel* ArcUpgrade[6];
    QLabel* ArcTotal;
    QLabel* ApTotal;
    QComboBox* ArcMode;
    int ArcLVint[6], ArcCurrentint[6], ArcUpgradeint[6];
    int upgradeList[99];
    int day;
    QMessageBox* msg;

    void upgradeVal();
    void updateAp(int mode);
    void avoidError();
    int upgradeMeso(int from, int to, int arc1);
    void ArcDamage(int x, int y);
    void dailyTask();
    void warningMsg(QString msg);
    void transArc(int lv, int arc);
    QString decimalSeparator(int n);

};

#endif // MAINUI_H
