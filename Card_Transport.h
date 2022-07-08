//
// Created by Su on 2022/7/7.
//

#ifndef UMLWORKSHOP_CARD_TRANSPORT_H
#define UMLWORKSHOP_CARD_TRANSPORT_H

#include"Card_Abstract.h"

#define has_1_gare 0
#define has_2_gare 1
#define has_3_gare 2
#define has_4_gare 3

#define Signal_Basic 0
#define Signal_Upgrade 1

class Card_Transport:public Card_Abstract{
private:
    Money Rent[4]={0};
    Money* Has_One_Gare=&Rent[0];
    Money* Has_Two_Gare=&Rent[1];
    Money* Has_Three_Gare=&Rent[2];
    Money* Has_Four_Gare=&Rent[3];
    Money Price=0;
    Money Land_Mortgage_Value=0;
    Money MortgagePayback=0;
public:
    explicit Card_Transport(QString name);
    void SetRent(const vector<Money>&RentInput)override;
    void SetPrice(const vector<Money>&PriceInput)override;
    void SetMortgage(Money m)override;
    Money ReturnCurrentRent(int Status,int Signal)const override;
    Money ReturnCurrentPrice(int Status)const override;
    Money ReturnMortgage()const override;
    Money ReturnMortgagePayback()const override;
};


#endif //UMLWORKSHOP_CARD_TRANSPORT_H
