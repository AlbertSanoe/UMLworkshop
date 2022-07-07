//
// Created by Su on 2022/7/7.
//

#ifndef UMLWORKSHOP_FACTORY_CARD_H
#define UMLWORKSHOP_FACTORY_CARD_H

#include"Card_Industry_Abstract.h"
#include"Card_RealEstate.h"
#include"Card_Transport.h"
#include"Card_Energy.h"

#include<QString>
#include<QStringList>

typedef QString NAME;
typedef QString MONEY;
typedef QStringList Input_Info

#define Card_RealEstate 0
#define Card_Transport 1
#define Card_Energy 2

typedef int Card;

class Factory_Card{
private:
    Factory_Card()= default;
    Card_Industry_Abstract*ReturnCard(Card Type,NAME n,);
};

#endif //UMLWORKSHOP_FACTORY_CARD_H
