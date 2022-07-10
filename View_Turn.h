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
    const int MAX_NOTIFICATIONS=5;
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
    QQueue <QString> m_notificationCenter;

    void InitPushButtons();
    void InitLayout();
    void AddMessageToNotifications(const QString& p_message,int Current_Player_ID);
    void FillInfoMessageWithNotifications();
public:
    explicit View_Turn(QWidget*parent= nullptr);

};

#endif //UMLWORKSHOP_VIEW_TURN_H
