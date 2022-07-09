//
// Created by Su on 2022/7/9.
//

#ifndef UMLWORKSHOP_VIEW_HOUSE_H
#define UMLWORKSHOP_VIEW_HOUSE_H
#include <QGraphicsPixmapItem>

class View_House:public QGraphicsPixmapItem{

public:
    explicit View_House(const QPixmap &pixmap, QGraphicsItem *parent = nullptr);
};

#endif //UMLWORKSHOP_VIEW_HOUSE_H
