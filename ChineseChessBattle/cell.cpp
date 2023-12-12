#include "cell.h"
#include "board.h"

Cell* Cell::chosen = nullptr;

// 棋子放置位当做一个按钮，设置相关属性
Cell::Cell(int x, int y) : QPushButton("+"), x(x), y(y)
{
    setFlat(true);
    setFixedSize(20, 20);
    fade();
    setAutoFillBackground(true);
    connect(this,SIGNAL(clicked()),this,SLOT(onclick()));
    connect(this,&Cell::isclick,Board::getBoard(),&Board::onClick);
}
