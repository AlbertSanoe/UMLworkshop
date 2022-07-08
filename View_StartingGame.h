//
// Created by Su on 2022/7/8.
//

#ifndef UMLWORKSHOP_VIEW_STARTINGGAME_H
#define UMLWORKSHOP_VIEW_STARTINGGAME_H

#include <QDialog>
#include <QVBoxLayout>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>

class StartDialog: public QDialog
{
Q_OBJECT
public:
    StartDialog();
    ~StartDialog() override;
    int GetSelectedValue();

    bool LoadFileSelected();
    QString GetLoadFile();

public slots:
    void LoadFileButtonClicked();

private:
    void AddPlayerOptions();
    QVBoxLayout* m_vLayout;
    QPushButton* m_loadFileButton;
    QPushButton* m_okButton;
    QLabel* m_displayText;
    QComboBox* m_playerOptions;

    QString m_loadFileName;

};

#endif //UMLWORKSHOP_VIEW_STARTINGGAME_H
