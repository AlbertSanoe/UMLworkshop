//
// Created by Su on 2022/7/6.
//

#ifndef UMLWORKSHOP_CARD_INDUSTRY_ABSTRACT_H
#define UMLWORKSHOP_CARD_INDUSTRY_ABSTRACT_H

#include <QString>
#include  <vector>
using std::vector;
typedef double Money;

class Card_Industry_Abstract{
private:
    QString Name;
public:
    explicit Card_Industry_Abstract(QString name);
    QString NameReturn() const;
    virtual void SetRent(const vector<Money>&RentInput)=0;
    virtual void SetPrice(const vector<Money>&PriceInput)=0;
    virtual void SetMortgage(Money m)=0;
    virtual Money ReturnCurrentRent(int Status,int Signal)const=0;
    virtual Money ReturnCurrentPrice(int Status)const=0;
    virtual Money ReturnMortgage()const=0;
    virtual Money ReturnMortgagePayback()const=0;
};

#endif //UMLWORKSHOP_CARD_INDUSTRY_ABSTRACT_H
