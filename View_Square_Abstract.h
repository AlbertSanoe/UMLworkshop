//
// Created by Su on 2022/7/6.
//

#ifndef UMLWORKSHOP_VIEW_SQUARE_ABSTRACT_H
#define UMLWORKSHOP_VIEW_SQUARE_ABSTRACT_H

#include "Event_Abstract.h"

#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QMouseEvent>

class View_Square_Abstract: public QObject, public QGraphicsRectItem{
private:
    int Position;
    //Event_Abstract* Event;
public:
    explicit View_Square_Abstract(int position,QGraphicsItem* parent = nullptr);
    int GetPosition() const;

};


#endif //UMLWORKSHOP_VIEW_SQUARE_ABSTRACT_H
