/********************************************************************************
** Form generated from reading UI file 'mainui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINUI_H
#define UI_MAINUI_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainUI
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_9;
    QLabel *Arc6upgrade;
    QLineEdit *Arc1LV;
    QLabel *Arc4upgrade;
    QLabel *label_13;
    QLabel *arcimg2;
    QLineEdit *Arc6current;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *arcimg5;
    QLineEdit *Arc1current;
    QLineEdit *Arc2current;
    QLabel *arcimg1;
    QLabel *arcimg6;
    QLabel *arcimg4;
    QLineEdit *Arc3current;
    QLabel *label_3;
    QLabel *Arc2upgrade;
    QLabel *label_5;
    QLabel *Arc5upgrade;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Arc5current;
    QLineEdit *Arc4current;
    QLineEdit *Arc3LV;
    QLineEdit *Arc6LV;
    QLabel *label_4;
    QLabel *label_10;
    QLineEdit *Arc4LV;
    QLabel *Arc1upgrade;
    QLabel *arcimg3;
    QLineEdit *Arc5LV;
    QLabel *label_12;
    QLineEdit *Arc2LV;
    QLabel *Arc3upgrade;
    QComboBox *ArcMode;
    QLabel *label_7;
    QLabel *ApTotal;
    QLabel *ArcTotal;
    QLabel *label_15;
    QLabel *label_14;
    QFrame *line;
    QLabel *coinimg2;
    QLabel *img235;
    QLabel *label_34;
    QLabel *img225;
    QLineEdit *d235;
    QLabel *label_30;
    QLineEdit *d225;
    QLabel *vipimg1_2;
    QLabel *img200;
    QLabel *label_42;
    QLineEdit *d230;
    QLineEdit *d220_vip;
    QLabel *label_32;
    QLabel *img210;
    QLabel *label_37;
    QLabel *label_40;
    QLabel *label_33;
    QLineEdit *d220;
    QLabel *label_41;
    QLabel *label_36;
    QLineEdit *d210;
    QLabel *label_29;
    QLabel *img230;
    QLabel *label_31;
    QLabel *label_35;
    QLineEdit *d225_vip;
    QLabel *label_39;
    QLineEdit *d200;
    QLabel *coinimg1;
    QLabel *label_38;
    QLabel *vipimg1;
    QLabel *img220;
    QCheckBox *vipSwitch;
    QLabel *label_43;
    QDateEdit *startDate;
    QLabel *label_28;
    QDateEdit *targetDate;
    QLabel *label_45;
    QLabel *targetDays;
    QLabel *label_44;
    QSpinBox *targetArc;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *cost;
    QLabel *label_51;
    QSpinBox *ArcLV_from;
    QSpinBox *ArcLV_to;
    QLabel *label_53;
    QLabel *label_54;
    QFrame *line_5;
    QGroupBox *groupBox_2;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *damage;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *hit_damage;
    QLabel *label_27;
    QFrame *line_3;
    QLabel *damage150;
    QSpinBox *ArcDamage_x;
    QSpinBox *ArcDamage_y;
    QGroupBox *groupBox_3;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *transLV_after;
    QLabel *transArc_after;
    QSpinBox *transLV_before;
    QSpinBox *transArc_before;
    QFrame *line_4;
    QLabel *label_52;
    QLabel *transCost;
    QLabel *label_20;
    QLabel *label_55;
    QLabel *label_56;
    QTextEdit *background;

    void setupUi(QWidget *MainUI)
    {
        if (MainUI->objectName().isEmpty())
            MainUI->setObjectName(QString::fromUtf8("MainUI"));
        MainUI->resize(712, 408);
        MainUI->setMinimumSize(QSize(712, 408));
        MainUI->setMaximumSize(QSize(712, 408));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(12);
        MainUI->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ARC1.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainUI->setWindowIcon(icon);
        MainUI->setWindowOpacity(0.970000000000000);
        MainUI->setLayoutDirection(Qt::LeftToRight);
        tabWidget = new QTabWidget(MainUI);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(-5, -3, 721, 421));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 50, 16, 31));
        QFont font1;
        font1.setPointSize(16);
        label_9->setFont(font1);
        Arc6upgrade = new QLabel(tab);
        Arc6upgrade->setObjectName(QString::fromUtf8("Arc6upgrade"));
        Arc6upgrade->setGeometry(QRect(185, 210, 31, 31));
        Arc1LV = new QLineEdit(tab);
        Arc1LV->setObjectName(QString::fromUtf8("Arc1LV"));
        Arc1LV->setGeometry(QRect(85, 11, 25, 31));
        Arc1LV->setAcceptDrops(false);
        Arc1LV->setInputMethodHints(Qt::ImhNone);
        Arc1LV->setMaxLength(2);
        Arc4upgrade = new QLabel(tab);
        Arc4upgrade->setObjectName(QString::fromUtf8("Arc4upgrade"));
        Arc4upgrade->setGeometry(QRect(185, 130, 31, 31));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(170, 210, 16, 31));
        label_13->setFont(font1);
        arcimg2 = new QLabel(tab);
        arcimg2->setObjectName(QString::fromUtf8("arcimg2"));
        arcimg2->setGeometry(QRect(20, 50, 31, 31));
        arcimg2->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC2.png")));
        Arc6current = new QLineEdit(tab);
        Arc6current->setObjectName(QString::fromUtf8("Arc6current"));
        Arc6current->setGeometry(QRect(130, 210, 34, 31));
        Arc6current->setMaxLength(3);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 170, 21, 31));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 10, 16, 31));
        label_8->setFont(font1);
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(170, 130, 16, 31));
        label_11->setFont(font1);
        arcimg5 = new QLabel(tab);
        arcimg5->setObjectName(QString::fromUtf8("arcimg5"));
        arcimg5->setGeometry(QRect(20, 170, 31, 31));
        arcimg5->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC5.png")));
        Arc1current = new QLineEdit(tab);
        Arc1current->setObjectName(QString::fromUtf8("Arc1current"));
        Arc1current->setGeometry(QRect(130, 10, 34, 31));
        Arc1current->setMaxLength(3);
        Arc2current = new QLineEdit(tab);
        Arc2current->setObjectName(QString::fromUtf8("Arc2current"));
        Arc2current->setGeometry(QRect(130, 50, 34, 31));
        Arc2current->setMaxLength(3);
        arcimg1 = new QLabel(tab);
        arcimg1->setObjectName(QString::fromUtf8("arcimg1"));
        arcimg1->setGeometry(QRect(20, 10, 31, 31));
        arcimg1->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC1.png")));
        arcimg6 = new QLabel(tab);
        arcimg6->setObjectName(QString::fromUtf8("arcimg6"));
        arcimg6->setGeometry(QRect(20, 210, 31, 31));
        arcimg6->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC6.png")));
        arcimg4 = new QLabel(tab);
        arcimg4->setObjectName(QString::fromUtf8("arcimg4"));
        arcimg4->setGeometry(QRect(20, 130, 31, 31));
        arcimg4->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC4.png")));
        Arc3current = new QLineEdit(tab);
        Arc3current->setObjectName(QString::fromUtf8("Arc3current"));
        Arc3current->setGeometry(QRect(130, 90, 34, 31));
        Arc3current->setMaxLength(3);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 90, 21, 31));
        Arc2upgrade = new QLabel(tab);
        Arc2upgrade->setObjectName(QString::fromUtf8("Arc2upgrade"));
        Arc2upgrade->setGeometry(QRect(185, 50, 31, 31));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 131, 21, 31));
        Arc5upgrade = new QLabel(tab);
        Arc5upgrade->setObjectName(QString::fromUtf8("Arc5upgrade"));
        Arc5upgrade->setGeometry(QRect(185, 170, 31, 31));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 11, 21, 31));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 50, 21, 31));
        Arc5current = new QLineEdit(tab);
        Arc5current->setObjectName(QString::fromUtf8("Arc5current"));
        Arc5current->setGeometry(QRect(130, 170, 34, 31));
        Arc5current->setMaxLength(3);
        Arc4current = new QLineEdit(tab);
        Arc4current->setObjectName(QString::fromUtf8("Arc4current"));
        Arc4current->setGeometry(QRect(130, 130, 34, 31));
        Arc4current->setMaxLength(3);
        Arc3LV = new QLineEdit(tab);
        Arc3LV->setObjectName(QString::fromUtf8("Arc3LV"));
        Arc3LV->setGeometry(QRect(85, 90, 25, 31));
        Arc3LV->setMaxLength(2);
        Arc6LV = new QLineEdit(tab);
        Arc6LV->setObjectName(QString::fromUtf8("Arc6LV"));
        Arc6LV->setGeometry(QRect(85, 210, 25, 31));
        Arc6LV->setMaxLength(2);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 210, 21, 31));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(170, 90, 16, 31));
        label_10->setFont(font1);
        Arc4LV = new QLineEdit(tab);
        Arc4LV->setObjectName(QString::fromUtf8("Arc4LV"));
        Arc4LV->setGeometry(QRect(85, 131, 25, 31));
        Arc4LV->setMaxLength(2);
        Arc1upgrade = new QLabel(tab);
        Arc1upgrade->setObjectName(QString::fromUtf8("Arc1upgrade"));
        Arc1upgrade->setGeometry(QRect(185, 10, 31, 31));
        arcimg3 = new QLabel(tab);
        arcimg3->setObjectName(QString::fromUtf8("arcimg3"));
        arcimg3->setGeometry(QRect(20, 90, 31, 31));
        arcimg3->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC3.png")));
        Arc5LV = new QLineEdit(tab);
        Arc5LV->setObjectName(QString::fromUtf8("Arc5LV"));
        Arc5LV->setGeometry(QRect(85, 170, 25, 31));
        Arc5LV->setMaxLength(2);
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(170, 170, 16, 31));
        label_12->setFont(font1);
        Arc2LV = new QLineEdit(tab);
        Arc2LV->setObjectName(QString::fromUtf8("Arc2LV"));
        Arc2LV->setGeometry(QRect(85, 50, 25, 31));
        Arc2LV->setMaxLength(2);
        Arc3upgrade = new QLabel(tab);
        Arc3upgrade->setObjectName(QString::fromUtf8("Arc3upgrade"));
        Arc3upgrade->setGeometry(QRect(185, 90, 31, 31));
        ArcMode = new QComboBox(tab);
        ArcMode->addItem(QString());
        ArcMode->addItem(QString());
        ArcMode->addItem(QString());
        ArcMode->setObjectName(QString::fromUtf8("ArcMode"));
        ArcMode->setGeometry(QRect(110, 260, 91, 31));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(25, 260, 81, 31));
        ApTotal = new QLabel(tab);
        ApTotal->setObjectName(QString::fromUtf8("ApTotal"));
        ApTotal->setGeometry(QRect(120, 340, 61, 31));
        ArcTotal = new QLabel(tab);
        ArcTotal->setObjectName(QString::fromUtf8("ArcTotal"));
        ArcTotal->setGeometry(QRect(103, 300, 41, 31));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(23, 340, 91, 31));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(23, 300, 81, 31));
        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(220, -10, 31, 411));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        coinimg2 = new QLabel(tab);
        coinimg2->setObjectName(QString::fromUtf8("coinimg2"));
        coinimg2->setGeometry(QRect(380, 300, 31, 31));
        coinimg2->setPixmap(QPixmap(QString::fromUtf8(":/images/Coin2.png")));
        img235 = new QLabel(tab);
        img235->setObjectName(QString::fromUtf8("img235"));
        img235->setGeometry(QRect(260, 240, 41, 41));
        img235->setPixmap(QPixmap(QString::fromUtf8(":/images/235.png")));
        label_34 = new QLabel(tab);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(299, 240, 21, 41));
        img225 = new QLabel(tab);
        img225->setObjectName(QString::fromUtf8("img225"));
        img225->setGeometry(QRect(260, 148, 41, 41));
        img225->setPixmap(QPixmap(QString::fromUtf8(":/images/225.png")));
        d235 = new QLineEdit(tab);
        d235->setObjectName(QString::fromUtf8("d235"));
        d235->setGeometry(QRect(315, 244, 32, 31));
        d235->setAcceptDrops(false);
        d235->setInputMethodHints(Qt::ImhNone);
        d235->setMaxLength(3);
        label_30 = new QLabel(tab);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(299, 56, 21, 41));
        d225 = new QLineEdit(tab);
        d225->setObjectName(QString::fromUtf8("d225"));
        d225->setGeometry(QRect(315, 152, 32, 31));
        d225->setAcceptDrops(false);
        d225->setInputMethodHints(Qt::ImhNone);
        d225->setMaxLength(3);
        vipimg1_2 = new QLabel(tab);
        vipimg1_2->setObjectName(QString::fromUtf8("vipimg1_2"));
        vipimg1_2->setGeometry(QRect(385, 154, 33, 31));
        vipimg1_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Vip.png")));
        img200 = new QLabel(tab);
        img200->setObjectName(QString::fromUtf8("img200"));
        img200->setGeometry(QRect(260, 10, 41, 41));
        img200->setPixmap(QPixmap(QString::fromUtf8(":/images/200.png")));
        label_42 = new QLabel(tab);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(375, 150, 16, 41));
        label_42->setFont(font1);
        d230 = new QLineEdit(tab);
        d230->setObjectName(QString::fromUtf8("d230"));
        d230->setGeometry(QRect(315, 198, 32, 31));
        d230->setAcceptDrops(false);
        d230->setInputMethodHints(Qt::ImhNone);
        d230->setMaxLength(3);
        d220_vip = new QLineEdit(tab);
        d220_vip->setObjectName(QString::fromUtf8("d220_vip"));
        d220_vip->setGeometry(QRect(425, 110, 32, 31));
        d220_vip->setAcceptDrops(false);
        d220_vip->setInputMethodHints(Qt::ImhNone);
        d220_vip->setMaxLength(3);
        label_32 = new QLabel(tab);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(299, 148, 21, 41));
        img210 = new QLabel(tab);
        img210->setObjectName(QString::fromUtf8("img210"));
        img210->setGeometry(QRect(260, 56, 41, 41));
        img210->setPixmap(QPixmap(QString::fromUtf8(":/images/210.png")));
        label_37 = new QLabel(tab);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(270, 300, 31, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_37->setFont(font2);
        label_40 = new QLabel(tab);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(460, 104, 16, 41));
        label_40->setFont(font1);
        label_33 = new QLabel(tab);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(299, 194, 21, 41));
        d220 = new QLineEdit(tab);
        d220->setObjectName(QString::fromUtf8("d220"));
        d220->setGeometry(QRect(315, 106, 32, 31));
        d220->setAcceptDrops(false);
        d220->setInputMethodHints(Qt::ImhNone);
        d220->setMaxLength(3);
        label_41 = new QLabel(tab);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(460, 150, 16, 41));
        label_41->setFont(font1);
        label_36 = new QLabel(tab);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(349, 140, 21, 41));
        QFont font3;
        font3.setPointSize(9);
        label_36->setFont(font3);
        d210 = new QLineEdit(tab);
        d210->setObjectName(QString::fromUtf8("d210"));
        d210->setGeometry(QRect(315, 60, 32, 31));
        d210->setAcceptDrops(false);
        d210->setInputMethodHints(Qt::ImhNone);
        d210->setMaxLength(3);
        label_29 = new QLabel(tab);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(299, 10, 21, 41));
        img230 = new QLabel(tab);
        img230->setObjectName(QString::fromUtf8("img230"));
        img230->setGeometry(QRect(260, 194, 41, 41));
        img230->setPixmap(QPixmap(QString::fromUtf8(":/images/230.png")));
        label_31 = new QLabel(tab);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(299, 102, 21, 41));
        label_35 = new QLabel(tab);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(349, 93, 21, 41));
        label_35->setFont(font3);
        d225_vip = new QLineEdit(tab);
        d225_vip->setObjectName(QString::fromUtf8("d225_vip"));
        d225_vip->setGeometry(QRect(425, 156, 32, 31));
        d225_vip->setAcceptDrops(false);
        d225_vip->setInputMethodHints(Qt::ImhNone);
        d225_vip->setMaxLength(3);
        label_39 = new QLabel(tab);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(375, 104, 16, 41));
        label_39->setFont(font1);
        d200 = new QLineEdit(tab);
        d200->setObjectName(QString::fromUtf8("d200"));
        d200->setGeometry(QRect(315, 14, 32, 31));
        d200->setAcceptDrops(false);
        d200->setInputMethodHints(Qt::ImhNone);
        d200->setMaxLength(3);
        coinimg1 = new QLabel(tab);
        coinimg1->setObjectName(QString::fromUtf8("coinimg1"));
        coinimg1->setGeometry(QRect(300, 300, 31, 31));
        coinimg1->setPixmap(QPixmap(QString::fromUtf8(":/images/Coin1.png")));
        label_38 = new QLabel(tab);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(350, 300, 31, 31));
        label_38->setFont(font2);
        vipimg1 = new QLabel(tab);
        vipimg1->setObjectName(QString::fromUtf8("vipimg1"));
        vipimg1->setGeometry(QRect(385, 110, 33, 31));
        vipimg1->setPixmap(QPixmap(QString::fromUtf8(":/images/Vip.png")));
        img220 = new QLabel(tab);
        img220->setObjectName(QString::fromUtf8("img220"));
        img220->setGeometry(QRect(260, 102, 41, 41));
        img220->setPixmap(QPixmap(QString::fromUtf8(":/images/220.png")));
        vipSwitch = new QCheckBox(tab);
        vipSwitch->setObjectName(QString::fromUtf8("vipSwitch"));
        vipSwitch->setGeometry(QRect(495, 60, 161, 31));
        QFont font4;
        font4.setBold(false);
        font4.setWeight(50);
        vipSwitch->setFont(font4);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Vip.png"), QSize(), QIcon::Normal, QIcon::Off);
        vipSwitch->setIcon(icon1);
        vipSwitch->setIconSize(QSize(32, 32));
        vipSwitch->setTristate(false);
        label_43 = new QLabel(tab);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(495, 10, 81, 31));
        startDate = new QDateEdit(tab);
        startDate->setObjectName(QString::fromUtf8("startDate"));
        startDate->setGeometry(QRect(575, 110, 115, 31));
        startDate->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        startDate->setDateTime(QDateTime(QDate(2019, 5, 23), QTime(0, 0, 0)));
        startDate->setMaximumDateTime(QDateTime(QDate(2099, 12, 31), QTime(23, 59, 59)));
        startDate->setMaximumDate(QDate(2099, 12, 31));
        startDate->setMinimumDate(QDate(2019, 5, 23));
        startDate->setMinimumTime(QTime(0, 0, 0));
        startDate->setCalendarPopup(true);
        startDate->setDate(QDate(2019, 5, 23));
        label_28 = new QLabel(tab);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(495, 110, 81, 31));
        targetDate = new QDateEdit(tab);
        targetDate->setObjectName(QString::fromUtf8("targetDate"));
        targetDate->setGeometry(QRect(575, 160, 97, 31));
        targetDate->setWrapping(false);
        targetDate->setFrame(true);
        targetDate->setReadOnly(true);
        targetDate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        targetDate->setDateTime(QDateTime(QDate(9999, 12, 31), QTime(0, 0, 0)));
        targetDate->setMaximumDateTime(QDateTime(QDate(9999, 12, 31), QTime(23, 59, 59)));
        targetDate->setMaximumDate(QDate(9999, 12, 31));
        targetDate->setMinimumDate(QDate(2019, 3, 1));
        targetDate->setMinimumTime(QTime(0, 0, 0));
        targetDate->setCalendarPopup(false);
        targetDate->setDate(QDate(9999, 12, 31));
        label_45 = new QLabel(tab);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(495, 160, 81, 31));
        targetDays = new QLabel(tab);
        targetDays->setObjectName(QString::fromUtf8("targetDays"));
        targetDays->setGeometry(QRect(610, 210, 51, 31));
        QFont font5;
        font5.setUnderline(false);
        targetDays->setFont(font5);
        label_44 = new QLabel(tab);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(495, 210, 111, 31));
        targetArc = new QSpinBox(tab);
        targetArc->setObjectName(QString::fromUtf8("targetArc"));
        targetArc->setGeometry(QRect(580, 10, 61, 31));
        targetArc->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        targetArc->setMinimum(0);
        targetArc->setMaximum(1320);
        targetArc->setValue(0);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 291, 131));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(15, 40, 21, 31));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(100, 40, 31, 31));
        label_17->setFont(font1);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(135, 40, 21, 31));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(75, 84, 41, 41));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/images/meso_gold.png")));
        label_19->setScaledContents(true);
        cost = new QLabel(groupBox);
        cost->setObjectName(QString::fromUtf8("cost"));
        cost->setGeometry(QRect(120, 90, 91, 31));
        QFont font6;
        font6.setUnderline(true);
        cost->setFont(font6);
        label_51 = new QLabel(groupBox);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(105, 90, 21, 31));
        ArcLV_from = new QSpinBox(groupBox);
        ArcLV_from->setObjectName(QString::fromUtf8("ArcLV_from"));
        ArcLV_from->setGeometry(QRect(40, 40, 42, 31));
        ArcLV_from->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        ArcLV_from->setMinimum(1);
        ArcLV_from->setMaximum(19);
        ArcLV_from->setValue(1);
        ArcLV_to = new QSpinBox(groupBox);
        ArcLV_to->setObjectName(QString::fromUtf8("ArcLV_to"));
        ArcLV_to->setGeometry(QRect(161, 40, 42, 31));
        ArcLV_to->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        ArcLV_to->setMinimum(2);
        ArcLV_to->setMaximum(20);
        ArcLV_to->setValue(2);
        label_53 = new QLabel(groupBox);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(15, 90, 71, 31));
        label_54 = new QLabel(groupBox);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(212, 95, 21, 21));
        label_54->setPixmap(QPixmap(QString::fromUtf8(":/images/meso.png")));
        label_54->setScaledContents(true);
        line_5 = new QFrame(groupBox);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 70, 290, 31));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 170, 291, 171));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(15, 40, 41, 31));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(15, 80, 41, 31));
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(150, 40, 51, 31));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(150, 80, 81, 31));
        damage = new QLabel(groupBox_2);
        damage->setObjectName(QString::fromUtf8("damage"));
        damage->setGeometry(QRect(200, 40, 31, 31));
        damage->setFont(font5);
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(230, 40, 16, 31));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(260, 80, 16, 31));
        hit_damage = new QLabel(groupBox_2);
        hit_damage->setObjectName(QString::fromUtf8("hit_damage"));
        hit_damage->setGeometry(QRect(230, 80, 31, 31));
        hit_damage->setFont(font5);
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(15, 130, 181, 31));
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(1, 109, 290, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        damage150 = new QLabel(groupBox_2);
        damage150->setObjectName(QString::fromUtf8("damage150"));
        damage150->setGeometry(QRect(198, 130, 71, 31));
        damage150->setFont(font5);
        ArcDamage_x = new QSpinBox(groupBox_2);
        ArcDamage_x->setObjectName(QString::fromUtf8("ArcDamage_x"));
        ArcDamage_x->setGeometry(QRect(65, 40, 61, 31));
        ArcDamage_x->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        ArcDamage_x->setMinimum(0);
        ArcDamage_x->setMaximum(1320);
        ArcDamage_x->setValue(0);
        ArcDamage_y = new QSpinBox(groupBox_2);
        ArcDamage_y->setObjectName(QString::fromUtf8("ArcDamage_y"));
        ArcDamage_y->setGeometry(QRect(65, 80, 61, 31));
        ArcDamage_y->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        ArcDamage_y->setMinimum(30);
        ArcDamage_y->setMaximum(1320);
        ArcDamage_y->setValue(30);
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(330, 20, 331, 171));
        label_46 = new QLabel(groupBox_3);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(15, 40, 81, 31));
        label_47 = new QLabel(groupBox_3);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(15, 80, 61, 31));
        label_48 = new QLabel(groupBox_3);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(155, 60, 31, 31));
        label_48->setFont(font1);
        label_49 = new QLabel(groupBox_3);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(195, 80, 61, 31));
        label_50 = new QLabel(groupBox_3);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(195, 40, 81, 31));
        transLV_after = new QLabel(groupBox_3);
        transLV_after->setObjectName(QString::fromUtf8("transLV_after"));
        transLV_after->setGeometry(QRect(275, 40, 21, 31));
        transLV_after->setFont(font5);
        transArc_after = new QLabel(groupBox_3);
        transArc_after->setObjectName(QString::fromUtf8("transArc_after"));
        transArc_after->setGeometry(QRect(260, 80, 31, 31));
        transArc_after->setFont(font5);
        transLV_before = new QSpinBox(groupBox_3);
        transLV_before->setObjectName(QString::fromUtf8("transLV_before"));
        transLV_before->setGeometry(QRect(95, 40, 42, 31));
        transLV_before->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        transLV_before->setMinimum(1);
        transLV_before->setMaximum(20);
        transLV_before->setValue(1);
        transArc_before = new QSpinBox(groupBox_3);
        transArc_before->setObjectName(QString::fromUtf8("transArc_before"));
        transArc_before->setGeometry(QRect(85, 80, 51, 31));
        transArc_before->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        transArc_before->setMinimum(0);
        transArc_before->setMaximum(372);
        transArc_before->setValue(0);
        line_4 = new QFrame(groupBox_3);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 110, 331, 31));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_52 = new QLabel(groupBox_3);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(15, 130, 71, 31));
        transCost = new QLabel(groupBox_3);
        transCost->setObjectName(QString::fromUtf8("transCost"));
        transCost->setGeometry(QRect(120, 130, 91, 31));
        transCost->setFont(font6);
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(210, 136, 21, 21));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/images/meso.png")));
        label_20->setScaledContents(true);
        label_55 = new QLabel(groupBox_3);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(105, 130, 21, 31));
        label_56 = new QLabel(groupBox_3);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(75, 124, 41, 41));
        label_56->setPixmap(QPixmap(QString::fromUtf8(":/images/meso_gold.png")));
        label_56->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        background = new QTextEdit(MainUI);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-30, -10, 801, 41));
        background->setAcceptDrops(false);
        background->setReadOnly(true);
        background->raise();
        tabWidget->raise();

        retranslateUi(MainUI);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainUI);
    } // setupUi

    void retranslateUi(QWidget *MainUI)
    {
        MainUI->setWindowTitle(QApplication::translate("MainUI", "\346\226\260\346\245\223\344\271\213\350\260\267ARC\350\250\210\347\256\227\346\251\237  v2.0", nullptr));
        label_9->setText(QApplication::translate("MainUI", "/", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc6upgrade->setToolTip(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        Arc6upgrade->setText(QApplication::translate("MainUI", "?", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc1LV->setToolTip(QApplication::translate("MainUI", "0~20", nullptr));
#endif // QT_NO_TOOLTIP
        Arc1LV->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc4upgrade->setToolTip(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        Arc4upgrade->setText(QApplication::translate("MainUI", "?", nullptr));
        label_13->setText(QApplication::translate("MainUI", "/", nullptr));
#ifndef QT_NO_TOOLTIP
        arcimg2->setToolTip(QApplication::translate("MainUI", "\345\225\276\345\225\276\345\263\266", nullptr));
#endif // QT_NO_TOOLTIP
        arcimg2->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc6current->setToolTip(QApplication::translate("MainUI", "0~372", nullptr));
#endif // QT_NO_TOOLTIP
        Arc6current->setText(QString());
        label_6->setText(QApplication::translate("MainUI", "Lv.", nullptr));
        label_8->setText(QApplication::translate("MainUI", "/", nullptr));
        label_11->setText(QApplication::translate("MainUI", "/", nullptr));
#ifndef QT_NO_TOOLTIP
        arcimg5->setToolTip(QApplication::translate("MainUI", "\351\255\224\350\217\210\346\226\257", nullptr));
#endif // QT_NO_TOOLTIP
        arcimg5->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc1current->setToolTip(QApplication::translate("MainUI", "0~372", nullptr));
#endif // QT_NO_TOOLTIP
        Arc1current->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc2current->setToolTip(QApplication::translate("MainUI", "0~372", nullptr));
#endif // QT_NO_TOOLTIP
        Arc2current->setText(QString());
#ifndef QT_NO_TOOLTIP
        arcimg1->setToolTip(QApplication::translate("MainUI", "\346\266\210\351\200\235\347\232\204\346\227\205\351\200\224", nullptr));
#endif // QT_NO_TOOLTIP
        arcimg1->setText(QString());
#ifndef QT_NO_TOOLTIP
        arcimg6->setToolTip(QApplication::translate("MainUI", "\350\211\276\346\226\257\344\275\251\346\213\211", nullptr));
#endif // QT_NO_TOOLTIP
        arcimg6->setText(QString());
#ifndef QT_NO_TOOLTIP
        arcimg4->setToolTip(QApplication::translate("MainUI", "\351\230\277\347\210\276\345\215\241\345\250\234", nullptr));
#endif // QT_NO_TOOLTIP
        arcimg4->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc3current->setToolTip(QApplication::translate("MainUI", "0~372", nullptr));
#endif // QT_NO_TOOLTIP
        Arc3current->setText(QString());
        label_3->setText(QApplication::translate("MainUI", "Lv.", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc2upgrade->setToolTip(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        Arc2upgrade->setText(QApplication::translate("MainUI", "?", nullptr));
        label_5->setText(QApplication::translate("MainUI", "Lv.", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc5upgrade->setToolTip(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        Arc5upgrade->setText(QApplication::translate("MainUI", "?", nullptr));
        label->setText(QApplication::translate("MainUI", "Lv.", nullptr));
        label_2->setText(QApplication::translate("MainUI", "Lv.", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc5current->setToolTip(QApplication::translate("MainUI", "0~372", nullptr));
#endif // QT_NO_TOOLTIP
        Arc5current->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc4current->setToolTip(QApplication::translate("MainUI", "0~372", nullptr));
#endif // QT_NO_TOOLTIP
        Arc4current->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc3LV->setToolTip(QApplication::translate("MainUI", "0~20", nullptr));
#endif // QT_NO_TOOLTIP
        Arc3LV->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc6LV->setToolTip(QApplication::translate("MainUI", "0~20", nullptr));
#endif // QT_NO_TOOLTIP
        Arc6LV->setText(QString());
        label_4->setText(QApplication::translate("MainUI", "Lv.", nullptr));
        label_10->setText(QApplication::translate("MainUI", "/", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc4LV->setToolTip(QApplication::translate("MainUI", "0~20", nullptr));
#endif // QT_NO_TOOLTIP
        Arc4LV->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc1upgrade->setToolTip(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        Arc1upgrade->setText(QApplication::translate("MainUI", "?", nullptr));
#ifndef QT_NO_TOOLTIP
        arcimg3->setToolTip(QApplication::translate("MainUI", "\346\213\211\345\245\221\347\210\276\346\201\251", nullptr));
#endif // QT_NO_TOOLTIP
        arcimg3->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc5LV->setToolTip(QApplication::translate("MainUI", "0~20", nullptr));
#endif // QT_NO_TOOLTIP
        Arc5LV->setText(QString());
        label_12->setText(QApplication::translate("MainUI", "/", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc2LV->setToolTip(QApplication::translate("MainUI", "0~20", nullptr));
#endif // QT_NO_TOOLTIP
        Arc2LV->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc3upgrade->setToolTip(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        Arc3upgrade->setText(QApplication::translate("MainUI", "?", nullptr));
        ArcMode->setItemText(0, QApplication::translate("MainUI", "\344\270\200\350\210\254\350\201\267\346\245\255", nullptr));
        ArcMode->setItemText(1, QApplication::translate("MainUI", "\345\202\221\350\253\276", nullptr));
        ArcMode->setItemText(2, QApplication::translate("MainUI", "\346\203\241\345\276\251", nullptr));

#ifndef QT_NO_TOOLTIP
        ArcMode->setToolTip(QApplication::translate("MainUI", "\344\270\200\350\210\254\350\201\267\346\245\255(\344\270\273\345\261\254)\343\200\201\345\202\221\350\253\276(\344\270\211\345\261\254)\343\200\201\346\203\241\345\276\251(HP)", nullptr));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("MainUI", "\350\201\267\346\245\255\351\241\236\345\236\213\357\274\232", nullptr));
        ApTotal->setText(QApplication::translate("MainUI", "0", nullptr));
        ArcTotal->setText(QApplication::translate("MainUI", "0", nullptr));
        label_15->setText(QApplication::translate("MainUI", "\345\261\254\346\200\247\345\242\236\345\212\240\351\207\217\357\274\232", nullptr));
        label_14->setText(QApplication::translate("MainUI", "\347\233\256\345\211\215ARC\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        coinimg2->setToolTip(QApplication::translate("MainUI", "\346\257\2173\345\200\213\347\241\254\345\271\243\345\217\257\345\205\214\346\217\2331\345\200\213\351\230\277\347\210\276\345\215\241\345\250\234ARC", nullptr));
#endif // QT_NO_TOOLTIP
        coinimg2->setText(QString());
#ifndef QT_NO_TOOLTIP
        img235->setToolTip(QApplication::translate("MainUI", "\350\211\276\346\226\257\344\275\251\346\213\211", nullptr));
#endif // QT_NO_TOOLTIP
        img235->setText(QString());
        label_34->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        img225->setToolTip(QApplication::translate("MainUI", "\351\230\277\347\210\276\345\215\241\345\250\234", nullptr));
#endif // QT_NO_TOOLTIP
        img225->setText(QString());
#ifndef QT_NO_TOOLTIP
        d235->setToolTip(QApplication::translate("MainUI", "0~8", nullptr));
#endif // QT_NO_TOOLTIP
        d235->setText(QString());
        label_30->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        d225->setToolTip(QApplication::translate("MainUI", "0~30", nullptr));
#endif // QT_NO_TOOLTIP
        d225->setText(QString());
#ifndef QT_NO_TOOLTIP
        vipimg1_2->setToolTip(QApplication::translate("MainUI", "\351\253\230\347\264\232\346\234\215\345\213\231", nullptr));
#endif // QT_NO_TOOLTIP
        vipimg1_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        img200->setToolTip(QApplication::translate("MainUI", "\346\266\210\351\200\235\347\232\204\346\227\205\351\200\224", nullptr));
#endif // QT_NO_TOOLTIP
        img200->setText(QString());
        label_42->setText(QApplication::translate("MainUI", "(", nullptr));
#ifndef QT_NO_TOOLTIP
        d230->setToolTip(QApplication::translate("MainUI", "0~8", nullptr));
#endif // QT_NO_TOOLTIP
        d230->setText(QString());
#ifndef QT_NO_TOOLTIP
        d220_vip->setToolTip(QApplication::translate("MainUI", "0~500", nullptr));
#endif // QT_NO_TOOLTIP
        d220_vip->setText(QString());
        label_32->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        img210->setToolTip(QApplication::translate("MainUI", "\345\225\276\345\225\276\345\263\266", nullptr));
#endif // QT_NO_TOOLTIP
        img210->setText(QString());
        label_37->setText(QApplication::translate("MainUI", "*1\357\274\232", nullptr));
        label_40->setText(QApplication::translate("MainUI", ")", nullptr));
        label_33->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        d220->setToolTip(QApplication::translate("MainUI", "0~500", nullptr));
#endif // QT_NO_TOOLTIP
        d220->setText(QString());
        label_41->setText(QApplication::translate("MainUI", ")", nullptr));
        label_36->setText(QApplication::translate("MainUI", "*2", nullptr));
#ifndef QT_NO_TOOLTIP
        d210->setToolTip(QApplication::translate("MainUI", "0~15", nullptr));
#endif // QT_NO_TOOLTIP
        d210->setText(QString());
        label_29->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        img230->setToolTip(QApplication::translate("MainUI", "\351\255\224\350\217\210\346\226\257", nullptr));
#endif // QT_NO_TOOLTIP
        img230->setText(QString());
        label_31->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
        label_35->setText(QApplication::translate("MainUI", "*1", nullptr));
#ifndef QT_NO_TOOLTIP
        d225_vip->setToolTip(QApplication::translate("MainUI", "0~40", nullptr));
#endif // QT_NO_TOOLTIP
        d225_vip->setText(QString());
        label_39->setText(QApplication::translate("MainUI", "(", nullptr));
#ifndef QT_NO_TOOLTIP
        d200->setToolTip(QApplication::translate("MainUI", "0~8", nullptr));
#endif // QT_NO_TOOLTIP
        d200->setText(QString());
#ifndef QT_NO_TOOLTIP
        coinimg1->setToolTip(QApplication::translate("MainUI", "\346\257\21730\345\200\213\347\241\254\345\271\243\345\217\257\345\205\214\346\217\2331\345\200\213\346\213\211\345\245\221\347\210\276\346\201\251ARC", nullptr));
#endif // QT_NO_TOOLTIP
        coinimg1->setText(QString());
        label_38->setText(QApplication::translate("MainUI", "*2\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        vipimg1->setToolTip(QApplication::translate("MainUI", "\351\253\230\347\264\232\346\234\215\345\213\231", nullptr));
#endif // QT_NO_TOOLTIP
        vipimg1->setText(QString());
#ifndef QT_NO_TOOLTIP
        img220->setToolTip(QApplication::translate("MainUI", "\346\213\211\345\245\221\347\210\276\346\201\251", nullptr));
#endif // QT_NO_TOOLTIP
        img220->setText(QString());
        vipSwitch->setText(QApplication::translate("MainUI", "\344\275\277\347\224\250\351\253\230\347\264\232\346\234\215\345\213\231", nullptr));
        label_43->setText(QApplication::translate("MainUI", "\347\233\256\346\250\231ARC\357\274\232", nullptr));
        startDate->setDisplayFormat(QApplication::translate("MainUI", "yyyy/MM/dd", nullptr));
        label_28->setText(QApplication::translate("MainUI", "\350\265\267\345\247\213\346\227\245\346\234\237\357\274\232", nullptr));
        targetDate->setDisplayFormat(QApplication::translate("MainUI", "yyyy/MM/dd", nullptr));
        label_45->setText(QApplication::translate("MainUI", "\351\201\224\346\210\220\346\227\245\346\234\237\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        targetDays->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        targetDays->setText(QApplication::translate("MainUI", "0", nullptr));
        label_44->setText(QApplication::translate("MainUI", "\351\201\224\346\210\220\346\211\200\351\234\200\345\244\251\346\225\270\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainUI", "ARC\351\201\224\346\210\220\346\227\245\350\250\210\347\256\227", nullptr));
        groupBox->setTitle(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\245\223\345\271\243", nullptr));
        label_16->setText(QApplication::translate("MainUI", "Lv.", nullptr));
        label_17->setText(QApplication::translate("MainUI", "\342\206\222", nullptr));
        label_18->setText(QApplication::translate("MainUI", "Lv.", nullptr));
        label_19->setText(QString());
        cost->setText(QApplication::translate("MainUI", "19040000", nullptr));
        label_51->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
        label_53->setText(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200", nullptr));
        label_54->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainUI", "\350\242\253\346\223\212\345\202\267\345\256\263 / \345\242\236\345\202\267", nullptr));
        label_21->setText(QApplication::translate("MainUI", "\350\207\252\350\272\253\357\274\232", nullptr));
        label_22->setText(QApplication::translate("MainUI", "\346\200\252\347\211\251\357\274\232", nullptr));
        label_23->setText(QApplication::translate("MainUI", "\347\265\202\345\202\267\357\274\232", nullptr));
        label_24->setText(QApplication::translate("MainUI", "\350\242\253\346\223\212\345\202\267\345\256\263\357\274\232", nullptr));
        damage->setText(QApplication::translate("MainUI", "10", nullptr));
        label_25->setText(QApplication::translate("MainUI", "%", nullptr));
        label_26->setText(QApplication::translate("MainUI", "%", nullptr));
        hit_damage->setText(QApplication::translate("MainUI", "280", nullptr));
        label_27->setText(QApplication::translate("MainUI", "\351\201\224\345\210\2601.5\345\200\215\345\242\236\345\202\267ARC\351\234\200\346\261\202\357\274\232", nullptr));
        damage150->setText(QApplication::translate("MainUI", "50", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainUI", "\347\247\230\346\263\225\350\247\270\345\252\222", nullptr));
        label_46->setText(QApplication::translate("MainUI", "\346\210\220\351\225\267\347\255\211\347\264\232\357\274\232", nullptr));
        label_47->setText(QApplication::translate("MainUI", "\346\210\220\351\225\267\345\200\274\357\274\232", nullptr));
        label_48->setText(QApplication::translate("MainUI", "\342\206\222", nullptr));
        label_49->setText(QApplication::translate("MainUI", "\346\210\220\351\225\267\345\200\274\357\274\232", nullptr));
        label_50->setText(QApplication::translate("MainUI", "\346\210\220\351\225\267\347\255\211\347\264\232\357\274\232", nullptr));
        transLV_after->setText(QApplication::translate("MainUI", "1", nullptr));
        transArc_after->setText(QApplication::translate("MainUI", "0", nullptr));
        label_52->setText(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200", nullptr));
        transCost->setText(QApplication::translate("MainUI", "19040000", nullptr));
        label_20->setText(QString());
        label_55->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
        label_56->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainUI", "\345\205\266\344\273\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainUI: public Ui_MainUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
