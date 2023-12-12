#ifndef DATAEXCHANGE_H
#define DATAEXCHANGE_H

// DataExchange类模拟Network的功能进行数据存储和交换

#include "qobject.h"
class DataExchange : public QObject {
    Q_OBJECT
public:
    // 单例模式获取对象实例
    static DataExchange* getInstance() {
        static DataExchange* singleton = nullptr;
        if (!singleton)
            singleton = new DataExchange;
        return singleton;
    }

    // 简化版注册操作
    bool signup();
    // 简化版登录操作
    bool login();

    // 具体实现的重载函数
    bool signup(const QString& username, const QString& password);
    bool login(const QString& username, const QString& password);

signals:
    void loginOK();
    void signupOK();
    void Failure();
};

#endif // DATAEXCHANGE_H
