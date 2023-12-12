#ifndef MAINUI_H
#define MAINUI_H

#include <QDialog>
#include <QGridLayout>
#include <QLabel>
#include <QVBoxLayout>
#include <QLineEdit>

class Cell;
class MainUI : public QDialog
{
    Q_OBJECT

    QVBoxLayout* layout;
    QGridLayout* boardLayout;
    QLabel *h[8 * 10], *v1[9 * 4], *v2[9 * 4], *l[8], *chu, *han;
    Cell* cells[9 * 10];
    QLineEdit* text;
    QLabel* message_area;
signals:
    void setup(Cell**);
    void onMes(QString);
public slots:
    void onFind(const QString opp_name) {
        emit setup(cells);
        this->opp_name=opp_name;
    }
    // TODO 聊天功能
public:
    MainUI();
private:
    QString opp_name;
};

#endif // MAINUI_H
