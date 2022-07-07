//
// Created by Su on 2022/7/6.
//

#ifndef UMLWORKSHOP_CARD_REALESTATE_H
#define UMLWORKSHOP_CARD_REALESTATE_H

#include "Card_Industry_Abstract.h"
#include <QString>

#define Color QString

#define rent_bareGround 0
#define rent_1_house 1
#define rent_2_houses 2
#define rent_3_houses 3
#define rent_4_houses 4
#define rent_hotel 5
#define rent_skyscraper 6

#define buy_land 0
#define buy_house 1
#define buy_hotel 2
#define buy_skyscraper 3


class Card_RealEstate:public Card_Industry_Abstract{

private:

    Color StreetColor;

    Money Rent[7];
    Money*Rent_BareGround=&Rent[0];
    Money*Rent_1_House=&Rent[1];
    Money*Rent_2_Houses=&Rent[2];
    Money*Rent_3_Houses=&Rent[3];
    Money*Rent_4_Houses=&Rent[4];
    Money*Rent_Hotel=&Rent[5];
    Money*Rent_Skyscraper=&Rent[6];

    Money Purchase[4];

    Money*Price_Land=&Purchase[0];
    Money*Price_House=&Purchase[1];
    Money*Price_Hotel=&Purchase[2];
    Money*Price_Skyscraper=&Purchase[3];

    Money Land_Mortgage_Value;
public:
    explicit Card_RealEstate(QString name);

    void SetColor(Color c);
    void SetRent(Money r1,Money r2,Money r3,Money r4,Money r5,Money r6,Money r7);
    void SetPurchase(Money p1,Money p2,Money p3,Money p4);
    void SetMortgage(Money M);

    Color ReturnColor()const;
    Money ReturnCurrentRent(int Status)const override;
    Money ReturnCurrentPrice(int Status)const override;
    Money ReturnMortgage()const;
};


#endif //UMLWORKSHOP_CARD_REALESTATE_H
