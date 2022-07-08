//
// Created by Su on 2022/7/8.
//

#ifndef UMLWORKSHOP_BOARD_H
#define UMLWORKSHOP_BOARD_H

#include "Factory_Card.h"
#include <QTextStream>

class Board{
private:
    QList<Card_Abstract*>RealEstate_Card={};
    QList<Card_Abstract*>Transport_Card={};
    QList<Card_Abstract*>Energy_Card={};
    QList<Card_Abstract*>Chance_Card={};
    QList<Card_Abstract*>CommunityChest_Card={};


    void Set_RealEstate_Card_List();
    void Set_Transport_Card_List();
    void Set_Energy_Card_List();
    void Set_Chance_Card_List();
    void Set_CommunityChest_Card_List();

public:
    Board();
};

#endif //UMLWORKSHOP_BOARD_H
