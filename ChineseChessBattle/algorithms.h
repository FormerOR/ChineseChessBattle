#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include "board.h"

//工具类
class Algorithms {
public:
    //判断僵局(无子可走)
    static bool isStalemate(bool side) {
        auto result = Board::getBoard()->find(-1, -1, side);

        for (const auto& [pos, type] : result) {
            auto piece = Board::getBoard()->pieces.at(pos);
            if (!piece->getPossibleMoves().empty())
                return false;
        }

        return true;
    }

    //反复调用对方所有棋子的isThreat，如果都是false则没有处在被将军状态
    //list里存的是每个棋子的信息而不是子类实例，想要调用子类实例的isThreat就需要创建一个信息和原棋子相同的临时棋子，然后调用这个临时棋子的isThreat
    static inline bool isCheck(const std::list<std::pair<Pos, Piece::PieceType>>& pieces, bool side) {
        auto createPiece = [=](Pos p,Piece::PieceType type)->std::shared_ptr<Piece>{
            // 工厂模式 TODO
        };
        //依次调用所有棋子的isThreat
        for(auto i:pieces){
            //qDebug()<<i.first<<" "<<(int)i.second;
            if(getSide(i.second)==!side){
                std::shared_ptr<Piece> temp = createPiece(i.first,i.second);
                //qDebug()<<i.first<<" "<<temp->isThreat(pieces);
                if(temp->isThreat(pieces))return true;
            }
        }
        return false;
    }


    static bool isCheck(bool side) {
        return isCheck(Board::getBoard()->find(), side);
    }
};

#endif // ALGORITHMS_H
