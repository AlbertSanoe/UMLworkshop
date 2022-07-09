//
// Created by Su on 2022/7/9.
//

#ifndef UMLWORKSHOP_VIEW_SQUARE_WITHCARD_H
#define UMLWORKSHOP_VIEW_SQUARE_WITHCARD_H

#include"View_Square_Abstract.h"

class View_Square_WithCard:public View_Square_Abstract{

public:
    explicit View_Square_WithCard(int position,QGraphicsItem* parent = nullptr);
};
#endif //UMLWORKSHOP_VIEW_SQUARE_WITHCARD_H
