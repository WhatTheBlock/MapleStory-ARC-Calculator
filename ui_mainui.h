/********************************************************************************
** Form generated from reading UI file 'mainui.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
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
    QCheckBox *arc1Switch;
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
        MainUI->setWindowModality(Qt::NonModal);
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
#if QT_CONFIG(tooltip)
        MainUI->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        MainUI->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        MainUI->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        MainUI->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        MainUI->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        MainUI->setLayoutDirection(Qt::LeftToRight);
        MainUI->setWindowFilePath(QString::fromUtf8(""));
        tabWidget = new QTabWidget(MainUI);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(-5, -3, 721, 421));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tabWidget->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        tabWidget->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        tabWidget->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        tabWidget->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
#if QT_CONFIG(tooltip)
        tab->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tab->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        tab->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        tab->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        tab->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 50, 16, 31));
        QFont font1;
        font1.setPointSize(16);
        label_9->setFont(font1);
#if QT_CONFIG(tooltip)
        label_9->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_9->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_9->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_9->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_9->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_9->setText(QString::fromUtf8("/"));
        Arc6upgrade = new QLabel(tab);
        Arc6upgrade->setObjectName(QString::fromUtf8("Arc6upgrade"));
        Arc6upgrade->setGeometry(QRect(185, 210, 31, 31));
#if QT_CONFIG(tooltip)
        Arc6upgrade->setToolTip(QString::fromUtf8("\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc6upgrade->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc6upgrade->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc6upgrade->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc6upgrade->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc6upgrade->setText(QString::fromUtf8("?"));
        Arc1LV = new QLineEdit(tab);
        Arc1LV->setObjectName(QString::fromUtf8("Arc1LV"));
        Arc1LV->setGeometry(QRect(85, 11, 25, 31));
        Arc1LV->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        Arc1LV->setToolTip(QString::fromUtf8("0~20"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc1LV->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc1LV->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc1LV->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc1LV->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc1LV->setInputMethodHints(Qt::ImhNone);
        Arc1LV->setInputMask(QString::fromUtf8(""));
        Arc1LV->setText(QString::fromUtf8(""));
        Arc1LV->setMaxLength(2);
        Arc1LV->setPlaceholderText(QString::fromUtf8(""));
        Arc1LV->setClearButtonEnabled(false);
        Arc4upgrade = new QLabel(tab);
        Arc4upgrade->setObjectName(QString::fromUtf8("Arc4upgrade"));
        Arc4upgrade->setGeometry(QRect(185, 130, 31, 31));
#if QT_CONFIG(tooltip)
        Arc4upgrade->setToolTip(QString::fromUtf8("\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc4upgrade->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc4upgrade->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc4upgrade->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc4upgrade->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc4upgrade->setText(QString::fromUtf8("?"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(170, 210, 16, 31));
        label_13->setFont(font1);
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_13->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_13->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_13->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_13->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_13->setText(QString::fromUtf8("/"));
        arcimg2 = new QLabel(tab);
        arcimg2->setObjectName(QString::fromUtf8("arcimg2"));
        arcimg2->setGeometry(QRect(20, 50, 31, 31));
#if QT_CONFIG(tooltip)
        arcimg2->setToolTip(QString::fromUtf8("\345\225\276\345\225\276\345\263\266"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        arcimg2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        arcimg2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        arcimg2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        arcimg2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        arcimg2->setText(QString::fromUtf8(""));
        arcimg2->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC2.png")));
        Arc6current = new QLineEdit(tab);
        Arc6current->setObjectName(QString::fromUtf8("Arc6current"));
        Arc6current->setGeometry(QRect(130, 210, 34, 31));
        Arc6current->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        Arc6current->setToolTip(QString::fromUtf8("0~372"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc6current->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc6current->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc6current->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc6current->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc6current->setText(QString::fromUtf8(""));
        Arc6current->setMaxLength(3);
        Arc6current->setPlaceholderText(QString::fromUtf8(""));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 170, 21, 31));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_6->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_6->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_6->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_6->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_6->setText(QString::fromUtf8("Lv."));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 10, 16, 31));
        label_8->setFont(font1);
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_8->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_8->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_8->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_8->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_8->setText(QString::fromUtf8("/"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(170, 130, 16, 31));
        label_11->setFont(font1);
#if QT_CONFIG(tooltip)
        label_11->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_11->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_11->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_11->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_11->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_11->setText(QString::fromUtf8("/"));
        arcimg5 = new QLabel(tab);
        arcimg5->setObjectName(QString::fromUtf8("arcimg5"));
        arcimg5->setGeometry(QRect(20, 170, 31, 31));
#if QT_CONFIG(tooltip)
        arcimg5->setToolTip(QString::fromUtf8("\351\255\224\350\217\210\346\226\257"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        arcimg5->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        arcimg5->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        arcimg5->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        arcimg5->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        arcimg5->setText(QString::fromUtf8(""));
        arcimg5->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC5.png")));
        Arc1current = new QLineEdit(tab);
        Arc1current->setObjectName(QString::fromUtf8("Arc1current"));
        Arc1current->setGeometry(QRect(130, 10, 34, 31));
        Arc1current->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        Arc1current->setToolTip(QString::fromUtf8("0~372"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc1current->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc1current->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc1current->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc1current->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc1current->setText(QString::fromUtf8(""));
        Arc1current->setMaxLength(3);
        Arc1current->setPlaceholderText(QString::fromUtf8(""));
        Arc2current = new QLineEdit(tab);
        Arc2current->setObjectName(QString::fromUtf8("Arc2current"));
        Arc2current->setGeometry(QRect(130, 50, 34, 31));
        Arc2current->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        Arc2current->setToolTip(QString::fromUtf8("0~372"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc2current->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc2current->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc2current->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc2current->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc2current->setText(QString::fromUtf8(""));
        Arc2current->setMaxLength(3);
        Arc2current->setPlaceholderText(QString::fromUtf8(""));
        arcimg1 = new QLabel(tab);
        arcimg1->setObjectName(QString::fromUtf8("arcimg1"));
        arcimg1->setGeometry(QRect(20, 10, 31, 31));
#if QT_CONFIG(tooltip)
        arcimg1->setToolTip(QString::fromUtf8("\346\266\210\351\200\235\347\232\204\346\227\205\351\200\224"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        arcimg1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        arcimg1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        arcimg1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        arcimg1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        arcimg1->setText(QString::fromUtf8(""));
        arcimg1->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC1.png")));
        arcimg6 = new QLabel(tab);
        arcimg6->setObjectName(QString::fromUtf8("arcimg6"));
        arcimg6->setGeometry(QRect(20, 210, 31, 31));
#if QT_CONFIG(tooltip)
        arcimg6->setToolTip(QString::fromUtf8("\350\211\276\346\226\257\344\275\251\346\213\211"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        arcimg6->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        arcimg6->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        arcimg6->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        arcimg6->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        arcimg6->setText(QString::fromUtf8(""));
        arcimg6->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC6.png")));
        arcimg4 = new QLabel(tab);
        arcimg4->setObjectName(QString::fromUtf8("arcimg4"));
        arcimg4->setGeometry(QRect(20, 130, 31, 31));
#if QT_CONFIG(tooltip)
        arcimg4->setToolTip(QString::fromUtf8("\351\230\277\347\210\276\345\215\241\345\250\234"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        arcimg4->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        arcimg4->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        arcimg4->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        arcimg4->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        arcimg4->setText(QString::fromUtf8(""));
        arcimg4->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC4.png")));
        Arc3current = new QLineEdit(tab);
        Arc3current->setObjectName(QString::fromUtf8("Arc3current"));
        Arc3current->setGeometry(QRect(130, 90, 34, 31));
        Arc3current->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        Arc3current->setToolTip(QString::fromUtf8("0~372"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc3current->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc3current->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc3current->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc3current->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc3current->setText(QString::fromUtf8(""));
        Arc3current->setMaxLength(3);
        Arc3current->setPlaceholderText(QString::fromUtf8(""));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 90, 21, 31));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_3->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_3->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_3->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_3->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_3->setText(QString::fromUtf8("Lv."));
        Arc2upgrade = new QLabel(tab);
        Arc2upgrade->setObjectName(QString::fromUtf8("Arc2upgrade"));
        Arc2upgrade->setGeometry(QRect(185, 50, 31, 31));
#if QT_CONFIG(tooltip)
        Arc2upgrade->setToolTip(QString::fromUtf8("\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc2upgrade->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc2upgrade->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc2upgrade->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc2upgrade->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc2upgrade->setText(QString::fromUtf8("?"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 131, 21, 31));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_5->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_5->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_5->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_5->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_5->setText(QString::fromUtf8("Lv."));
        Arc5upgrade = new QLabel(tab);
        Arc5upgrade->setObjectName(QString::fromUtf8("Arc5upgrade"));
        Arc5upgrade->setGeometry(QRect(185, 170, 31, 31));
#if QT_CONFIG(tooltip)
        Arc5upgrade->setToolTip(QString::fromUtf8("\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc5upgrade->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc5upgrade->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc5upgrade->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc5upgrade->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc5upgrade->setText(QString::fromUtf8("?"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 11, 21, 31));
#if QT_CONFIG(tooltip)
        label->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label->setText(QString::fromUtf8("Lv."));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 50, 21, 31));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_2->setText(QString::fromUtf8("Lv."));
        Arc5current = new QLineEdit(tab);
        Arc5current->setObjectName(QString::fromUtf8("Arc5current"));
        Arc5current->setGeometry(QRect(130, 170, 34, 31));
        Arc5current->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        Arc5current->setToolTip(QString::fromUtf8("0~372"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc5current->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc5current->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc5current->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc5current->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc5current->setText(QString::fromUtf8(""));
        Arc5current->setMaxLength(3);
        Arc5current->setPlaceholderText(QString::fromUtf8(""));
        Arc4current = new QLineEdit(tab);
        Arc4current->setObjectName(QString::fromUtf8("Arc4current"));
        Arc4current->setGeometry(QRect(130, 130, 34, 31));
        Arc4current->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        Arc4current->setToolTip(QString::fromUtf8("0~372"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc4current->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc4current->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc4current->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc4current->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc4current->setText(QString::fromUtf8(""));
        Arc4current->setMaxLength(3);
        Arc4current->setPlaceholderText(QString::fromUtf8(""));
        Arc3LV = new QLineEdit(tab);
        Arc3LV->setObjectName(QString::fromUtf8("Arc3LV"));
        Arc3LV->setGeometry(QRect(85, 90, 25, 31));
        Arc3LV->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        Arc3LV->setToolTip(QString::fromUtf8("0~20"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc3LV->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc3LV->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc3LV->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc3LV->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc3LV->setText(QString::fromUtf8(""));
        Arc3LV->setMaxLength(2);
        Arc3LV->setPlaceholderText(QString::fromUtf8(""));
        Arc6LV = new QLineEdit(tab);
        Arc6LV->setObjectName(QString::fromUtf8("Arc6LV"));
        Arc6LV->setGeometry(QRect(85, 210, 25, 31));
        Arc6LV->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        Arc6LV->setToolTip(QString::fromUtf8("0~20"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc6LV->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc6LV->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc6LV->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc6LV->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc6LV->setText(QString::fromUtf8(""));
        Arc6LV->setMaxLength(2);
        Arc6LV->setPlaceholderText(QString::fromUtf8(""));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 210, 21, 31));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_4->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_4->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_4->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_4->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_4->setText(QString::fromUtf8("Lv."));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(170, 90, 16, 31));
        label_10->setFont(font1);
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_10->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_10->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_10->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_10->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_10->setText(QString::fromUtf8("/"));
        Arc4LV = new QLineEdit(tab);
        Arc4LV->setObjectName(QString::fromUtf8("Arc4LV"));
        Arc4LV->setGeometry(QRect(85, 131, 25, 31));
        Arc4LV->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        Arc4LV->setToolTip(QString::fromUtf8("0~20"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc4LV->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc4LV->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc4LV->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc4LV->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc4LV->setText(QString::fromUtf8(""));
        Arc4LV->setMaxLength(2);
        Arc4LV->setPlaceholderText(QString::fromUtf8(""));
        Arc1upgrade = new QLabel(tab);
        Arc1upgrade->setObjectName(QString::fromUtf8("Arc1upgrade"));
        Arc1upgrade->setGeometry(QRect(185, 10, 31, 31));
#if QT_CONFIG(tooltip)
        Arc1upgrade->setToolTip(QString::fromUtf8("\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc1upgrade->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc1upgrade->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc1upgrade->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc1upgrade->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc1upgrade->setText(QString::fromUtf8("?"));
        arcimg3 = new QLabel(tab);
        arcimg3->setObjectName(QString::fromUtf8("arcimg3"));
        arcimg3->setGeometry(QRect(20, 90, 31, 31));
#if QT_CONFIG(tooltip)
        arcimg3->setToolTip(QString::fromUtf8("\346\213\211\345\245\221\347\210\276\346\201\251"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        arcimg3->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        arcimg3->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        arcimg3->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        arcimg3->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        arcimg3->setText(QString::fromUtf8(""));
        arcimg3->setPixmap(QPixmap(QString::fromUtf8(":/images/ARC3.png")));
        Arc5LV = new QLineEdit(tab);
        Arc5LV->setObjectName(QString::fromUtf8("Arc5LV"));
        Arc5LV->setGeometry(QRect(85, 170, 25, 31));
        Arc5LV->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        Arc5LV->setToolTip(QString::fromUtf8("0~20"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc5LV->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc5LV->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc5LV->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc5LV->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc5LV->setText(QString::fromUtf8(""));
        Arc5LV->setMaxLength(2);
        Arc5LV->setPlaceholderText(QString::fromUtf8(""));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(170, 170, 16, 31));
        label_12->setFont(font1);
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_12->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_12->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_12->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_12->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_12->setText(QString::fromUtf8("/"));
        Arc2LV = new QLineEdit(tab);
        Arc2LV->setObjectName(QString::fromUtf8("Arc2LV"));
        Arc2LV->setGeometry(QRect(85, 50, 25, 31));
        Arc2LV->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        Arc2LV->setToolTip(QString::fromUtf8("0~20"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc2LV->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc2LV->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc2LV->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc2LV->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc2LV->setText(QString::fromUtf8(""));
        Arc2LV->setMaxLength(2);
        Arc2LV->setPlaceholderText(QString::fromUtf8(""));
        Arc3upgrade = new QLabel(tab);
        Arc3upgrade->setObjectName(QString::fromUtf8("Arc3upgrade"));
        Arc3upgrade->setGeometry(QRect(185, 90, 31, 31));
#if QT_CONFIG(tooltip)
        Arc3upgrade->setToolTip(QString::fromUtf8("\345\215\207\347\264\232\346\211\200\351\234\200\346\225\270\351\207\217"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        Arc3upgrade->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        Arc3upgrade->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Arc3upgrade->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Arc3upgrade->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Arc3upgrade->setText(QString::fromUtf8("?"));
        ArcMode = new QComboBox(tab);
        ArcMode->addItem(QString());
        ArcMode->addItem(QString());
        ArcMode->addItem(QString());
        ArcMode->setObjectName(QString::fromUtf8("ArcMode"));
        ArcMode->setGeometry(QRect(110, 260, 91, 31));
#if QT_CONFIG(tooltip)
        ArcMode->setToolTip(QString::fromUtf8("\344\270\200\350\210\254\350\201\267\346\245\255(\344\270\273\345\261\254)\343\200\201\345\202\221\350\253\276(\344\270\211\345\261\254)\343\200\201\346\203\241\345\276\251(HP)"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        ArcMode->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        ArcMode->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        ArcMode->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        ArcMode->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        ArcMode->setCurrentText(QString::fromUtf8("\344\270\200\350\210\254\350\201\267\346\245\255"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(25, 260, 81, 31));
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_7->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_7->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_7->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_7->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_7->setText(QString::fromUtf8("\350\201\267\346\245\255\351\241\236\345\236\213\357\274\232"));
        ApTotal = new QLabel(tab);
        ApTotal->setObjectName(QString::fromUtf8("ApTotal"));
        ApTotal->setGeometry(QRect(120, 340, 61, 31));
#if QT_CONFIG(tooltip)
        ApTotal->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        ApTotal->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        ApTotal->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        ApTotal->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        ApTotal->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        ApTotal->setText(QString::fromUtf8("0"));
        ArcTotal = new QLabel(tab);
        ArcTotal->setObjectName(QString::fromUtf8("ArcTotal"));
        ArcTotal->setGeometry(QRect(103, 300, 41, 31));
#if QT_CONFIG(tooltip)
        ArcTotal->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        ArcTotal->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        ArcTotal->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        ArcTotal->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        ArcTotal->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        ArcTotal->setText(QString::fromUtf8("0"));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(23, 340, 91, 31));
#if QT_CONFIG(tooltip)
        label_15->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_15->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_15->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_15->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_15->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_15->setText(QString::fromUtf8("\345\261\254\346\200\247\345\242\236\345\212\240\351\207\217\357\274\232"));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(23, 300, 81, 31));
#if QT_CONFIG(tooltip)
        label_14->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_14->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_14->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_14->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_14->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_14->setText(QString::fromUtf8("\347\233\256\345\211\215ARC\357\274\232"));
        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(220, -10, 31, 411));
#if QT_CONFIG(tooltip)
        line->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        line->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        line->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        line->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        line->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        coinimg2 = new QLabel(tab);
        coinimg2->setObjectName(QString::fromUtf8("coinimg2"));
        coinimg2->setGeometry(QRect(380, 300, 31, 31));
#if QT_CONFIG(tooltip)
        coinimg2->setToolTip(QString::fromUtf8("\346\257\2173\345\200\213\347\241\254\345\271\243\345\217\257\345\205\214\346\217\2331\345\200\213\351\230\277\347\210\276\345\215\241\345\250\234ARC"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        coinimg2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        coinimg2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        coinimg2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        coinimg2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        coinimg2->setText(QString::fromUtf8(""));
        coinimg2->setPixmap(QPixmap(QString::fromUtf8(":/images/Coin2.png")));
        img235 = new QLabel(tab);
        img235->setObjectName(QString::fromUtf8("img235"));
        img235->setGeometry(QRect(260, 240, 41, 41));
#if QT_CONFIG(tooltip)
        img235->setToolTip(QString::fromUtf8("\350\211\276\346\226\257\344\275\251\346\213\211"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        img235->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        img235->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        img235->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        img235->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        img235->setText(QString::fromUtf8(""));
        img235->setPixmap(QPixmap(QString::fromUtf8(":/images/235.png")));
        label_34 = new QLabel(tab);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(299, 240, 21, 41));
#if QT_CONFIG(tooltip)
        label_34->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_34->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_34->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_34->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_34->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_34->setText(QString::fromUtf8("\357\274\232"));
        img225 = new QLabel(tab);
        img225->setObjectName(QString::fromUtf8("img225"));
        img225->setGeometry(QRect(260, 148, 41, 41));
#if QT_CONFIG(tooltip)
        img225->setToolTip(QString::fromUtf8("\351\230\277\347\210\276\345\215\241\345\250\234"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        img225->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        img225->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        img225->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        img225->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        img225->setText(QString::fromUtf8(""));
        img225->setPixmap(QPixmap(QString::fromUtf8(":/images/225.png")));
        d235 = new QLineEdit(tab);
        d235->setObjectName(QString::fromUtf8("d235"));
        d235->setGeometry(QRect(315, 244, 32, 31));
        d235->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        d235->setToolTip(QString::fromUtf8("0~8"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        d235->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        d235->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        d235->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        d235->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        d235->setInputMethodHints(Qt::ImhNone);
        d235->setText(QString::fromUtf8(""));
        d235->setMaxLength(3);
        d235->setPlaceholderText(QString::fromUtf8(""));
        label_30 = new QLabel(tab);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(299, 56, 21, 41));
#if QT_CONFIG(tooltip)
        label_30->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_30->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_30->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_30->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_30->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_30->setText(QString::fromUtf8("\357\274\232"));
        d225 = new QLineEdit(tab);
        d225->setObjectName(QString::fromUtf8("d225"));
        d225->setGeometry(QRect(315, 152, 32, 31));
        d225->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        d225->setToolTip(QString::fromUtf8("0~30"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        d225->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        d225->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        d225->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        d225->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        d225->setInputMethodHints(Qt::ImhNone);
        d225->setText(QString::fromUtf8(""));
        d225->setMaxLength(3);
        d225->setPlaceholderText(QString::fromUtf8(""));
        vipimg1_2 = new QLabel(tab);
        vipimg1_2->setObjectName(QString::fromUtf8("vipimg1_2"));
        vipimg1_2->setGeometry(QRect(385, 154, 33, 31));
#if QT_CONFIG(tooltip)
        vipimg1_2->setToolTip(QString::fromUtf8("\351\253\230\347\264\232\346\234\215\345\213\231"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        vipimg1_2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        vipimg1_2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        vipimg1_2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        vipimg1_2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        vipimg1_2->setText(QString::fromUtf8(""));
        vipimg1_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Vip.png")));
        img200 = new QLabel(tab);
        img200->setObjectName(QString::fromUtf8("img200"));
        img200->setGeometry(QRect(260, 10, 41, 41));
#if QT_CONFIG(tooltip)
        img200->setToolTip(QString::fromUtf8("\346\266\210\351\200\235\347\232\204\346\227\205\351\200\224"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        img200->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        img200->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        img200->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        img200->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        img200->setText(QString::fromUtf8(""));
        img200->setPixmap(QPixmap(QString::fromUtf8(":/images/200.png")));
        label_42 = new QLabel(tab);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(375, 150, 16, 41));
        label_42->setFont(font1);
#if QT_CONFIG(tooltip)
        label_42->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_42->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_42->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_42->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_42->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_42->setText(QString::fromUtf8("("));
        d230 = new QLineEdit(tab);
        d230->setObjectName(QString::fromUtf8("d230"));
        d230->setGeometry(QRect(315, 198, 32, 31));
        d230->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        d230->setToolTip(QString::fromUtf8("0~8"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        d230->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        d230->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        d230->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        d230->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        d230->setInputMethodHints(Qt::ImhNone);
        d230->setText(QString::fromUtf8(""));
        d230->setMaxLength(3);
        d230->setPlaceholderText(QString::fromUtf8(""));
        d220_vip = new QLineEdit(tab);
        d220_vip->setObjectName(QString::fromUtf8("d220_vip"));
        d220_vip->setGeometry(QRect(425, 110, 32, 31));
        d220_vip->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        d220_vip->setToolTip(QString::fromUtf8("0~500"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        d220_vip->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        d220_vip->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        d220_vip->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        d220_vip->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        d220_vip->setInputMethodHints(Qt::ImhNone);
        d220_vip->setText(QString::fromUtf8(""));
        d220_vip->setMaxLength(3);
        d220_vip->setPlaceholderText(QString::fromUtf8(""));
        label_32 = new QLabel(tab);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(299, 148, 21, 41));
#if QT_CONFIG(tooltip)
        label_32->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_32->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_32->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_32->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_32->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_32->setText(QString::fromUtf8("\357\274\232"));
        img210 = new QLabel(tab);
        img210->setObjectName(QString::fromUtf8("img210"));
        img210->setGeometry(QRect(260, 56, 41, 41));
#if QT_CONFIG(tooltip)
        img210->setToolTip(QString::fromUtf8("\345\225\276\345\225\276\345\263\266"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        img210->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        img210->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        img210->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        img210->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        img210->setText(QString::fromUtf8(""));
        img210->setPixmap(QPixmap(QString::fromUtf8(":/images/210.png")));
        label_37 = new QLabel(tab);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(270, 300, 31, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_37->setFont(font2);
#if QT_CONFIG(tooltip)
        label_37->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_37->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_37->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_37->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_37->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_37->setText(QString::fromUtf8("*1\357\274\232"));
        label_40 = new QLabel(tab);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(460, 104, 16, 41));
        label_40->setFont(font1);
#if QT_CONFIG(tooltip)
        label_40->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_40->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_40->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_40->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_40->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_40->setText(QString::fromUtf8(")"));
        label_33 = new QLabel(tab);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(299, 194, 21, 41));
#if QT_CONFIG(tooltip)
        label_33->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_33->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_33->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_33->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_33->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_33->setText(QString::fromUtf8("\357\274\232"));
        d220 = new QLineEdit(tab);
        d220->setObjectName(QString::fromUtf8("d220"));
        d220->setGeometry(QRect(315, 106, 32, 31));
        d220->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        d220->setToolTip(QString::fromUtf8("0~500"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        d220->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        d220->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        d220->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        d220->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        d220->setInputMethodHints(Qt::ImhNone);
        d220->setText(QString::fromUtf8(""));
        d220->setMaxLength(3);
        d220->setPlaceholderText(QString::fromUtf8(""));
        label_41 = new QLabel(tab);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(460, 150, 16, 41));
        label_41->setFont(font1);
#if QT_CONFIG(tooltip)
        label_41->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_41->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_41->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_41->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_41->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_41->setText(QString::fromUtf8(")"));
        label_36 = new QLabel(tab);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(349, 140, 21, 41));
        QFont font3;
        font3.setPointSize(9);
        label_36->setFont(font3);
#if QT_CONFIG(tooltip)
        label_36->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_36->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_36->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_36->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_36->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_36->setText(QString::fromUtf8("*2"));
        d210 = new QLineEdit(tab);
        d210->setObjectName(QString::fromUtf8("d210"));
        d210->setGeometry(QRect(315, 60, 32, 31));
        d210->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        d210->setToolTip(QString::fromUtf8("0~15"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        d210->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        d210->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        d210->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        d210->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        d210->setInputMethodHints(Qt::ImhNone);
        d210->setText(QString::fromUtf8(""));
        d210->setMaxLength(3);
        d210->setPlaceholderText(QString::fromUtf8(""));
        label_29 = new QLabel(tab);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(299, 10, 21, 41));
#if QT_CONFIG(tooltip)
        label_29->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_29->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_29->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_29->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_29->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_29->setText(QString::fromUtf8("\357\274\232"));
        img230 = new QLabel(tab);
        img230->setObjectName(QString::fromUtf8("img230"));
        img230->setGeometry(QRect(260, 194, 41, 41));
#if QT_CONFIG(tooltip)
        img230->setToolTip(QString::fromUtf8("\351\255\224\350\217\210\346\226\257"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        img230->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        img230->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        img230->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        img230->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        img230->setText(QString::fromUtf8(""));
        img230->setPixmap(QPixmap(QString::fromUtf8(":/images/230.png")));
        label_31 = new QLabel(tab);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(299, 102, 21, 41));
#if QT_CONFIG(tooltip)
        label_31->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_31->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_31->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_31->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_31->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_31->setText(QString::fromUtf8("\357\274\232"));
        label_35 = new QLabel(tab);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(349, 93, 21, 41));
        label_35->setFont(font3);
#if QT_CONFIG(tooltip)
        label_35->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_35->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_35->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_35->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_35->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_35->setText(QString::fromUtf8("*1"));
        d225_vip = new QLineEdit(tab);
        d225_vip->setObjectName(QString::fromUtf8("d225_vip"));
        d225_vip->setGeometry(QRect(425, 156, 32, 31));
        d225_vip->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        d225_vip->setToolTip(QString::fromUtf8("0~40"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        d225_vip->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        d225_vip->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        d225_vip->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        d225_vip->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        d225_vip->setInputMethodHints(Qt::ImhNone);
        d225_vip->setText(QString::fromUtf8(""));
        d225_vip->setMaxLength(3);
        d225_vip->setPlaceholderText(QString::fromUtf8(""));
        label_39 = new QLabel(tab);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(375, 104, 16, 41));
        label_39->setFont(font1);
#if QT_CONFIG(tooltip)
        label_39->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_39->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_39->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_39->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_39->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_39->setText(QString::fromUtf8("("));
        d200 = new QLineEdit(tab);
        d200->setObjectName(QString::fromUtf8("d200"));
        d200->setGeometry(QRect(315, 14, 32, 31));
        d200->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        d200->setToolTip(QString::fromUtf8("0~8"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        d200->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        d200->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        d200->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        d200->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        d200->setInputMethodHints(Qt::ImhNone);
        d200->setText(QString::fromUtf8(""));
        d200->setMaxLength(3);
        d200->setPlaceholderText(QString::fromUtf8(""));
        coinimg1 = new QLabel(tab);
        coinimg1->setObjectName(QString::fromUtf8("coinimg1"));
        coinimg1->setGeometry(QRect(300, 300, 31, 31));
#if QT_CONFIG(tooltip)
        coinimg1->setToolTip(QString::fromUtf8("\346\257\21730\345\200\213\347\241\254\345\271\243\345\217\257\345\205\214\346\217\2331\345\200\213\346\213\211\345\245\221\347\210\276\346\201\251ARC"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        coinimg1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        coinimg1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        coinimg1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        coinimg1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        coinimg1->setText(QString::fromUtf8(""));
        coinimg1->setPixmap(QPixmap(QString::fromUtf8(":/images/Coin1.png")));
        label_38 = new QLabel(tab);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(350, 300, 31, 31));
        label_38->setFont(font2);
#if QT_CONFIG(tooltip)
        label_38->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_38->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_38->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_38->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_38->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_38->setText(QString::fromUtf8("*2\357\274\232"));
        vipimg1 = new QLabel(tab);
        vipimg1->setObjectName(QString::fromUtf8("vipimg1"));
        vipimg1->setGeometry(QRect(385, 110, 33, 31));
#if QT_CONFIG(tooltip)
        vipimg1->setToolTip(QString::fromUtf8("\351\253\230\347\264\232\346\234\215\345\213\231"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        vipimg1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        vipimg1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        vipimg1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        vipimg1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        vipimg1->setText(QString::fromUtf8(""));
        vipimg1->setPixmap(QPixmap(QString::fromUtf8(":/images/Vip.png")));
        img220 = new QLabel(tab);
        img220->setObjectName(QString::fromUtf8("img220"));
        img220->setGeometry(QRect(260, 102, 41, 41));
#if QT_CONFIG(tooltip)
        img220->setToolTip(QString::fromUtf8("\346\213\211\345\245\221\347\210\276\346\201\251"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        img220->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        img220->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        img220->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        img220->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        img220->setText(QString::fromUtf8(""));
        img220->setPixmap(QPixmap(QString::fromUtf8(":/images/220.png")));
        vipSwitch = new QCheckBox(tab);
        vipSwitch->setObjectName(QString::fromUtf8("vipSwitch"));
        vipSwitch->setGeometry(QRect(495, 60, 181, 31));
        QFont font4;
        font4.setBold(false);
        font4.setWeight(50);
        vipSwitch->setFont(font4);
#if QT_CONFIG(tooltip)
        vipSwitch->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        vipSwitch->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        vipSwitch->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        vipSwitch->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        vipSwitch->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Vip.png"), QSize(), QIcon::Normal, QIcon::Off);
        vipSwitch->setIcon(icon1);
        vipSwitch->setIconSize(QSize(32, 32));
        vipSwitch->setTristate(false);
        label_43 = new QLabel(tab);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(495, 10, 81, 31));
#if QT_CONFIG(tooltip)
        label_43->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_43->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_43->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_43->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_43->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_43->setText(QString::fromUtf8("\347\233\256\346\250\231ARC\357\274\232"));
        startDate = new QDateEdit(tab);
        startDate->setObjectName(QString::fromUtf8("startDate"));
        startDate->setGeometry(QRect(575, 110, 115, 31));
#if QT_CONFIG(tooltip)
        startDate->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        startDate->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        startDate->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        startDate->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        startDate->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        startDate->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        startDate->setSpecialValueText(QString::fromUtf8(""));
        startDate->setProperty("showGroupSeparator", QVariant(false));
        startDate->setDateTime(QDateTime(QDate(2019, 6, 10), QTime(0, 0, 0)));
        startDate->setMaximumDateTime(QDateTime(QDate(2099, 12, 31), QTime(23, 59, 59)));
        startDate->setMaximumDate(QDate(2099, 12, 31));
        startDate->setMinimumDate(QDate(2019, 6, 10));
        startDate->setMinimumTime(QTime(0, 0, 0));
        startDate->setDisplayFormat(QString::fromUtf8("yyyy/MM/dd"));
        startDate->setCalendarPopup(true);
        startDate->setDate(QDate(2019, 6, 10));
        label_28 = new QLabel(tab);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(495, 110, 81, 31));
#if QT_CONFIG(tooltip)
        label_28->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_28->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_28->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_28->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_28->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_28->setText(QString::fromUtf8("\350\265\267\345\247\213\346\227\245\346\234\237\357\274\232"));
        targetDate = new QDateEdit(tab);
        targetDate->setObjectName(QString::fromUtf8("targetDate"));
        targetDate->setGeometry(QRect(575, 160, 97, 31));
#if QT_CONFIG(tooltip)
        targetDate->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        targetDate->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        targetDate->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        targetDate->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        targetDate->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        targetDate->setWrapping(false);
        targetDate->setFrame(true);
        targetDate->setReadOnly(true);
        targetDate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        targetDate->setSpecialValueText(QString::fromUtf8(""));
        targetDate->setKeyboardTracking(false);
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
#if QT_CONFIG(tooltip)
        label_45->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_45->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_45->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_45->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_45->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_45->setText(QString::fromUtf8("\351\201\224\346\210\220\346\227\245\346\234\237\357\274\232"));
        targetDays = new QLabel(tab);
        targetDays->setObjectName(QString::fromUtf8("targetDays"));
        targetDays->setGeometry(QRect(610, 210, 51, 31));
        QFont font5;
        font5.setUnderline(false);
        targetDays->setFont(font5);
#if QT_CONFIG(tooltip)
        targetDays->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        targetDays->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        targetDays->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        targetDays->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        targetDays->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        targetDays->setText(QString::fromUtf8("0"));
        label_44 = new QLabel(tab);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(495, 210, 111, 31));
#if QT_CONFIG(tooltip)
        label_44->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_44->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_44->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_44->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_44->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_44->setText(QString::fromUtf8("\351\201\224\346\210\220\346\211\200\351\234\200\345\244\251\346\225\270\357\274\232"));
        targetArc = new QSpinBox(tab);
        targetArc->setObjectName(QString::fromUtf8("targetArc"));
        targetArc->setGeometry(QRect(580, 10, 61, 31));
#if QT_CONFIG(tooltip)
        targetArc->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        targetArc->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        targetArc->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        targetArc->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        targetArc->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        targetArc->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        targetArc->setSpecialValueText(QString::fromUtf8(""));
        targetArc->setMinimum(0);
        targetArc->setMaximum(1320);
        targetArc->setValue(0);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
#if QT_CONFIG(tooltip)
        tab_2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tab_2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        tab_2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        tab_2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        tab_2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 311, 131));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupBox->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupBox->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupBox->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupBox->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        groupBox->setCheckable(false);
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(15, 40, 21, 31));
#if QT_CONFIG(tooltip)
        label_16->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_16->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_16->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_16->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_16->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_16->setText(QString::fromUtf8("Lv."));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(100, 40, 31, 31));
        label_17->setFont(font1);
#if QT_CONFIG(tooltip)
        label_17->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_17->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_17->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_17->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_17->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_17->setText(QString::fromUtf8("\342\206\222"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(135, 40, 21, 31));
#if QT_CONFIG(tooltip)
        label_18->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_18->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_18->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_18->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_18->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_18->setText(QString::fromUtf8("Lv."));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(75, 84, 41, 41));
#if QT_CONFIG(tooltip)
        label_19->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_19->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_19->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_19->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_19->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_19->setText(QString::fromUtf8(""));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/images/meso_gold.png")));
        label_19->setScaledContents(true);
        cost = new QLabel(groupBox);
        cost->setObjectName(QString::fromUtf8("cost"));
        cost->setGeometry(QRect(120, 90, 111, 31));
        cost->setFont(font5);
#if QT_CONFIG(tooltip)
        cost->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cost->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        cost->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        cost->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        cost->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        cost->setText(QString::fromUtf8("19,040,000"));
        label_51 = new QLabel(groupBox);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(105, 90, 21, 31));
#if QT_CONFIG(tooltip)
        label_51->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_51->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_51->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_51->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_51->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_51->setText(QString::fromUtf8("\357\274\232"));
        ArcLV_from = new QSpinBox(groupBox);
        ArcLV_from->setObjectName(QString::fromUtf8("ArcLV_from"));
        ArcLV_from->setGeometry(QRect(40, 40, 42, 31));
#if QT_CONFIG(tooltip)
        ArcLV_from->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        ArcLV_from->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        ArcLV_from->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        ArcLV_from->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        ArcLV_from->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        ArcLV_from->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        ArcLV_from->setSpecialValueText(QString::fromUtf8(""));
        ArcLV_from->setSuffix(QString::fromUtf8(""));
        ArcLV_from->setPrefix(QString::fromUtf8(""));
        ArcLV_from->setMinimum(1);
        ArcLV_from->setMaximum(19);
        ArcLV_from->setValue(1);
        ArcLV_to = new QSpinBox(groupBox);
        ArcLV_to->setObjectName(QString::fromUtf8("ArcLV_to"));
        ArcLV_to->setGeometry(QRect(161, 40, 42, 31));
#if QT_CONFIG(tooltip)
        ArcLV_to->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        ArcLV_to->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        ArcLV_to->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        ArcLV_to->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        ArcLV_to->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        ArcLV_to->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        ArcLV_to->setSpecialValueText(QString::fromUtf8(""));
        ArcLV_to->setSuffix(QString::fromUtf8(""));
        ArcLV_to->setPrefix(QString::fromUtf8(""));
        ArcLV_to->setMinimum(2);
        ArcLV_to->setMaximum(20);
        ArcLV_to->setValue(2);
        label_53 = new QLabel(groupBox);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(15, 90, 71, 31));
#if QT_CONFIG(tooltip)
        label_53->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_53->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_53->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_53->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_53->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_53->setText(QString::fromUtf8("\345\215\207\347\264\232\346\211\200\351\234\200"));
        label_54 = new QLabel(groupBox);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(227, 95, 21, 21));
#if QT_CONFIG(tooltip)
        label_54->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_54->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_54->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_54->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_54->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_54->setText(QString::fromUtf8(""));
        label_54->setPixmap(QPixmap(QString::fromUtf8(":/images/meso.png")));
        label_54->setScaledContents(true);
        line_5 = new QFrame(groupBox);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 70, 311, 31));
#if QT_CONFIG(tooltip)
        line_5->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        line_5->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        line_5->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        line_5->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        line_5->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        arc1Switch = new QCheckBox(groupBox);
        arc1Switch->setObjectName(QString::fromUtf8("arc1Switch"));
        arc1Switch->setGeometry(QRect(220, 40, 81, 31));
        arc1Switch->setFont(font4);
#if QT_CONFIG(tooltip)
        arc1Switch->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        arc1Switch->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        arc1Switch->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        arc1Switch->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        arc1Switch->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        arc1Switch->setIcon(icon);
        arc1Switch->setIconSize(QSize(32, 32));
        arc1Switch->setTristate(false);
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(360, 20, 291, 171));
#if QT_CONFIG(tooltip)
        groupBox_2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupBox_2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupBox_2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupBox_2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupBox_2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(15, 40, 41, 31));
#if QT_CONFIG(tooltip)
        label_21->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_21->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_21->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_21->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_21->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_21->setText(QString::fromUtf8("\350\207\252\350\272\253\357\274\232"));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(15, 80, 41, 31));
#if QT_CONFIG(tooltip)
        label_22->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_22->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_22->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_22->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_22->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_22->setText(QString::fromUtf8("\346\200\252\347\211\251\357\274\232"));
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(150, 40, 51, 31));
#if QT_CONFIG(tooltip)
        label_23->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_23->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_23->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_23->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_23->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_23->setText(QString::fromUtf8("\347\265\202\345\202\267\357\274\232"));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(150, 80, 81, 31));
#if QT_CONFIG(tooltip)
        label_24->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_24->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_24->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_24->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_24->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_24->setText(QString::fromUtf8("\350\242\253\346\223\212\345\202\267\345\256\263\357\274\232"));
        damage = new QLabel(groupBox_2);
        damage->setObjectName(QString::fromUtf8("damage"));
        damage->setGeometry(QRect(200, 40, 31, 31));
        damage->setFont(font5);
#if QT_CONFIG(tooltip)
        damage->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        damage->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        damage->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        damage->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        damage->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        damage->setText(QString::fromUtf8("10"));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(230, 40, 16, 31));
#if QT_CONFIG(tooltip)
        label_25->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_25->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_25->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_25->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_25->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_25->setText(QString::fromUtf8("%"));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(260, 80, 16, 31));
#if QT_CONFIG(tooltip)
        label_26->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_26->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_26->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_26->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_26->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_26->setText(QString::fromUtf8("%"));
        hit_damage = new QLabel(groupBox_2);
        hit_damage->setObjectName(QString::fromUtf8("hit_damage"));
        hit_damage->setGeometry(QRect(230, 80, 31, 31));
        hit_damage->setFont(font5);
#if QT_CONFIG(tooltip)
        hit_damage->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        hit_damage->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        hit_damage->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        hit_damage->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        hit_damage->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        hit_damage->setText(QString::fromUtf8("280"));
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(15, 130, 181, 31));
#if QT_CONFIG(tooltip)
        label_27->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_27->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_27->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_27->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_27->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_27->setText(QString::fromUtf8("\351\201\224\345\210\2601.5\345\200\215\345\242\236\345\202\267ARC\351\234\200\346\261\202\357\274\232"));
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(1, 109, 290, 31));
#if QT_CONFIG(tooltip)
        line_3->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        line_3->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        line_3->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        line_3->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        line_3->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        damage150 = new QLabel(groupBox_2);
        damage150->setObjectName(QString::fromUtf8("damage150"));
        damage150->setGeometry(QRect(198, 130, 71, 31));
        damage150->setFont(font5);
#if QT_CONFIG(tooltip)
        damage150->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        damage150->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        damage150->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        damage150->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        damage150->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        damage150->setText(QString::fromUtf8("50"));
        ArcDamage_x = new QSpinBox(groupBox_2);
        ArcDamage_x->setObjectName(QString::fromUtf8("ArcDamage_x"));
        ArcDamage_x->setGeometry(QRect(65, 40, 61, 31));
#if QT_CONFIG(tooltip)
        ArcDamage_x->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        ArcDamage_x->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        ArcDamage_x->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        ArcDamage_x->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        ArcDamage_x->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        ArcDamage_x->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        ArcDamage_x->setSpecialValueText(QString::fromUtf8(""));
        ArcDamage_x->setSuffix(QString::fromUtf8(""));
        ArcDamage_x->setPrefix(QString::fromUtf8(""));
        ArcDamage_x->setMinimum(0);
        ArcDamage_x->setMaximum(1320);
        ArcDamage_x->setValue(0);
        ArcDamage_y = new QSpinBox(groupBox_2);
        ArcDamage_y->setObjectName(QString::fromUtf8("ArcDamage_y"));
        ArcDamage_y->setGeometry(QRect(65, 80, 61, 31));
#if QT_CONFIG(tooltip)
        ArcDamage_y->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        ArcDamage_y->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        ArcDamage_y->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        ArcDamage_y->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        ArcDamage_y->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        ArcDamage_y->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        ArcDamage_y->setSpecialValueText(QString::fromUtf8(""));
        ArcDamage_y->setSuffix(QString::fromUtf8(""));
        ArcDamage_y->setPrefix(QString::fromUtf8(""));
        ArcDamage_y->setMinimum(30);
        ArcDamage_y->setMaximum(1320);
        ArcDamage_y->setValue(30);
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 180, 311, 171));
#if QT_CONFIG(tooltip)
        groupBox_3->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupBox_3->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupBox_3->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupBox_3->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupBox_3->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_46 = new QLabel(groupBox_3);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(15, 40, 81, 31));
#if QT_CONFIG(tooltip)
        label_46->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_46->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_46->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_46->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_46->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_46->setText(QString::fromUtf8("\346\210\220\351\225\267\347\255\211\347\264\232\357\274\232"));
        label_47 = new QLabel(groupBox_3);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(15, 80, 61, 31));
#if QT_CONFIG(tooltip)
        label_47->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_47->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_47->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_47->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_47->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_47->setText(QString::fromUtf8("\346\210\220\351\225\267\345\200\274\357\274\232"));
        label_48 = new QLabel(groupBox_3);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(155, 60, 31, 31));
        label_48->setFont(font1);
#if QT_CONFIG(tooltip)
        label_48->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_48->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_48->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_48->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_48->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_48->setText(QString::fromUtf8("\342\206\222"));
        label_49 = new QLabel(groupBox_3);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(195, 80, 61, 31));
#if QT_CONFIG(tooltip)
        label_49->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_49->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_49->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_49->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_49->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_49->setText(QString::fromUtf8("\346\210\220\351\225\267\345\200\274\357\274\232"));
        label_50 = new QLabel(groupBox_3);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(195, 40, 81, 31));
#if QT_CONFIG(tooltip)
        label_50->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_50->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_50->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_50->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_50->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_50->setText(QString::fromUtf8("\346\210\220\351\225\267\347\255\211\347\264\232\357\274\232"));
        transLV_after = new QLabel(groupBox_3);
        transLV_after->setObjectName(QString::fromUtf8("transLV_after"));
        transLV_after->setGeometry(QRect(275, 40, 21, 31));
        transLV_after->setFont(font5);
#if QT_CONFIG(tooltip)
        transLV_after->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transLV_after->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        transLV_after->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        transLV_after->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        transLV_after->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        transLV_after->setText(QString::fromUtf8("1"));
        transArc_after = new QLabel(groupBox_3);
        transArc_after->setObjectName(QString::fromUtf8("transArc_after"));
        transArc_after->setGeometry(QRect(260, 80, 31, 31));
        transArc_after->setFont(font5);
#if QT_CONFIG(tooltip)
        transArc_after->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transArc_after->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        transArc_after->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        transArc_after->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        transArc_after->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        transArc_after->setText(QString::fromUtf8("0"));
        transLV_before = new QSpinBox(groupBox_3);
        transLV_before->setObjectName(QString::fromUtf8("transLV_before"));
        transLV_before->setGeometry(QRect(95, 40, 42, 31));
#if QT_CONFIG(tooltip)
        transLV_before->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transLV_before->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        transLV_before->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        transLV_before->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        transLV_before->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        transLV_before->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        transLV_before->setSpecialValueText(QString::fromUtf8(""));
        transLV_before->setSuffix(QString::fromUtf8(""));
        transLV_before->setPrefix(QString::fromUtf8(""));
        transLV_before->setMinimum(1);
        transLV_before->setMaximum(20);
        transLV_before->setValue(1);
        transArc_before = new QSpinBox(groupBox_3);
        transArc_before->setObjectName(QString::fromUtf8("transArc_before"));
        transArc_before->setGeometry(QRect(85, 80, 51, 31));
#if QT_CONFIG(tooltip)
        transArc_before->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transArc_before->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        transArc_before->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        transArc_before->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        transArc_before->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        transArc_before->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        transArc_before->setSpecialValueText(QString::fromUtf8(""));
        transArc_before->setSuffix(QString::fromUtf8(""));
        transArc_before->setPrefix(QString::fromUtf8(""));
        transArc_before->setMinimum(0);
        transArc_before->setMaximum(372);
        transArc_before->setValue(0);
        line_4 = new QFrame(groupBox_3);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 110, 311, 31));
#if QT_CONFIG(tooltip)
        line_4->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        line_4->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        line_4->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        line_4->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        line_4->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_52 = new QLabel(groupBox_3);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(15, 130, 71, 31));
#if QT_CONFIG(tooltip)
        label_52->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_52->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_52->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_52->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_52->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_52->setText(QString::fromUtf8("\345\215\207\347\264\232\346\211\200\351\234\200"));
        transCost = new QLabel(groupBox_3);
        transCost->setObjectName(QString::fromUtf8("transCost"));
        transCost->setGeometry(QRect(120, 130, 111, 31));
        transCost->setFont(font5);
#if QT_CONFIG(tooltip)
        transCost->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transCost->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        transCost->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        transCost->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        transCost->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        transCost->setText(QString::fromUtf8("19,040,000"));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(227, 136, 21, 21));
#if QT_CONFIG(tooltip)
        label_20->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_20->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_20->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_20->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_20->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_20->setText(QString::fromUtf8(""));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/images/meso.png")));
        label_20->setScaledContents(true);
        label_55 = new QLabel(groupBox_3);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(105, 130, 21, 31));
#if QT_CONFIG(tooltip)
        label_55->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_55->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_55->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_55->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_55->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_55->setText(QString::fromUtf8("\357\274\232"));
        label_56 = new QLabel(groupBox_3);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(75, 124, 41, 41));
#if QT_CONFIG(tooltip)
        label_56->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_56->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_56->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_56->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_56->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_56->setText(QString::fromUtf8(""));
        label_56->setPixmap(QPixmap(QString::fromUtf8(":/images/meso_gold.png")));
        label_56->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        background = new QTextEdit(MainUI);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-30, -10, 801, 41));
        background->setAcceptDrops(false);
#if QT_CONFIG(tooltip)
        background->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        background->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        background->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        background->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        background->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        background->setUndoRedoEnabled(false);
        background->setReadOnly(true);
        background->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>"));
        background->setAcceptRichText(false);
        background->setTextInteractionFlags(Qt::NoTextInteraction);
        background->setPlaceholderText(QString::fromUtf8(""));
        background->raise();
        tabWidget->raise();

        retranslateUi(MainUI);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainUI);
    } // setupUi

    void retranslateUi(QWidget *MainUI)
    {
        MainUI->setWindowTitle(QCoreApplication::translate("MainUI", "\346\226\260\346\245\223\344\271\213\350\260\267ARC\350\250\210\347\256\227\346\251\237  v2.3", nullptr));
        ArcMode->setItemText(0, QCoreApplication::translate("MainUI", "\344\270\200\350\210\254\350\201\267\346\245\255", nullptr));
        ArcMode->setItemText(1, QCoreApplication::translate("MainUI", "\345\202\221\350\253\276", nullptr));
        ArcMode->setItemText(2, QCoreApplication::translate("MainUI", "\346\203\241\345\276\251", nullptr));

        vipSwitch->setText(QCoreApplication::translate("MainUI", "\344\275\277\347\224\250\351\253\230\347\264\232\346\234\215\345\213\231 (&V)", nullptr));
#if QT_CONFIG(shortcut)
        vipSwitch->setShortcut(QCoreApplication::translate("MainUI", "V", nullptr));
#endif // QT_CONFIG(shortcut)
        targetDate->setDisplayFormat(QCoreApplication::translate("MainUI", "yyyy/MM/dd", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainUI", "\347\247\230\346\263\225\351\201\224\346\210\220\346\227\245\350\250\210\347\256\227 (&Z)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainUI", "\345\215\207\347\264\232\346\211\200\351\234\200\346\245\223\345\271\243", nullptr));
        arc1Switch->setText(QCoreApplication::translate("MainUI", "(&A)", nullptr));
#if QT_CONFIG(shortcut)
        arc1Switch->setShortcut(QCoreApplication::translate("MainUI", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox_2->setTitle(QCoreApplication::translate("MainUI", "\350\242\253\346\223\212\345\202\267\345\256\263 / \345\242\236\345\202\267", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainUI", "\347\247\230\346\263\225\350\247\270\345\252\222", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainUI", "\345\205\266\344\273\226 (&X)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainUI: public Ui_MainUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
