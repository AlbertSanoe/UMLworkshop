//
// Created by Su on 2022/7/6.
//

#ifndef UMLWORKSHOP_VIEW_SQUARE_ABSTRACT_H
#define UMLWORKSHOP_VIEW_SQUARE_ABSTRACT_H

/**
 * @param position:the position that the square resides
 *
 */

#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QMouseEvent>

class View_Square_Abstract: public QObject, public QGraphicsRectItem{
private:
    int Position;

public:
    explicit View_Square_Abstract(int position,QGraphicsItem* parent = NULL);
    int GetPosition() const;
    virtual void DrawPicture(int Status)=0;
};


#endif //UMLWORKSHOP_VIEW_SQUARE_ABSTRACT_H
