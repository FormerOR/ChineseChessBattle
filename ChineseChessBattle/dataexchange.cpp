#include "dataexchange.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>

bool DataExchange::signup(){
    emit DataExchange::signupOK();
    return 1;
}

bool DataExchange::login(){
    emit DataExchange::loginOK();
    return 1;
}

bool DataExchange::signup(const QString& username, const QString& password) {
    // 在这里实现将账号密码写入JSON文件的逻辑
    QFile file("users.json");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        return false; // 打开文件失败
    }

    QByteArray data = file.readAll();
    QJsonDocument doc;
    if (!data.isEmpty()) {
        doc = QJsonDocument::fromJson(data);
    }

    QJsonObject rootObj = doc.object();

    if (rootObj.contains(username)) {
        file.close();
        return false; // 用户名已存在
    }

    rootObj[username] = password;

    doc.setObject(rootObj);

    file.resize(0);
    file.write(doc.toJson());
    file.close();

    return true;
}

