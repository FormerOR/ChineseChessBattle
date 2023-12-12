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
    // TODO
    ;
}

bool DataExchange::login(const QString& username, const QString& password) {
    // 在这里实现从本地JSON文件中检索用户名和对应密码判断是否登陆成功
    // 登陆成功则 emit DataExchange::loginOK(); return 1;
    // 失败 emit DataExchange::Failure(); return 0;
    // TODO
    ;
}
