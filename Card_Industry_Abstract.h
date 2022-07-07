//
// Created by Su on 2022/7/6.
//

#ifndef UMLWORKSHOP_CARD_INDUSTRY_ABSTRACT_H
#define UMLWORKSHOP_CARD_INDUSTRY_ABSTRACT_H

#include <QString>
#include  <vector>
using std::vector;
typedef int Money;

class Card_Industry_Abstract{
private:
    QString Name;
public:
    explicit Card_Industry_Abstract(QString name);
    QString NameReturn() const;
    virtual void SetRent(const vector<Money>&RentInput){}
    virtual void SetPrice(const vector<Money>&PriceInput){}
    virtual void SetMortgage(Money m){}
    virtual Money ReturnCurrentRent(int Status,int Signal)const=0;
    virtual Money ReturnCurrentPrice(int Status)const=0;
    virtual Money ReturnMortgage()const=0;
};

#endif //UMLWORKSHOP_CARD_INDUSTRY_ABSTRACT_H
