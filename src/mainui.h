﻿#ifndef MAINUI_H
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
#include <QMovie>
#include <QSettings>
#include <QSharedPointer>
#include "ui_mainui.h"
#include "static_value.h"

namespace Ui { class MainUI; }

class MainUI : public QWidget {
    Q_OBJECT

public:
    explicit MainUI(QWidget *parent = nullptr);
    ~MainUI();

    QSharedPointer<QSettings> settings;

private slots:
    void on_Arc1LV_valueChanged(int);
    void on_Arc2LV_valueChanged(int);
    void on_Arc3LV_valueChanged(int);
    void on_Arc4LV_valueChanged(int);
    void on_Arc5LV_valueChanged(int);
    void on_Arc6LV_valueChanged(int);
    void on_Aut1LV_valueChanged(int);
    void on_Aut2LV_valueChanged(int);
    void on_Aut3LV_valueChanged(int);
    void on_Aut4LV_valueChanged(int);
    void on_Aut5LV_valueChanged(int);
    void on_Aut6LV_valueChanged(int);

    void on_ArcMode_currentIndexChanged(int);
    void on_AutMode_currentIndexChanged(int);

    void on_Arc1current_valueChanged(int);
    void on_Arc2current_valueChanged(int);
    void on_Arc3current_valueChanged(int);
    void on_Arc4current_valueChanged(int);
    void on_Arc5current_valueChanged(int);
    void on_Arc6current_valueChanged(int);
    void on_Aut1current_valueChanged(int);
    void on_Aut2current_valueChanged(int);
    void on_Aut3current_valueChanged(int);
    void on_Aut4current_valueChanged(int);
    void on_Aut5current_valueChanged(int);
    void on_Aut6current_valueChanged(int);

    void on_startDate_userDateChanged(const QDate&);
    void on_startDate_aut_userDateChanged(const QDate&);

    void on_selectARC_currentIndexChanged(int);
    void on_ArcLV_from_valueChanged();
    void on_ArcLV_to_valueChanged();
    void on_selectAUT_currentIndexChanged(int);
    void on_AutLV_from_valueChanged();
    void on_AutLV_to_valueChanged();

    void on_targetArc_valueChanged(int);
    void on_targetAut_valueChanged(int);

    void on_ArcDamage_x_valueChanged(int);
    void on_ArcDamage_y_valueChanged(int);
    void on_AutDamage_x_valueChanged(int);
    void on_AutDamage_y_valueChanged(int);

    void on_transArc_before_valueChanged(int);

    void on_HyperStats_valueChanged(int);
    void on_GuildSkillLV_valueChanged(int);

    void on_bahamut_clicked();
    void on_github_clicked();
    void on_maplewiki_clicked();
    void on_namuwiki_clicked();

    void on_tabWidget_currentChanged(int);

    void on_toolBox_currentChanged(int);

    void on_selectAll_clicked();
    void on_dailyAll_clicked();
    void on_weeklyAll_clicked();
    void on_selectAll_aut_clicked();
    void on_dailyAll_aut_clicked();

    void on_daily200_clicked();
    void on_daily210_clicked();
    void on_daily220_clicked();
    void on_daily225_clicked();
    void on_daily230_clicked();
    void on_daily235_clicked();
    void on_weekly200_clicked();
    void on_weekly210_clicked();
    void on_weekly220_clicked();
    void on_weekly225_clicked();
    void on_weekly230_clicked();
    void on_weekly235_clicked();

    void on_daily260_clicked();
    void on_daily265_clicked();
    void on_daily270_clicked();
    void on_daily275_clicked();
    void on_daily280_clicked();
    void on_daily285_clicked();

    void on_clearSettings_clicked();

private:
    Ui::MainUI *ui;

    QSpinBox* ArcLV[ARCTYPE];
    QSpinBox* AutLV[AUTTYPE];
    QSpinBox* ArcCurrent[ARCTYPE];
    QSpinBox* AutCurrent[AUTTYPE];
    QLabel* ArcUpgrade[ARCTYPE];
    QLabel* AutUpgrade[AUTTYPE];
    QLabel* ArcTotal;
    QLabel* AutTotal;
    QComboBox* ArcMode;
    QComboBox* AutMode;
    QMessageBox* msg;

    QNetworkAccessManager* nam;
    QUrl url;

    int arcLV, arcCurrent, arcUpgradeInt[ARCTYPE];
    int autLV, autCurrent, autUpgradeInt[AUTTYPE];
    int arcUpgradeMeso[ARCTYPE], arcUpgradeMeso_max[ARCTYPE];
    double autUpgradeMeso[AUTTYPE], autUpgradeMeso_max[AUTTYPE];
    int arcUpgradeDays[ARCTYPE], arcMaxDays[ARCTYPE];
    int autUpgradeDays[AUTTYPE], autMaxDays[AUTTYPE];
    int arcUpgradeList[ARCMAXLV];
    int autUpgradeList[AUTMAXLV];
    int dailyGet[ARCTYPE];
    int weeklyGet[ARCTYPE];
    bool dailyIsChecked[ARCTYPE], dailyIsChecked_aut[AUTTYPE];
    bool weeklyIsChecked[ARCTYPE];
    const int dailyMission[ARCTYPE] = {D200_MOB, D210_MOB, D220_MOB, D225_MOB, D230_MOB, D235_MOB};
    const int dailyMission_aut[AUTTYPE] = {D260_MOB, D265_MOB, D270_MOB, D275_MOB, D280_MOB, D285_MOB};
    const int weeklyMission[ARCTYPE] = {D200_MIS, D210_MIS, D220_MIS, D225_MIS, D230_MIS, D235_MIS};
    int day;

    int hyperStats;
    int guildSkill;

    int ARC200_COST[ARCMAXLV];
    int ARC210_COST[ARCMAXLV];
    int ARC220_COST[ARCMAXLV];
    int ARC225_COST[ARCMAXLV];
    int ARC230_COST[ARCMAXLV];
    int ARC235_COST[ARCMAXLV];
    int AUT260_COST[AUTMAXLV];
    int AUT265_COST[AUTMAXLV];
    int AUT270_COST[AUTMAXLV];
    int AUT275_COST[AUTMAXLV];
    int AUT280_COST[AUTMAXLV];
    int AUT285_COST[AUTMAXLV];

    void upgradeVal();
    void upgradeVal_aut();
    void updateAp(int);
    void arcLvChanged(QLabel*, int);
    void autLvChanged(QLabel*, int);
    void avoidError();
    void clearMission();

    void updateArcToolTips(QLabel*, int);
    void updateAutToolTips(QLabel*, int);
    void dailyTask();
    void dailyTask_aut();

    int arcUpgradeCost(int, int, int);
    double autUpgradeCost(int, int, int);

    void arcDamage(int, int);
    void autDamage(int, int);
    void transArc(int);

    void warningMsg(QString);

    QString decimalSeparator(double);

    void checkUpdate();
    void onResult(QNetworkReply*);

    void settingsInit();
    void importSettings();
};

#endif // MAINUI_H
