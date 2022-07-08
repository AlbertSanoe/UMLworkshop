//
// Created by Su on 2022/7/8.
//

#ifndef UMLWORKSHOP_CARD_ACTION_H
#define UMLWORKSHOP_CARD_ACTION_H

#include"Card_Abstract.h"

#define GO_TO_JAIL                  = 0
#define GET_OUT_OF_JAIL             = 1
#define NEAREST_UTILITY             = 2
#define NEAREST_RAILROAD            = 3
#define REPAIR_BUILDINGS            = 4
#define MONEY_CHANGE_OTHER_PLAYERS  = 5
#define MONEY_CHANGE                = 6
#define MOVE_TO_TARGET              = 7
#define MOVE_SPACES                 = 8

class Card_Action:public Card_Abstract{
private:
    int ActionValue;
    ActionType actionType;
public:
    Card_Action(QString name);
    void SetActionType(ActionType type) override;
    void SetActionValue(int value)override;
    ActionType ReturnActionType() const override;
    int ReturnActionValue()const override;
};

#endif //UMLWORKSHOP_CARD_ACTION_H
