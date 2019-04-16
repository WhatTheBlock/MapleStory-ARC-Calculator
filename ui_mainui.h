/********************************************************************************
** Form generated from reading UI file 'mainui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainUI
{
public:
    QLabel *arcimg1;
    QTextEdit *background;
    QLabel *arcimg2;
    QLabel *arcimg3;
    QLabel *arcimg6;
    QLabel *arcimg5;
    QLabel *arcimg4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *Arc1LV;
    QLineEdit *Arc2LV;
    QLineEdit *Arc3LV;
    QLineEdit *Arc6LV;
    QLineEdit *Arc5LV;
    QLineEdit *Arc4LV;
    QLabel *label_7;
    QComboBox *ArcMode;
    QLineEdit *Arc1current;
    QLabel *label_8;
    QLabel *Arc1upgrade;
    QLabel *Arc2upgrade;
    QLineEdit *Arc2current;
    QLabel *label_9;
    QLineEdit *Arc3current;
    QLabel *label_10;
    QLabel *Arc3upgrade;
    QLineEdit *Arc4current;
    QLabel *label_11;
    QLabel *Arc4upgrade;
    QLineEdit *Arc5current;
    QLabel *Arc5upgrade;
    QLineEdit *Arc6current;
    QLabel *Arc6upgrade;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *ArcTotal;
    QLabel *label_15;
    QLabel *ApTotal;
    QFrame *line;
    QGroupBox *groupBox;
    QLabel *label_16;
    QLineEdit *ArcLV_from;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *ArcLV_to;
    QLabel *label_19;
    QLabel *cost;
    QLabel *label_20;
    QGroupBox *groupBox_2;
    QLabel *label_21;
    QLineEdit *ArcDamage_x;
    QLabel *label_22;
    QLineEdit *ArcDamage_y;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *damage;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *hit_damage;
    QFrame *line_2;
    QLabel *label_27;
    QFrame *line_3;
    QLabel *damage150;
    QFrame *line_4;
    QFrame *line_5;
    QDateEdit *startDate;
    QLabel *label_28;
    QLabel *img200;
    QLineEdit *d200;
    QLabel *label_29;
    QLineEdit *d210;
    QLabel *label_30;
    QLabel *img210;
    QLineEdit *d220;
    QLabel *img220;
    QLabel *label_31;
    QLineEdit *d225;
    QLabel *img225;
    QLabel *label_32;
    QLineEdit *d230;
    QLabel *label_33;
    QLabel *img230;
    QLineEdit *d235;
    QLabel *label_34;
    QLabel *img235;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *coinimg1;
    QLabel *label_38;
    QLabel *coinimg2;
    QLabel *label_39;
    QLabel *vipimg1;
    QLineEdit *d220_vip;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *vipimg1_2;
    QLineEdit *d225_vip;
    QLabel *label_42;
    QLabel *label_43;
    QLineEdit *targetArc;
    QLabel *label_44;
    QLabel *label_45;
    QDateEdit *targetDate;
    QLabel *targetDays;
    QCheckBox *vipSwitch;

    void setupUi(QWidget *MainUI)
    {
        if (MainUI->objectName().isEmpty())
            MainUI->setObjectName(QString::fromUtf8("MainUI"));
        MainUI->resize(768, 387);
        MainUI->setMinimumSize(QSize(768, 387));
        MainUI->setMaximumSize(QSize(768, 387));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(12);
        MainUI->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ARC1.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainUI->setWindowIcon(icon);
        MainUI->setWindowOpacity(0.970000000000000);
        MainUI->setLayoutDirection(Qt::LeftToRight);
        arcimg1 = new QLabel(MainUI);
        arcimg1->setObjectName(QString::fromUtf8("arcimg1"));
        arcimg1->setGeometry(QRect(15, 60, 31, 31));
        arcimg1->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC1.png")));
        background = new QTextEdit(MainUI);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-10, 0, 781, 391));
        background->setAcceptDrops(false);
        background->setReadOnly(true);
        background->setAcceptRichText(false);
        background->setTextInteractionFlags(Qt::NoTextInteraction);
        arcimg2 = new QLabel(MainUI);
        arcimg2->setObjectName(QString::fromUtf8("arcimg2"));
        arcimg2->setGeometry(QRect(15, 100, 31, 31));
        arcimg2->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC2.png")));
        arcimg3 = new QLabel(MainUI);
        arcimg3->setObjectName(QString::fromUtf8("arcimg3"));
        arcimg3->setGeometry(QRect(15, 140, 31, 31));
        arcimg3->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC3.png")));
        arcimg6 = new QLabel(MainUI);
        arcimg6->setObjectName(QString::fromUtf8("arcimg6"));
        arcimg6->setGeometry(QRect(15, 260, 31, 31));
        arcimg6->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC6.png")));
        arcimg5 = new QLabel(MainUI);
        arcimg5->setObjectName(QString::fromUtf8("arcimg5"));
        arcimg5->setGeometry(QRect(15, 220, 31, 31));
        arcimg5->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC5.png")));
        arcimg4 = new QLabel(MainUI);
        arcimg4->setObjectName(QString::fromUtf8("arcimg4"));
        arcimg4->setGeometry(QRect(15, 180, 31, 31));
        arcimg4->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC4.png")));
        label = new QLabel(MainUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(55, 61, 21, 31));
        label_2 = new QLabel(MainUI);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(55, 100, 21, 31));
        label_3 = new QLabel(MainUI);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(55, 140, 21, 31));
        label_4 = new QLabel(MainUI);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(55, 260, 21, 31));
        label_5 = new QLabel(MainUI);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(55, 181, 21, 31));
        label_6 = new QLabel(MainUI);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(55, 220, 21, 31));
        Arc1LV = new QLineEdit(MainUI);
        Arc1LV->setObjectName(QString::fromUtf8("Arc1LV"));
        Arc1LV->setGeometry(QRect(80, 61, 25, 31));
        Arc1LV->setAcceptDrops(false);
        Arc1LV->setInputMethodHints(Qt::ImhNone);
        Arc1LV->setMaxLength(2);
        Arc2LV = new QLineEdit(MainUI);
        Arc2LV->setObjectName(QString::fromUtf8("Arc2LV"));
        Arc2LV->setGeometry(QRect(80, 100, 25, 31));
        Arc2LV->setMaxLength(2);
        Arc3LV = new QLineEdit(MainUI);
        Arc3LV->setObjectName(QString::fromUtf8("Arc3LV"));
        Arc3LV->setGeometry(QRect(80, 140, 25, 31));
        Arc3LV->setMaxLength(2);
        Arc6LV = new QLineEdit(MainUI);
        Arc6LV->setObjectName(QString::fromUtf8("Arc6LV"));
        Arc6LV->setGeometry(QRect(80, 260, 25, 31));
        Arc6LV->setMaxLength(2);
        Arc5LV = new QLineEdit(MainUI);
        Arc5LV->setObjectName(QString::fromUtf8("Arc5LV"));
        Arc5LV->setGeometry(QRect(80, 220, 25, 31));
        Arc5LV->setMaxLength(2);
        Arc4LV = new QLineEdit(MainUI);
        Arc4LV->setObjectName(QString::fromUtf8("Arc4LV"));
        Arc4LV->setGeometry(QRect(80, 181, 25, 31));
        Arc4LV->setMaxLength(2);
        label_7 = new QLabel(MainUI);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(15, 20, 81, 31));
        ArcMode = new QComboBox(MainUI);
        ArcMode->addItem(QString());
        ArcMode->addItem(QString());
        ArcMode->addItem(QString());
        ArcMode->setObjectName(QString::fromUtf8("ArcMode"));
        ArcMode->setGeometry(QRect(100, 20, 91, 31));
        Arc1current = new QLineEdit(MainUI);
        Arc1current->setObjectName(QString::fromUtf8("Arc1current"));
        Arc1current->setGeometry(QRect(125, 60, 34, 31));
        Arc1current->setMaxLength(3);
        label_8 = new QLabel(MainUI);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(165, 60, 16, 31));
        QFont font1;
        font1.setPointSize(16);
        label_8->setFont(font1);
        Arc1upgrade = new QLabel(MainUI);
        Arc1upgrade->setObjectName(QString::fromUtf8("Arc1upgrade"));
        Arc1upgrade->setGeometry(QRect(180, 60, 31, 31));
        Arc2upgrade = new QLabel(MainUI);
        Arc2upgrade->setObjectName(QString::fromUtf8("Arc2upgrade"));
        Arc2upgrade->setGeometry(QRect(180, 100, 31, 31));
        Arc2current = new QLineEdit(MainUI);
        Arc2current->setObjectName(QString::fromUtf8("Arc2current"));
        Arc2current->setGeometry(QRect(125, 100, 34, 31));
        Arc2current->setMaxLength(3);
        label_9 = new QLabel(MainUI);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(165, 100, 16, 31));
        label_9->setFont(font1);
        Arc3current = new QLineEdit(MainUI);
        Arc3current->setObjectName(QString::fromUtf8("Arc3current"));
        Arc3current->setGeometry(QRect(125, 140, 34, 31));
        Arc3current->setMaxLength(3);
        label_10 = new QLabel(MainUI);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(165, 140, 16, 31));
        label_10->setFont(font1);
        Arc3upgrade = new QLabel(MainUI);
        Arc3upgrade->setObjectName(QString::fromUtf8("Arc3upgrade"));
        Arc3upgrade->setGeometry(QRect(180, 140, 31, 31));
        Arc4current = new QLineEdit(MainUI);
        Arc4current->setObjectName(QString::fromUtf8("Arc4current"));
        Arc4current->setGeometry(QRect(125, 180, 34, 31));
        Arc4current->setMaxLength(3);
        label_11 = new QLabel(MainUI);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(165, 180, 16, 31));
        label_11->setFont(font1);
        Arc4upgrade = new QLabel(MainUI);
        Arc4upgrade->setObjectName(QString::fromUtf8("Arc4upgrade"));
        Arc4upgrade->setGeometry(QRect(180, 180, 31, 31));
        Arc5current = new QLineEdit(MainUI);
        Arc5current->setObjectName(QString::fromUtf8("Arc5current"));
        Arc5current->setGeometry(QRect(125, 220, 34, 31));
        Arc5current->setMaxLength(3);
        Arc5upgrade = new QLabel(MainUI);
        Arc5upgrade->setObjectName(QString::fromUtf8("Arc5upgrade"));
        Arc5upgrade->setGeometry(QRect(180, 220, 31, 31));
        Arc6current = new QLineEdit(MainUI);
        Arc6current->setObjectName(QString::fromUtf8("Arc6current"));
        Arc6current->setGeometry(QRect(125, 260, 34, 31));
        Arc6current->setMaxLength(3);
        Arc6upgrade = new QLabel(MainUI);
        Arc6upgrade->setObjectName(QString::fromUtf8("Arc6upgrade"));
        Arc6upgrade->setGeometry(QRect(180, 260, 31, 31));
        label_12 = new QLabel(MainUI);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(165, 220, 16, 31));
        label_12->setFont(font1);
        label_13 = new QLabel(MainUI);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(165, 260, 16, 31));
        label_13->setFont(font1);
        label_14 = new QLabel(MainUI);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(15, 300, 81, 31));
        ArcTotal = new QLabel(MainUI);
        ArcTotal->setObjectName(QString::fromUtf8("ArcTotal"));
        ArcTotal->setGeometry(QRect(95, 300, 41, 31));
        label_15 = new QLabel(MainUI);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(15, 340, 91, 31));
        ApTotal = new QLabel(MainUI);
        ApTotal->setObjectName(QString::fromUtf8("ApTotal"));
        ApTotal->setGeometry(QRect(112, 340, 61, 31));
        line = new QFrame(MainUI);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(220, 0, 20, 391));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(MainUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(480, 130, 271, 71));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 30, 21, 31));
        ArcLV_from = new QLineEdit(groupBox);
        ArcLV_from->setObjectName(QString::fromUtf8("ArcLV_from"));
        ArcLV_from->setGeometry(QRect(35, 30, 25, 31));
        ArcLV_from->setAcceptDrops(false);
        ArcLV_from->setInputMethodHints(Qt::ImhNone);
        ArcLV_from->setMaxLength(2);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(65, 30, 31, 31));
        label_17->setFont(font1);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(90, 30, 21, 31));
        ArcLV_to = new QLineEdit(groupBox);
        ArcLV_to->setObjectName(QString::fromUtf8("ArcLV_to"));
        ArcLV_to->setGeometry(QRect(115, 30, 25, 31));
        ArcLV_to->setAcceptDrops(false);
        ArcLV_to->setInputMethodHints(Qt::ImhNone);
        ArcLV_to->setMaxLength(2);
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(160, 30, 21, 31));
        cost = new QLabel(groupBox);
        cost->setObjectName(QString::fromUtf8("cost"));
        cost->setGeometry(QRect(185, 30, 57, 31));
        QFont font2;
        font2.setUnderline(true);
        cost->setFont(font2);
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(242, 30, 21, 31));
        groupBox_2 = new QGroupBox(MainUI);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(480, 210, 271, 161));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 30, 41, 31));
        ArcDamage_x = new QLineEdit(groupBox_2);
        ArcDamage_x->setObjectName(QString::fromUtf8("ArcDamage_x"));
        ArcDamage_x->setGeometry(QRect(60, 30, 41, 31));
        ArcDamage_x->setAcceptDrops(false);
        ArcDamage_x->setInputMethodHints(Qt::ImhNone);
        ArcDamage_x->setMaxLength(4);
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 70, 41, 31));
        ArcDamage_y = new QLineEdit(groupBox_2);
        ArcDamage_y->setObjectName(QString::fromUtf8("ArcDamage_y"));
        ArcDamage_y->setGeometry(QRect(60, 70, 41, 31));
        ArcDamage_y->setAcceptDrops(false);
        ArcDamage_y->setInputMethodHints(Qt::ImhNone);
        ArcDamage_y->setMaxLength(4);
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(130, 30, 51, 31));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(130, 70, 81, 31));
        damage = new QLabel(groupBox_2);
        damage->setObjectName(QString::fromUtf8("damage"));
        damage->setGeometry(QRect(180, 30, 31, 31));
        QFont font3;
        font3.setUnderline(false);
        damage->setFont(font3);
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(210, 30, 16, 31));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(240, 70, 16, 31));
        hit_damage = new QLabel(groupBox_2);
        hit_damage->setObjectName(QString::fromUtf8("hit_damage"));
        hit_damage->setGeometry(QRect(210, 70, 31, 31));
        hit_damage->setFont(font3);
        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(107, 24, 20, 89));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 120, 181, 31));
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 99, 271, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        damage150 = new QLabel(groupBox_2);
        damage150->setObjectName(QString::fromUtf8("damage150"));
        damage150->setGeometry(QRect(193, 120, 41, 31));
        damage150->setFont(font3);
        line_4 = new QFrame(MainUI);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(450, 120, 20, 271));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(MainUI);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(460, 113, 311, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        startDate = new QDateEdit(MainUI);
        startDate->setObjectName(QString::fromUtf8("startDate"));
        startDate->setGeometry(QRect(330, 20, 115, 31));
        startDate->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        startDate->setDateTime(QDateTime(QDate(2019, 3, 31), QTime(0, 0, 0)));
        startDate->setMaximumDateTime(QDateTime(QDate(2099, 12, 31), QTime(23, 59, 59)));
        startDate->setMaximumDate(QDate(2099, 12, 31));
        startDate->setMinimumDate(QDate(2019, 3, 1));
        startDate->setMinimumTime(QTime(0, 0, 0));
        startDate->setCalendarPopup(true);
        startDate->setDate(QDate(2019, 3, 31));
        label_28 = new QLabel(MainUI);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(250, 20, 81, 31));
        img200 = new QLabel(MainUI);
        img200->setObjectName(QString::fromUtf8("img200"));
        img200->setGeometry(QRect(250, 60, 41, 41));
        img200->setPixmap(QPixmap(QString::fromUtf8(":/images/200.png")));
        d200 = new QLineEdit(MainUI);
        d200->setObjectName(QString::fromUtf8("d200"));
        d200->setGeometry(QRect(305, 64, 32, 31));
        d200->setAcceptDrops(false);
        d200->setInputMethodHints(Qt::ImhNone);
        d200->setMaxLength(3);
        label_29 = new QLabel(MainUI);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(289, 60, 21, 41));
        d210 = new QLineEdit(MainUI);
        d210->setObjectName(QString::fromUtf8("d210"));
        d210->setGeometry(QRect(305, 110, 32, 31));
        d210->setAcceptDrops(false);
        d210->setInputMethodHints(Qt::ImhNone);
        d210->setMaxLength(3);
        label_30 = new QLabel(MainUI);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(289, 106, 21, 41));
        img210 = new QLabel(MainUI);
        img210->setObjectName(QString::fromUtf8("img210"));
        img210->setGeometry(QRect(250, 106, 41, 41));
        img210->setPixmap(QPixmap(QString::fromUtf8(":/images/210.png")));
        d220 = new QLineEdit(MainUI);
        d220->setObjectName(QString::fromUtf8("d220"));
        d220->setGeometry(QRect(305, 156, 32, 31));
        d220->setAcceptDrops(false);
        d220->setInputMethodHints(Qt::ImhNone);
        d220->setMaxLength(3);
        img220 = new QLabel(MainUI);
        img220->setObjectName(QString::fromUtf8("img220"));
        img220->setGeometry(QRect(250, 152, 41, 41));
        img220->setPixmap(QPixmap(QString::fromUtf8(":/images/220.png")));
        label_31 = new QLabel(MainUI);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(289, 152, 21, 41));
        d225 = new QLineEdit(MainUI);
        d225->setObjectName(QString::fromUtf8("d225"));
        d225->setGeometry(QRect(305, 202, 32, 31));
        d225->setAcceptDrops(false);
        d225->setInputMethodHints(Qt::ImhNone);
        d225->setMaxLength(3);
        img225 = new QLabel(MainUI);
        img225->setObjectName(QString::fromUtf8("img225"));
        img225->setGeometry(QRect(250, 198, 41, 41));
        img225->setPixmap(QPixmap(QString::fromUtf8(":/images/225.png")));
        label_32 = new QLabel(MainUI);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(289, 198, 21, 41));
        d230 = new QLineEdit(MainUI);
        d230->setObjectName(QString::fromUtf8("d230"));
        d230->setGeometry(QRect(305, 248, 32, 31));
        d230->setAcceptDrops(false);
        d230->setInputMethodHints(Qt::ImhNone);
        d230->setMaxLength(3);
        label_33 = new QLabel(MainUI);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(289, 244, 21, 41));
        img230 = new QLabel(MainUI);
        img230->setObjectName(QString::fromUtf8("img230"));
        img230->setGeometry(QRect(250, 244, 41, 41));
        img230->setPixmap(QPixmap(QString::fromUtf8(":/images/230.png")));
        d235 = new QLineEdit(MainUI);
        d235->setObjectName(QString::fromUtf8("d235"));
        d235->setGeometry(QRect(305, 294, 32, 31));
        d235->setAcceptDrops(false);
        d235->setInputMethodHints(Qt::ImhNone);
        d235->setMaxLength(3);
        label_34 = new QLabel(MainUI);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(289, 290, 21, 41));
        img235 = new QLabel(MainUI);
        img235->setObjectName(QString::fromUtf8("img235"));
        img235->setGeometry(QRect(250, 290, 41, 41));
        img235->setPixmap(QPixmap(QString::fromUtf8(":/images/235.png")));
        label_35 = new QLabel(MainUI);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(339, 143, 21, 41));
        QFont font4;
        font4.setPointSize(9);
        label_35->setFont(font4);
        label_36 = new QLabel(MainUI);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(339, 190, 21, 41));
        label_36->setFont(font4);
        label_37 = new QLabel(MainUI);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(360, 250, 31, 31));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        label_37->setFont(font5);
        coinimg1 = new QLabel(MainUI);
        coinimg1->setObjectName(QString::fromUtf8("coinimg1"));
        coinimg1->setGeometry(QRect(390, 250, 31, 31));
        coinimg1->setPixmap(QPixmap(QString::fromUtf8(":/images/Coin1.png")));
        label_38 = new QLabel(MainUI);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(360, 300, 31, 31));
        label_38->setFont(font5);
        coinimg2 = new QLabel(MainUI);
        coinimg2->setObjectName(QString::fromUtf8("coinimg2"));
        coinimg2->setGeometry(QRect(390, 300, 31, 31));
        coinimg2->setPixmap(QPixmap(QString::fromUtf8(":/images/Coin2.png")));
        label_39 = new QLabel(MainUI);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(355, 150, 16, 41));
        label_39->setFont(font1);
        vipimg1 = new QLabel(MainUI);
        vipimg1->setObjectName(QString::fromUtf8("vipimg1"));
        vipimg1->setGeometry(QRect(365, 156, 33, 31));
        vipimg1->setPixmap(QPixmap(QString::fromUtf8(":/images/Vip.png")));
        d220_vip = new QLineEdit(MainUI);
        d220_vip->setObjectName(QString::fromUtf8("d220_vip"));
        d220_vip->setGeometry(QRect(405, 156, 32, 31));
        d220_vip->setAcceptDrops(false);
        d220_vip->setInputMethodHints(Qt::ImhNone);
        d220_vip->setMaxLength(3);
        label_40 = new QLabel(MainUI);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(440, 150, 16, 41));
        label_40->setFont(font1);
        label_41 = new QLabel(MainUI);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(440, 196, 16, 41));
        label_41->setFont(font1);
        vipimg1_2 = new QLabel(MainUI);
        vipimg1_2->setObjectName(QString::fromUtf8("vipimg1_2"));
        vipimg1_2->setGeometry(QRect(365, 200, 33, 31));
        vipimg1_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Vip.png")));
        d225_vip = new QLineEdit(MainUI);
        d225_vip->setObjectName(QString::fromUtf8("d225_vip"));
        d225_vip->setGeometry(QRect(405, 202, 32, 31));
        d225_vip->setAcceptDrops(false);
        d225_vip->setInputMethodHints(Qt::ImhNone);
        d225_vip->setMaxLength(3);
        label_42 = new QLabel(MainUI);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(355, 196, 16, 41));
        label_42->setFont(font1);
        label_43 = new QLabel(MainUI);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(480, 20, 81, 31));
        targetArc = new QLineEdit(MainUI);
        targetArc->setObjectName(QString::fromUtf8("targetArc"));
        targetArc->setGeometry(QRect(560, 20, 43, 31));
        targetArc->setAcceptDrops(false);
        targetArc->setInputMethodHints(Qt::ImhNone);
        targetArc->setMaxLength(4);
        label_44 = new QLabel(MainUI);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(620, 20, 81, 31));
        label_45 = new QLabel(MainUI);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(480, 70, 81, 31));
        targetDate = new QDateEdit(MainUI);
        targetDate->setObjectName(QString::fromUtf8("targetDate"));
        targetDate->setGeometry(QRect(560, 70, 97, 31));
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
        targetDays = new QLabel(MainUI);
        targetDays->setObjectName(QString::fromUtf8("targetDays"));
        targetDays->setGeometry(QRect(700, 20, 41, 31));
        targetDays->setFont(font3);
        vipSwitch = new QCheckBox(MainUI);
        vipSwitch->setObjectName(QString::fromUtf8("vipSwitch"));
        vipSwitch->setGeometry(QRect(260, 340, 161, 31));
        QFont font6;
        font6.setBold(false);
        font6.setWeight(50);
        vipSwitch->setFont(font6);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Vip.png"), QSize(), QIcon::Normal, QIcon::Off);
        vipSwitch->setIcon(icon1);
        vipSwitch->setIconSize(QSize(32, 32));
        vipSwitch->setTristate(false);
        background->raise();
        arcimg1->raise();
        arcimg2->raise();
        arcimg3->raise();
        arcimg6->raise();
        arcimg5->raise();
        arcimg4->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        Arc1LV->raise();
        Arc2LV->raise();
        Arc3LV->raise();
        Arc6LV->raise();
        Arc5LV->raise();
        Arc4LV->raise();
        label_7->raise();
        ArcMode->raise();
        Arc1current->raise();
        label_8->raise();
        Arc1upgrade->raise();
        Arc2upgrade->raise();
        Arc2current->raise();
        label_9->raise();
        Arc3current->raise();
        label_10->raise();
        Arc3upgrade->raise();
        Arc4current->raise();
        label_11->raise();
        Arc4upgrade->raise();
        Arc5current->raise();
        Arc5upgrade->raise();
        Arc6current->raise();
        Arc6upgrade->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        ArcTotal->raise();
        label_15->raise();
        ApTotal->raise();
        line->raise();
        groupBox->raise();
        groupBox_2->raise();
        line_4->raise();
        line_5->raise();
        startDate->raise();
        label_28->raise();
        img200->raise();
        d200->raise();
        label_29->raise();
        d210->raise();
        label_30->raise();
        img210->raise();
        d220->raise();
        img220->raise();
        label_31->raise();
        d225->raise();
        img225->raise();
        label_32->raise();
        d230->raise();
        label_33->raise();
        img230->raise();
        d235->raise();
        label_34->raise();
        img235->raise();
        label_35->raise();
        label_36->raise();
        label_37->raise();
        coinimg1->raise();
        label_38->raise();
        coinimg2->raise();
        label_39->raise();
        vipimg1->raise();
        d220_vip->raise();
        label_40->raise();
        label_41->raise();
        vipimg1_2->raise();
        d225_vip->raise();
        label_42->raise();
        label_43->raise();
        targetArc->raise();
        label_44->raise();
        label_45->raise();
        targetDate->raise();
        targetDays->raise();
        vipSwitch->raise();

        retranslateUi(MainUI);

        QMetaObject::connectSlotsByName(MainUI);
    } // setupUi

    void retranslateUi(QWidget *MainUI)
    {
        MainUI->setWindowTitle(QApplication::translate("MainUI", "\346\226\260\346\245\223\344\271\213\350\260\267ARC\350\250\210\347\256\227\346\251\237  v1.0", nullptr));
#ifndef QT_NO_TOOLTIP
        arcimg1->setToolTip(QApplication::translate("MainUI", "\346\266\210\351\200\235\347\232\204\346\227\205\351\200\224", nullptr));
#endif // QT_NO_TOOLTIP
        arcimg1->setText(QString());
#ifndef QT_NO_TOOLTIP
        arcimg2->setToolTip(QApplication::translate("MainUI", "\345\225\276\345\225\276\345\263\266", nullptr));
#endif // QT_NO_TOOLTIP
        arcimg2->setText(QString());
#ifndef QT_NO_TOOLTIP
        arcimg3->setToolTip(QApplication::translate("MainUI", "\346\213\211\345\245\221\347\210\276\346\201\251", nullptr));
#endif // QT_NO_TOOLTIP
        arcimg3->setText(QString());
#ifndef QT_NO_TOOLTIP
        arcimg6->setToolTip(QApplication::translate("MainUI", "\350\211\276\346\226\257\344\275\251\346\213\211", nullptr));
#endif // QT_NO_TOOLTIP
        arcimg6->setText(QString());
#ifndef QT_NO_TOOLTIP
        arcimg5->setToolTip(QApplication::translate("MainUI", "\351\255\224\350\217\210\346\226\257", nullptr));
#endif // QT_NO_TOOLTIP
        arcimg5->setText(QString());
#ifndef QT_NO_TOOLTIP
        arcimg4->setToolTip(QApplication::translate("MainUI", "\351\230\277\347\210\276\345\215\241\345\250\234", nullptr));
#endif // QT_NO_TOOLTIP
        arcimg4->setText(QString());
        label->setText(QApplication::translate("MainUI", "Lv.", nullptr));
        label_2->setText(QApplication::translate("MainUI", "Lv.", nullptr));
        label_3->setText(QApplication::translate("MainUI", "Lv.", nullptr));
        label_4->setText(QApplication::translate("MainUI", "Lv.", nullptr));
        label_5->setText(QApplication::translate("MainUI", "Lv.", nullptr));
        label_6->setText(QApplication::translate("MainUI", "Lv.", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc1LV->setToolTip(QApplication::translate("MainUI", "0~20", nullptr));
#endif // QT_NO_TOOLTIP
        Arc1LV->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc2LV->setToolTip(QApplication::translate("MainUI", "0~20", nullptr));
#endif // QT_NO_TOOLTIP
        Arc2LV->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc3LV->setToolTip(QApplication::translate("MainUI", "0~20", nullptr));
#endif // QT_NO_TOOLTIP
        Arc3LV->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc6LV->setToolTip(QApplication::translate("MainUI", "0~20", nullptr));
#endif // QT_NO_TOOLTIP
        Arc6LV->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc5LV->setToolTip(QApplication::translate("MainUI", "0~20", nullptr));
#endif // QT_NO_TOOLTIP
        Arc5LV->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc4LV->setToolTip(QApplication::translate("MainUI", "0~20", nullptr));
#endif // QT_NO_TOOLTIP
        Arc4LV->setText(QString());
        label_7->setText(QApplication::translate("MainUI", "\350\201\267\346\245\255\351\241\236\345\236\213\357\274\232", nullptr));
        ArcMode->setItemText(0, QApplication::translate("MainUI", "\344\270\200\350\210\254\350\201\267\346\245\255", nullptr));
        ArcMode->setItemText(1, QApplication::translate("MainUI", "\345\202\221\350\253\276", nullptr));
        ArcMode->setItemText(2, QApplication::translate("MainUI", "\346\203\241\345\276\251", nullptr));

#ifndef QT_NO_TOOLTIP
        ArcMode->setToolTip(QApplication::translate("MainUI", "\344\270\200\350\210\254\350\201\267\346\245\255(\344\270\273\345\261\254)\343\200\201\345\202\221\350\253\276(\344\270\211\345\261\254)\343\200\201\346\203\241\345\276\251(HP)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Arc1current->setToolTip(QApplication::translate("MainUI", "0~372", nullptr));
#endif // QT_NO_TOOLTIP
        Arc1current->setText(QString());
        label_8->setText(QApplication::translate("MainUI", "/", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc1upgrade->setToolTip(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        Arc1upgrade->setText(QApplication::translate("MainUI", "?", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc2upgrade->setToolTip(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        Arc2upgrade->setText(QApplication::translate("MainUI", "?", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc2current->setToolTip(QApplication::translate("MainUI", "0~372", nullptr));
#endif // QT_NO_TOOLTIP
        Arc2current->setText(QString());
        label_9->setText(QApplication::translate("MainUI", "/", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc3current->setToolTip(QApplication::translate("MainUI", "0~372", nullptr));
#endif // QT_NO_TOOLTIP
        Arc3current->setText(QString());
        label_10->setText(QApplication::translate("MainUI", "/", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc3upgrade->setToolTip(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        Arc3upgrade->setText(QApplication::translate("MainUI", "?", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc4current->setToolTip(QApplication::translate("MainUI", "0~372", nullptr));
#endif // QT_NO_TOOLTIP
        Arc4current->setText(QString());
        label_11->setText(QApplication::translate("MainUI", "/", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc4upgrade->setToolTip(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        Arc4upgrade->setText(QApplication::translate("MainUI", "?", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc5current->setToolTip(QApplication::translate("MainUI", "0~372", nullptr));
#endif // QT_NO_TOOLTIP
        Arc5current->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc5upgrade->setToolTip(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        Arc5upgrade->setText(QApplication::translate("MainUI", "?", nullptr));
#ifndef QT_NO_TOOLTIP
        Arc6current->setToolTip(QApplication::translate("MainUI", "0~372", nullptr));
#endif // QT_NO_TOOLTIP
        Arc6current->setText(QString());
#ifndef QT_NO_TOOLTIP
        Arc6upgrade->setToolTip(QApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        Arc6upgrade->setText(QApplication::translate("MainUI", "?", nullptr));
        label_12->setText(QApplication::translate("MainUI", "/", nullptr));
        label_13->setText(QApplication::translate("MainUI", "/", nullptr));
        label_14->setText(QApplication::translate("MainUI", "\347\233\256\345\211\215ARC\357\274\232", nullptr));
        ArcTotal->setText(QApplication::translate("MainUI", "0", nullptr));
        label_15->setText(QApplication::translate("MainUI", "\345\261\254\346\200\247\345\242\236\345\212\240\351\207\217\357\274\232", nullptr));
        ApTotal->setText(QApplication::translate("MainUI", "0", nullptr));
        groupBox->setTitle(QApplication::translate("MainUI", "\345\274\267\345\214\226\346\211\200\351\234\200\346\245\223\345\271\243", nullptr));
        label_16->setText(QApplication::translate("MainUI", "Lv.", nullptr));
#ifndef QT_NO_TOOLTIP
        ArcLV_from->setToolTip(QApplication::translate("MainUI", "1~20", nullptr));
#endif // QT_NO_TOOLTIP
        ArcLV_from->setText(QApplication::translate("MainUI", "1", nullptr));
        label_17->setText(QApplication::translate("MainUI", "\342\206\222", nullptr));
        label_18->setText(QApplication::translate("MainUI", "Lv.", nullptr));
#ifndef QT_NO_TOOLTIP
        ArcLV_to->setToolTip(QApplication::translate("MainUI", "1~20", nullptr));
#endif // QT_NO_TOOLTIP
        ArcLV_to->setText(QApplication::translate("MainUI", "2", nullptr));
        label_19->setText(QApplication::translate("MainUI", "$\357\274\232", nullptr));
        cost->setText(QApplication::translate("MainUI", "1904", nullptr));
        label_20->setText(QApplication::translate("MainUI", "\350\220\254", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainUI", "\345\202\267\345\256\263\350\250\210\347\256\227", nullptr));
        label_21->setText(QApplication::translate("MainUI", "\350\207\252\350\272\253\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        ArcDamage_x->setToolTip(QApplication::translate("MainUI", "0~1320", nullptr));
#endif // QT_NO_TOOLTIP
        ArcDamage_x->setText(QString());
        label_22->setText(QApplication::translate("MainUI", "\346\200\252\347\211\251\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        ArcDamage_y->setToolTip(QApplication::translate("MainUI", "30~1320", nullptr));
#endif // QT_NO_TOOLTIP
        ArcDamage_y->setText(QApplication::translate("MainUI", "30", nullptr));
        label_23->setText(QApplication::translate("MainUI", "\347\265\202\345\202\267\357\274\232", nullptr));
        label_24->setText(QApplication::translate("MainUI", "\350\242\253\346\223\212\345\202\267\345\256\263\357\274\232", nullptr));
        damage->setText(QApplication::translate("MainUI", "10", nullptr));
        label_25->setText(QApplication::translate("MainUI", "%", nullptr));
        label_26->setText(QApplication::translate("MainUI", "%", nullptr));
        hit_damage->setText(QApplication::translate("MainUI", "280", nullptr));
        label_27->setText(QApplication::translate("MainUI", "\351\201\224\345\210\2601.5\345\200\215\345\242\236\345\202\267ARC\351\234\200\346\261\202\357\274\232", nullptr));
        damage150->setText(QApplication::translate("MainUI", "50", nullptr));
        startDate->setDisplayFormat(QApplication::translate("MainUI", "yyyy/MM/dd", nullptr));
        label_28->setText(QApplication::translate("MainUI", "\350\265\267\345\247\213\346\227\245\346\234\237\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        img200->setToolTip(QApplication::translate("MainUI", "\346\266\210\351\200\235\347\232\204\346\227\205\351\200\224", nullptr));
#endif // QT_NO_TOOLTIP
        img200->setText(QString());
#ifndef QT_NO_TOOLTIP
        d200->setToolTip(QApplication::translate("MainUI", "0~8", nullptr));
#endif // QT_NO_TOOLTIP
        d200->setText(QString());
        label_29->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        d210->setToolTip(QApplication::translate("MainUI", "0~15", nullptr));
#endif // QT_NO_TOOLTIP
        d210->setText(QString());
        label_30->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        img210->setToolTip(QApplication::translate("MainUI", "\345\225\276\345\225\276\345\263\266", nullptr));
#endif // QT_NO_TOOLTIP
        img210->setText(QString());
#ifndef QT_NO_TOOLTIP
        d220->setToolTip(QApplication::translate("MainUI", "0~500", nullptr));
#endif // QT_NO_TOOLTIP
        d220->setText(QString());
#ifndef QT_NO_TOOLTIP
        img220->setToolTip(QApplication::translate("MainUI", "\346\213\211\345\245\221\347\210\276\346\201\251", nullptr));
#endif // QT_NO_TOOLTIP
        img220->setText(QString());
        label_31->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        d225->setToolTip(QApplication::translate("MainUI", "0~30", nullptr));
#endif // QT_NO_TOOLTIP
        d225->setText(QString());
#ifndef QT_NO_TOOLTIP
        img225->setToolTip(QApplication::translate("MainUI", "\351\230\277\347\210\276\345\215\241\345\250\234", nullptr));
#endif // QT_NO_TOOLTIP
        img225->setText(QString());
        label_32->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        d230->setToolTip(QApplication::translate("MainUI", "0~8", nullptr));
#endif // QT_NO_TOOLTIP
        d230->setText(QString());
        label_33->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        img230->setToolTip(QApplication::translate("MainUI", "\351\255\224\350\217\210\346\226\257", nullptr));
#endif // QT_NO_TOOLTIP
        img230->setText(QString());
#ifndef QT_NO_TOOLTIP
        d235->setToolTip(QApplication::translate("MainUI", "0~8", nullptr));
#endif // QT_NO_TOOLTIP
        d235->setText(QString());
        label_34->setText(QApplication::translate("MainUI", "\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        img235->setToolTip(QApplication::translate("MainUI", "\350\211\276\346\226\257\344\275\251\346\213\211", nullptr));
#endif // QT_NO_TOOLTIP
        img235->setText(QString());
        label_35->setText(QApplication::translate("MainUI", "*1", nullptr));
        label_36->setText(QApplication::translate("MainUI", "*2", nullptr));
        label_37->setText(QApplication::translate("MainUI", "*1\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        coinimg1->setToolTip(QApplication::translate("MainUI", "\346\257\21730\345\200\213\347\241\254\345\271\243\345\217\257\345\205\214\346\217\2331\345\200\213\346\213\211\345\245\221\347\210\276\346\201\251ARC", nullptr));
#endif // QT_NO_TOOLTIP
        coinimg1->setText(QString());
        label_38->setText(QApplication::translate("MainUI", "*2\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        coinimg2->setToolTip(QApplication::translate("MainUI", "\346\257\2173\345\200\213\347\241\254\345\271\243\345\217\257\345\205\214\346\217\2331\345\200\213\351\230\277\347\210\276\345\215\241\345\250\234ARC", nullptr));
#endif // QT_NO_TOOLTIP
        coinimg2->setText(QString());
        label_39->setText(QApplication::translate("MainUI", "(", nullptr));
#ifndef QT_NO_TOOLTIP
        vipimg1->setToolTip(QApplication::translate("MainUI", "\351\253\230\347\264\232\346\234\215\345\213\231", nullptr));
#endif // QT_NO_TOOLTIP
        vipimg1->setText(QString());
#ifndef QT_NO_TOOLTIP
        d220_vip->setToolTip(QApplication::translate("MainUI", "0~500", nullptr));
#endif // QT_NO_TOOLTIP
        d220_vip->setText(QString());
        label_40->setText(QApplication::translate("MainUI", ")", nullptr));
        label_41->setText(QApplication::translate("MainUI", ")", nullptr));
#ifndef QT_NO_TOOLTIP
        vipimg1_2->setToolTip(QApplication::translate("MainUI", "\351\253\230\347\264\232\346\234\215\345\213\231", nullptr));
#endif // QT_NO_TOOLTIP
        vipimg1_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        d225_vip->setToolTip(QApplication::translate("MainUI", "0~40", nullptr));
#endif // QT_NO_TOOLTIP
        d225_vip->setText(QString());
        label_42->setText(QApplication::translate("MainUI", "(", nullptr));
        label_43->setText(QApplication::translate("MainUI", "\347\233\256\346\250\231ARC\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        targetArc->setToolTip(QApplication::translate("MainUI", "0~1320", nullptr));
#endif // QT_NO_TOOLTIP
        targetArc->setText(QString());
        label_44->setText(QApplication::translate("MainUI", "\351\201\224\346\210\220\345\244\251\346\225\270\357\274\232", nullptr));
        label_45->setText(QApplication::translate("MainUI", "\351\201\224\346\210\220\346\227\245\346\234\237\357\274\232", nullptr));
        targetDate->setDisplayFormat(QApplication::translate("MainUI", "yyyy/MM/dd", nullptr));
#ifndef QT_NO_TOOLTIP
        targetDays->setToolTip(QApplication::translate("MainUI", "\346\234\200\351\253\230\351\241\257\347\244\272\350\207\2639999", nullptr));
#endif // QT_NO_TOOLTIP
        targetDays->setText(QApplication::translate("MainUI", "0", nullptr));
        vipSwitch->setText(QApplication::translate("MainUI", "\344\275\277\347\224\250\351\253\230\347\264\232\346\234\215\345\213\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainUI: public Ui_MainUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
