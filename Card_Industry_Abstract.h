//
// Created by Su on 2022/7/6.
//

#ifndef UMLWORKSHOP_CARD_INDUSTRY_ABSTRACT_H
#define UMLWORKSHOP_CARD_INDUSTRY_ABSTRACT_H
#include <QString>
class Card_Industry_Abstract{
private:
    QString Name;
public:
    explicit Card_Industry_Abstract(QString name);
    QString NameReturn() const;
    virtual int GetCurrentPenalty()=0;
};

#endif //UMLWORKSHOP_CARD_INDUSTRY_ABSTRACT_H
