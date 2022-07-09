//
// Created by Su on 2022/7/7.
//

#ifndef UMLWORKSHOP_VIEW_SQUARE_START_H
#define UMLWORKSHOP_VIEW_SQUARE_START_H

#include"View_Square_Abstract.h"

class View_Square_Start:public View_Square_Abstract{

public:
    explicit View_Square_Start(int position,QGraphicsItem* parent = nullptr);
};

#endif //UMLWORKSHOP_VIEW_SQUARE_START_H
