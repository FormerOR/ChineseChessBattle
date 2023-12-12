#include "loginui.h"
#include "mainui.h"
#include "dataexchange.h"

#include <QDir>
#include <QMessageBox>

LoginUI::LoginUI()
    : layout(new QFormLayout), buttonLayout(new QHBoxLayout),
      user(new QLabel("用户名")), passwd(new QLabel("密码")),
      userTxt(new QLineEdit), passwdTxt(new QLineEdit),
      login(new QPushButton("登录")), signup(new QPushButton("注册"))
{
    // 设置登陆对话框的布局
    setAttribute(Qt::WA_DeleteOnClose);
    setLayout(layout);
    layout->addRow(user, userTxt);
    layout->addRow(passwd, passwdTxt);
    buttonLayout->addWidget(login);
    buttonLayout->addWidget(signup);
    layout->addRow(buttonLayout);

    // 设置用户名密码的最大长度和显示模式
    userTxt->setMaxLength(20);
    passwdTxt->setEchoMode(QLineEdit::Password);

    // 连接信号槽完成注册登陆操作
    connect(signup,SIGNAL(clicked()),this,SLOT(onSignup()));
    connect(login,SIGNAL(clicked()),this,SLOT(onLogin()));
    connect(DataExchange::getInstance(),SIGNAL(signupOK()),this,SLOT(signupSuccess()));
    connect(DataExchange::getInstance(),SIGNAL(loginOK()),this,SLOT(loginSuccess()));
    //TODO 处理错误
    //connect(DataExchange::getInstance(),SIGNAL(failure(QString)),this,SLOT(onFailure(QString)));

}

void LoginUI::onLogin() {
    DataExchange::getInstance()->login();
}

void LoginUI::onSignup() {
    DataExchange::getInstance()->signup();
}

void LoginUI::loginSuccess() {
    QMessageBox* nov = new QMessageBox;
    nov->setText(tr("登陆成功！"));
    nov->show();
    this->disconnect();
    hide();
    MainUI* ui = new MainUI;
    ui->show();
    close();
}

void LoginUI::signupSuccess() {
    QMessageBox* nov = new QMessageBox;
    nov->setText(tr("注册成功！"));
    nov->show();
}

void LoginUI::onFailure(const QString message) {
    QMessageBox* nov = new QMessageBox;
    nov->setText(message);
    nov->show();
}

