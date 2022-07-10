//
// Created by Su on 2022/7/6.
//

#ifndef UMLWORKSHOP_CARD_ABSTRACT_H
#define UMLWORKSHOP_CARD_ABSTRACT_H

#include <QString>
#include  <vector>

using std::vector;
typedef double Money;
typedef int Color;
typedef int ActionType;

class Card_Abstract{
private:
    QString Name;
public:
    explicit Card_Abstract(QString name);
    QString NameReturn() const;
    virtual void SetRent(const vector<Money>&RentInput){}
    virtual void SetPrice(const vector<Money>&PriceInput){}
    virtual void SetMortgage(Money m){}
    virtual Money ReturnCurrentRent(int Status,int Signal)const{return 0;}
    virtual Money ReturnCurrentPrice(int Status)const{return 0;}
    virtual Money ReturnMortgage()const{return 0;}
    virtual Money ReturnMortgagePayback()const{return 0;}
    virtual void SetColor(Color StreetColor){}
    virtual Color ReturnColor()const{return 0;}

    virtual void SetActionType(ActionType type){}
    virtual void SetActionValue(int value){}
    virtual ActionType ReturnActionType()const{return 0;}
    virtual int ReturnActionValue()const{return 0;}
};

#endif //UMLWORKSHOP_CARD_ABSTRACT_H
