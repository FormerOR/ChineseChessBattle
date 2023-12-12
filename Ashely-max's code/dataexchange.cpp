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
    // 登陆成功则 emit DataExchange::signupOK(); return 1;
    // 失败 emit DataExchange::Failure(); return 0;

    // 读取JSON文件
    QFile file("data.json");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        // 若文件打开失败
        emit Failure();
        return 0;
    }

    QByteArray jsonData = file.readAll();
    file.close();

    // 解析JSON内容
    QJsonDocument doc = QJsonDocument::fromJson(jsonData);
    if (doc.isNull()) {
        // 若解析JSON失败
        emit Failure();
        return 0;
    }


    QJsonObject rootObject = doc.object();

    // 创建新的用户对象
    QJsonObject userObject;
    userObject["username"] = username;
    userObject["password"] = password;

    QJsonArray userArray = rootObject["users"].toArray();
    userArray.append(userObject);
    rootObject["users"] = userArray;

    // 将修改后的JSON内容写入文件
    file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);
    file.write(QJsonDocument(rootObject).toJson());
    file.close();


    emit signupOK();
    return 1;
}


bool DataExchange::login(const QString& username, const QString& password) {
    // 在这里实现从本地JSON文件中检索用户名和对应密码判断是否登陆成功
    // 登陆成功则 emit DataExchange::loginOK(); return 1;
    // 失败 emit DataExchange::Failure(); return 0;

    // 读取JSON文件
    QFile file("data.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        // 若文件打开失败
        emit Failure();
        return 0;
    }

    QByteArray jsonData = file.readAll();
    file.close();

    // 解析JSON内容
    QJsonDocument doc = QJsonDocument::fromJson(jsonData);
    if (doc.isNull()) {
        // 若解析JSON失败
        emit Failure();
        return 0;
    }


    QJsonObject rootObject = doc.object();

    // 获取用户的数组
    QJsonArray userArray = rootObject["users"].toArray();

    // 遍历该数组，检查用户名和密码是否匹配
    for (const QJsonValue& userValue : userArray) {
        QJsonObject userObject = userValue.toObject();
        QString storedUsername = userObject["username"].toString();
        QString storedPassword = userObject["password"].toString();

        if (storedUsername == username && storedPassword == password) {
            // 若登录成功
            emit loginOK();
            return 1;
        }
    }

    // 若登录失败
    emit Failure();
    return 0;
}

