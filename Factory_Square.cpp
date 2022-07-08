//
// Created by Su on 2022/7/8.
//

#include "Factory_Square.h"

View_Square_Abstract* Factory_Square::ReturnViewSquare(int x_pos, int y_pos, int wide, int height,int pos_board) {
    auto*ptr=new View_Square_Abstract(pos_board);
    ptr->setRect(x_pos,y_pos,wide,height);
    ptr->setFlag(QGraphicsLineItem::ItemIsSelectable);
    return ptr;
}