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

    // 注册操作
    bool signup();
    // 登录操作
    bool login();
    // 重载TODO
    bool signup(const QString& username, const QString& password);

signals:
    void loginOK();
    void signupOK();
};

#endif // DATAEXCHANGE_H
