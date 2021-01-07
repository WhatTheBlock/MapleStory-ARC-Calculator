#include "mainui.h"

//提醒訊息
void MainUI::warningMsg(QString str){
    QMessageBox::warning(this, QStringLiteral("嘿！"), str);
}

//加入分位符號
QString MainUI::decimalSeparator(int n){
    QString temp = QString::number(n);

    if(n == 0) return "0";
    if(n < 10000000) return temp.mid(0,1) + "," + temp.mid(1,3) + "," + temp.mid(4,3);
    else if(n < 100000000) return temp.mid(0,2) + "," + temp.mid(2,3) + "," + temp.mid(5,3);
    else if(n < 1000000000) return temp.mid(0,3) + "," + temp.mid(3,3) + "," + temp.mid(6,3);
    else return temp.mid(0,1) + "," + temp.mid(1,3) + "," + temp.mid(4,3) + "," + temp.mid(7,3);
}
