#include "mainui.h"

void MainUI::checkUpdate() {
    nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &MainUI::onResult);
    url.setUrl(UpdateURL);
    nam->get(QNetworkRequest(url));
}

void MainUI::onResult(QNetworkReply *reply) {
    if(reply->error() == QNetworkReply::NoError) {
        QByteArray result = reply->readAll();
        QJsonDocument jsonResponse = QJsonDocument::fromJson(result);
        QJsonObject obj = jsonResponse.object();

        if(VERCODE < obj["verCode"].toInt()) {
            msg = new QMessageBox(QMessageBox::Information, QStringLiteral("發現新版本！"), QStringLiteral("是否現在更新？"), QMessageBox::NoButton, this);
            msg->addButton(QStringLiteral("取消"), QMessageBox::ActionRole);
            QPushButton *yes = msg->addButton(QStringLiteral("好唷！"), QMessageBox::ActionRole);
            msg->setDefaultButton(yes);
            msg->exec();
            if(msg->clickedButton() == yes) QDesktopServices::openUrl(QUrl(ReleaseURL));
        }
    } //else qDebug() << "ERROR";

    reply->deleteLater();
}
