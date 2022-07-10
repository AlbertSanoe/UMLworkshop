//
// Created by Su on 2022/7/9.
//

#include "View_Board.h"

void View_Board::Set_Square_List(){
    // Load space rectangles from file
    QFile file("../DataFile/spacesRects.txt");
    file.open(QFile::ReadOnly);

    QTextStream textStream(&file);

    int position_board=0;

    while(!textStream.atEnd())
    {
        QString line = textStream.readLine();
        QStringList list = line.split(' ');
        View_Square_Abstract*s=Factory_Square::ReturnViewSquare(list[0].toInt(), list[1].toInt(),list[2].toInt(), list[3].toInt(),position_board,m_boardPixmapItem);

        Squares.append(s);
        ++position_board;
    }

    file.close();
}

void View_Board::Set_House_List() {
    for(int i=0;i<Squares.length();i++)
        Houses.append(NULL);
}

void View_Board::InitPiece(int Player_Number,int Player_Position){
    auto* piece = new View_Piece(Player_Number,Squares[Player_Position]);
    Pieces<<piece;
}

View_Board::View_Board(QWidget *parent) : QGraphicsView(parent){
    m_imageLabel= new QLabel;

    m_scene= new QGraphicsScene(this);
    setScene(m_scene);
    m_boardPixmapItem =m_boardPixmapItem = m_scene->addPixmap(QPixmap("../Images/US_Board_klein.png"));

    Set_Square_List();
    Set_House_List();
}
