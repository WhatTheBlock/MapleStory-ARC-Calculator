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
#include <cmath>
#include "ui_mainui.h"
#include "static_value.h"

namespace Ui {class MainUI;}

class MainUI : public QWidget{
    Q_OBJECT

public:
    explicit MainUI(QWidget *parent = nullptr);
    ~MainUI();

private slots:
    void on_Arc1LV_valueChanged();
    void on_Arc2LV_valueChanged();
    void on_Arc3LV_valueChanged();
    void on_Arc4LV_valueChanged();
    void on_Arc5LV_valueChanged();
    void on_Arc6LV_valueChanged();
    void on_Aut1LV_valueChanged();
    void on_Aut2LV_valueChanged();
    void on_Aut3LV_valueChanged();

    void on_ArcMode_currentIndexChanged(int);
    void on_AutMode_currentIndexChanged(int);

    void on_Arc1current_valueChanged();
    void on_Arc2current_valueChanged();
    void on_Arc3current_valueChanged();
    void on_Arc4current_valueChanged();
    void on_Arc5current_valueChanged();
    void on_Arc6current_valueChanged();
    void on_Aut1current_valueChanged();
    void on_Aut2current_valueChanged();
    void on_Aut3current_valueChanged();

    void on_d200_valueChanged();
    void on_d210_valueChanged();
    void on_d220_valueChanged();
    void on_d225_valueChanged();
    void on_d230_valueChanged();
    void on_d235_valueChanged();
    void on_mobbingMission_200_stateChanged();
    void on_mobbingMission_210_stateChanged();
    void on_mobbingMission_220_stateChanged();
    void on_mobbingMission_225_stateChanged();
    void on_mobbingMission_230_stateChanged();
    void on_mobbingMission_235_stateChanged();
    void on_mobbingMission_260_stateChanged();
    void on_mobbingMission_270_stateChanged();
    void on_mobbingMission_275_stateChanged();
    void on_mob260_clicked();
    void on_mob265_clicked();

    void on_allMobbing_clicked();
    void on_allMission_clicked();

    void on_startDate_userDateChanged(const QDate&);
    void on_startDate_aut_userDateChanged(const QDate&);

    void on_selectARC_currentIndexChanged(int);
    void on_ArcLV_from_valueChanged();
    void on_ArcLV_to_valueChanged();
    void on_selectAUT_currentIndexChanged(int);
    void on_AutLV_from_valueChanged();
    void on_AutLV_to_valueChanged();

    void on_targetArc_valueChanged();
    void on_targetAut_valueChanged();

    void on_ArcDamage_x_valueChanged(int);
    void on_ArcDamage_y_valueChanged(int);
    void on_AutDamage_x_valueChanged(int);
    void on_AutDamage_y_valueChanged(int);

    void on_transLV_before_valueChanged(int);
    void on_transArc_before_valueChanged(int);

    void on_HyperStats_valueChanged(int);
    void on_GuildSkillLV_valueChanged(int);

    void on_bahamut_clicked();
    void on_github_clicked();

    void on_tabWidget_currentChanged(int);

    void on_toolBox_currentChanged(int);

private:
    Ui::MainUI *ui;

    QSpinBox* ArcLV[6];
    QSpinBox* AutLV[3];
    QSpinBox* ArcCurrent[6];
    QSpinBox* AutCurrent[3];
    QLabel* ArcUpgrade[6];
    QLabel* AutUpgrade[3];
    QLabel* ArcTotal;
    QLabel* AutTotal;
    QComboBox* ArcMode;
    QComboBox* AutMode;
    QMessageBox* msg;

    QNetworkAccessManager* nam;
    QUrl url;

    int arcLV, arcCurrent, arcUpgradeInt[6];
    int autLV, autCurrent, autUpgradeInt[3];
    int arcUpgradeMeso[6], arcUpgradeMeso_max[6];
    double autUpgradeMeso[3], autUpgradeMeso_max[3];
    int arcUpgradeDays[6], arcMaxDays[6];
    int autUpgradeDays[3], autMaxDays[3];
    int arcUpgradeList[ARCMAXLV];
    int autUpgradeList[AUTMAXLV];
    int dailyGet[6];
    int day;

    int hyperStats;
    int guildSkill;

    int ARC200_COST[ARCMAXLV];
    int ARC210_COST[ARCMAXLV];
    int ARC220_COST[ARCMAXLV];
    int ARC225_COST[ARCMAXLV];

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
    void transArc(int, int);

    void warningMsg(QString);

    QString decimalSeparator(int);

    void checkUpdate();
    void onResult(QNetworkReply*);
};

#endif // MAINUI_H