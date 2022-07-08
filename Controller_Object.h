//
// Created by Su on 2022/7/8.
//

#ifndef UMLWORKSHOP_CONTROLLER_OBJECT_H
#define UMLWORKSHOP_CONTROLLER_OBJECT_H

#include "Factory_Card.h"

class Board{
private:
    QList<Card_RealEstate*>RealEstate_Card={};
    QList<Card_Transport*>Transport_Card={};
    QList<Card_Energy*>Energy_Card={};
    QList<Card_Action*>Action_Card={};

    void Set_RealEstate_Card_List();
    void Set_Transport_Card_List();
    void Set_Energy_Card_List();
    void Set_Action_Card_List();

public:
    Board();
};

#endif //UMLWORKSHOP_CONTROLLER_OBJECT_H
