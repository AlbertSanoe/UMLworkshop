//
// Created by Su on 2022/7/6.
//

#include "Card_Abstract.h"

Card_Abstract::Card_Abstract(QString name) : Name(name){}

QString Card_Abstract::NameReturn() const {
    return this->Name;
}