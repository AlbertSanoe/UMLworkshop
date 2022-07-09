//
// Created by Su on 2022/7/9.
//

#include "View_Piece.h"

View_Piece::View_Piece(int p_id, QGraphicsItem* parent) : QGraphicsPixmapItem(parent){
    QString fileName="../Images/piece"+QString::number(p_id+1)+ ".png";
    setPixmap(QPixmap(fileName));
}
