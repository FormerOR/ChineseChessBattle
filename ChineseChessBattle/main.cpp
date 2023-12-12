#include "loginui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //TODO 使用QSS装点界面

    auto w = new LoginUI;
    w->show();
    return a.exec();
}
