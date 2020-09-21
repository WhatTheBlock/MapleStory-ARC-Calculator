#ifndef MAINUI_H
#define MAINUI_H

#include <QtWidgets>
#include <QStyleFactory>
#include <QDebug>
#include <QtCore>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDesktopServices>
#include <cmath>

namespace Ui {class MainUI;}

class MainUI : public QWidget{
    Q_OBJECT

public:
    explicit MainUI(QWidget *parent = nullptr);
    ~MainUI();

private slots:
    void on_Arc1LV_valueChanged(int arg1);
    void on_Arc2LV_valueChanged(int arg1);
    void on_Arc3LV_valueChanged(int arg1);
    void on_Arc4LV_valueChanged(int arg1);
    void on_Arc5LV_valueChanged(int arg1);
    void on_Arc6LV_valueChanged(int arg1);

    void on_ArcMode_currentIndexChanged(int index);

    void on_Arc1current_valueChanged(int arg1);
    void on_Arc2current_valueChanged(int arg1);
    void on_Arc3current_valueChanged(int arg1);
    void on_Arc4current_valueChanged(int arg1);
    void on_Arc5current_valueChanged(int arg1);
    void on_Arc6current_valueChanged(int arg1);

    void on_d200_valueChanged(int arg1);
    void on_d210_valueChanged(int arg1);
    void on_d220_valueChanged(int arg1);
    void on_d225_valueChanged(int arg1);
    void on_d230_valueChanged(int arg1);
    void on_d235_valueChanged(int arg1);

    void on_startDate_userDateChanged(const QDate &date);

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

    void on_HyperStats_valueChanged(int arg1);
    void on_GuildSkillLV_valueChanged(int arg1);

    void on_bahamut_clicked();
    void on_github_clicked();


private:
    Ui::MainUI *ui;

    QSpinBox* ArcLV[6];
    QSpinBox* ArcCurrent[6];
    QLabel* ArcUpgrade[6];
    QLabel* ArcTotal;
    QComboBox* ArcMode;
    QMessageBox* msg;

    int arcLV, arcCurrent, arcUpgradeInt[6];
    int upgradeList[99];
    int dailyGet[6];
    int day;
    int hyperStats;
    int guildSkill;

    QNetworkAccessManager* nam;
    QUrl url;

    void upgradeVal();
    void updateAp(int mode);
    void avoidError();
    int upgradeMeso(int from, int to, int arc1);
    void ArcDamage(int x, int y);
    void dailyTask();
    void warningMsg(QString msg);
    void transArc(int lv, int arc);
    QString decimalSeparator(int n);
    void onResult(QNetworkReply* reply);

};

#endif // MAINUI_H
