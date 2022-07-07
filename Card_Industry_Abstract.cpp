//
// Created by Su on 2022/7/6.
//

#include "Card_Industry_Abstract.h"

Card_Industry_Abstract::Card_Industry_Abstract(QString name) :Name(name){}

QString Card_Industry_Abstract::NameReturn() const {
    return this->Name;
}