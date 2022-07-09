//
// Created by Su on 2022/7/9.
//

#ifndef UMLWORKSHOP_VIEW_BOARD_H
#define UMLWORKSHOP_VIEW_BOARD_H

#include "View_Square_Abstract.h"
#include "View_Square_Idle.h"
#include "View_Square_Start.h"
#include "View_Square_Tax.h"
#include "View_Square_Prison.h"
#include "View_Square_WithCard.h"
#include "View_House.h"
#include "View_Piece.h"
#include "Factory_Square.h"

#include <QGraphicsView>
#include <QMouseEvent>
#include <QLabel>
#include <QGraphicsScene>
#include <QTextStream>

class View_Board:public QGraphicsView{
    Q_OBJECT
private:
    QList<View_Square_Abstract*>Squares;
    QList<View_House*>Houses;
    QList<View_Piece*>Pieces;

    QLabel* m_imageLabel;
    QGraphicsPixmapItem* m_boardPixmapItem;
    QGraphicsScene* m_scene;

    int m_height=0;
    int m_width=0;

    void Set_Square_List();
    void Set_House_List();
    void InitPiece(int Player_Number,int Player_Position);//invoked after initialization

public:
    explicit View_Board(QWidget*parent);
};

#endif //UMLWORKSHOP_VIEW_BOARD_H
