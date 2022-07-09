cmake_minimum_required(VERSION 3.20)
project(UMLworkshop)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "D:/qt/creator/5.15.2/mingw81_64")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(UMLworkshop
        main.cpp
        MainWindow.h
        MainWindow.cpp
        View_Square_Abstract.h
        View_Square_Abstract.cpp
        Player.cpp
        Player.h
        Card_RealEstate.cpp
        Card_RealEstate.h
        Card_Abstract.cpp
        Card_Abstract.h
        View_Abstract.cpp
        View_Abstract.h
        Card_Transport.cpp
        Card_Transport.h
        Card_Energy.cpp
        Card_Energy.h
        Factory_Card.cpp
        Factory_Card.h
        View_Square_Start.cpp
        View_Square_Start.h
        View_Square_Idle.cpp
        View_Square_Idle.h
        View_Square_Prison.cpp
        View_Square_Prison.h
        View_Square_Tax.cpp
        View_Square_Tax.h
        View_Player.cpp
        View_Player.h
        View_StartingGame.cpp
        View_StartingGame.h
        Square_Industry_Abstract.cpp
        Square_Industry_Abstract.h
        Card_Action.cpp
        Card_Action.h
        Board.cpp
        Board.h
        Controller_Object.cpp
        Controller_Object.h
        Factory_Square.cpp
        Factory_Square.h
        Busticket.cpp
        Busticket.h
        Die.h
        Die.cpp
        View_Square_WithCard.cpp View_Square_WithCard.h)
target_link_libraries(UMLworkshop
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

if (WIN32)
    set(DEBUG_SUFFIX)
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    foreach (QT_LIB Core Gui Widgets)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt5${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()
