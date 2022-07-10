//
// Created by Su on 2022/7/10.
//

#ifndef UMLWORKSHOP_VIEW_TURN_H
#define UMLWORKSHOP_VIEW_TURN_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>
#include <QQueue>

class View_Turn:public QWidget{
    Q_OBJECT
private:

    QLabel * m_infoMessage;
    QLabel * m_currentPlayerMessage;
    QPushButton* m_diceButton;
    QPushButton* m_speedDieButton;
    QPushButton* m_buildHousesButton;
    QPushButton* m_mortgageButton;
    QPushButton* m_tradeButton;
    QPushButton* m_getOutOfJailButton;
    QPushButton* m_useBusTicketButton;
    QPushButton* m_endTurnButton;
    QPushButton* m_quitPlayerButton;
    QPushButton* m_saveGameButton;
    QVBoxLayout* m_vLayout;

    QList<bool> m_restoreButtonValues;

    void InitPushButtons();
    void InitLayout();
public:
    View_Turn(QWidget*parent= nullptr);

};

#endif //UMLWORKSHOP_VIEW_TURN_H
