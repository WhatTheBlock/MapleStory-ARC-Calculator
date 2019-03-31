/********************************************************************************
** Form generated from reading UI file 'mainui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINUI_H
#define UI_MAINUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

    void setupUi(QWidget *MainUI)
    {
        if (MainUI->objectName().isEmpty())
            MainUI->setObjectName(QString::fromUtf8("MainUI"));
        MainUI->resize(540, 387);
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
        background->setGeometry(QRect(-10, 0, 551, 391));
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
        groupBox->setGeometry(QRect(250, 20, 271, 71));
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
        groupBox_2->setGeometry(QRect(250, 110, 271, 161));
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
        line_2->setGeometry(QRect(107, 30, 20, 83));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 120, 181, 31));
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 99, 251, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        damage150 = new QLabel(groupBox_2);
        damage150->setObjectName(QString::fromUtf8("damage150"));
        damage150->setGeometry(QRect(193, 120, 41, 31));
        damage150->setFont(font3);
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

        retranslateUi(MainUI);

        QMetaObject::connectSlotsByName(MainUI);
    } // setupUi

    void retranslateUi(QWidget *MainUI)
    {
        MainUI->setWindowTitle(QApplication::translate("MainUI", "\346\226\260\346\245\223\344\271\213\350\260\267ARC\350\250\210\347\256\227\346\251\237 v0.4    by \346\233\211\344\272\246\345\244\217\351\242\250", nullptr));
        arcimg1->setText(QString());
        arcimg2->setText(QString());
        arcimg3->setText(QString());
        arcimg6->setText(QString());
        arcimg5->setText(QString());
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
        label_7->setText(QApplication::translate("MainUI", "ARC\351\241\236\345\236\213\357\274\232", nullptr));
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
        ArcDamage_x->setText(QApplication::translate("MainUI", "0", nullptr));
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
    } // retranslateUi

};

namespace Ui {
    class MainUI: public Ui_MainUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
