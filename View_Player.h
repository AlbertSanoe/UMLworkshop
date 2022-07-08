//
// Created by Su on 2022/7/7.
//

#ifndef UMLWORKSHOP_VIEW_PLAYER_H
#define UMLWORKSHOP_VIEW_PLAYER_H

#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>

class PlayerView : public QFrame
{
Q_OBJECT
public:
    PlayerView(QWidget* parent = NULL);
    ~PlayerView();

public slots:
    /**
     * @brief UpdateMoneyValue: updates the money value in the view
     */
    void UpdateMoneyValue();
    /**
     * @brief ViewInfo: opens a dialog with the player info
     */
    void ViewInfo();
    /**
     * @brief PlayerDied: updates the dialog with
     * dead-player relevant information
     */
    void PlayerDied();
private:
    QLabel* m_playerNameLabel;
    QVBoxLayout* m_vLayout;
    QPushButton* m_viewInfoButton;
    QLabel* m_amountOfMoneyLabel;
};

#endif //UMLWORKSHOP_VIEW_PLAYER_H
