//
// Created by Su on 2022/7/7.
//

#ifndef UMLWORKSHOP_CARD_ENERGY_H
#define UMLWORKSHOP_CARD_ENERGY_H

#include "Card_Industry_Abstract.h"

#define One_Company 0
#define Two_Company 1
#define Three_Company 2

class Card_Energy:public Card_Industry_Abstract{
private:
    Money Land_Mortgage_Value=0;
    Money Price=0;
public:
    explicit Card_Energy(QString name);
    void SetRent(const std::vector<Money>&RentInput)override{};
    void SetPrice(const std::vector<Money>&PriceInput)override;
    void SetMortgage(Money m)override;
    Money ReturnCurrentRent(int Status,int Signal)const override;
    Money ReturnCurrentPrice(int Status)const override;
    Money ReturnMortgage()const override;
};

#endif //UMLWORKSHOP_CARD_ENERGY_H
