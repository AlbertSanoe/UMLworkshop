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
#include<QFile>

typedef QString NAME;
typedef QString MONEY;
typedef QString Input_Info;

#define card_realEstate 0
#define card_transport 1
#define card_energy 2

typedef int Card;

class Factory_Card{
public:
    Factory_Card()= default;

    static Card_Industry_Abstract *CardInitialize(Card Type, NAME name,
                                           const std::vector<Money> &RentInput, const std::vector<Money> &PriceInput,Money m);
    static Card_Industry_Abstract*ReturnCard(Card&Type,const Input_Info& Info);
};

#endif //UMLWORKSHOP_FACTORY_CARD_H
