//
// Created by Su on 2022/7/8.
//

#include "View_StartingGame.h"

#include <QFileDialog>

View_StartingGame::View_StartingGame()
{
    m_vLayout = new QVBoxLayout;
    m_okButton= new QPushButton("OK",this);
    m_loadFileButton = new QPushButton("Load game", this);
    m_playerOptions=new QComboBox(this);
    m_displayText=new QLabel("With how many players do you want to play?",this);

    AddPlayerOptions();

    m_vLayout->addWidget(m_displayText);
    m_vLayout->addWidget(m_playerOptions);
    m_vLayout->addWidget(m_okButton);
    m_vLayout->addWidget(m_loadFileButton);
    setLayout(m_vLayout);

    //disable the close button (X)
    setWindowFlags(Qt::WindowTitleHint);

    connect(m_okButton,SIGNAL(clicked()),this, SLOT(accept()));
    connect(m_loadFileButton, SIGNAL(clicked()), this, SLOT(LoadFileButtonClicked()));
}

View_StartingGame::~View_StartingGame()
{
    delete m_okButton;
    delete m_playerOptions;
    delete m_vLayout;
}

int View_StartingGame::GetSelectedValue()
{
    return m_playerOptions->currentIndex()+2;
}

bool View_StartingGame::LoadFileSelected()
{
    return !m_loadFileName.isEmpty();
}

QString View_StartingGame::GetLoadFile()
{
    return m_loadFileName;
}

void View_StartingGame::LoadFileButtonClicked()
{

    m_loadFileName = QFileDialog::getOpenFileName(this, "Load game");

    accept();
}

void View_StartingGame::AddPlayerOptions()
{
    QStringList list;
    list << "2" << "3" << "4" << "5" << "6" << "7" << "8";

    m_playerOptions->addItems(list);
}