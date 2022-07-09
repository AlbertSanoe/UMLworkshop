//
// Created by Su on 2022/7/8.
//

#ifndef UMLWORKSHOP_FACTORY_SQUARE_H
#define UMLWORKSHOP_FACTORY_SQUARE_H

#include "View_Square_Abstract.h"

class Factory_Square{
public:
    Factory_Square()=default;
    static View_Square_Abstract* ReturnViewSquare(int x_pos,int y_pos,int wide,int height,int pos_board);
};

#endif //UMLWORKSHOP_FACTORY_SQUARE_H
