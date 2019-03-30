#ifndef MAINUI_H
#define MAINUI_H

#include<QtWidgets>
#include<QStyleFactory>
#include<QDebug>
#include<QUrl>
#include<QtCore>
#include<QLineEdit>

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

    void on_ArcLV_from_textChanged(const QString &arg1);

    void on_ArcLV_to_textChanged(const QString &arg1);

private:
    Ui::MainUI *ui;

    QLineEdit* ArcLV[6];
    QLineEdit* ArcCurrent[6];
    QLabel* ArcUpgrade[6];
    QLabel* ArcTotal;
    QLabel* ApTotal;
    QComboBox* ArcMode;
    int ArcLVint[6], ArcCurrentint[6], ArcUpgradeint[6];

    void upgradeVal();
    void updateAp(int mode);
    void avoidError();
    int upgradeMeso(int from, int to);

};

#endif // MAINUI_H
