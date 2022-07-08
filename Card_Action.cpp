//
// Created by Su on 2022/7/8.
//

#include "Card_Action.h"

Card_Action::Card_Action(QString name) : Card_Abstract(name){}

void Card_Action::SetActionType(ActionType type){
    this->actionType=type;
}

void Card_Action::SetActionValue(int value) {
    this->ActionValue=value;
}

ActionType Card_Action::ReturnActionType() const {
    return this->actionType;
}

int Card_Action::ReturnActionValue() const {
    return this->ActionValue;
}