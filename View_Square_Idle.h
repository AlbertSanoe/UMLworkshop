//
// Created by Su on 2022/7/7.
//

#ifndef UMLWORKSHOP_VIEW_SQUARE_IDLE_H
#define UMLWORKSHOP_VIEW_SQUARE_IDLE_H

#include"View_Square_Abstract.h"

class View_Square_Idle:public View_Square_Abstract{

public:
    explicit View_Square_Idle(int position,QGraphicsItem* parent = nullptr);
};

#endif //UMLWORKSHOP_VIEW_SQUARE_IDLE_H
