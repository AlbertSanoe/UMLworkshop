//
// Created by Su on 2022/7/10.
//

#ifndef UMLWORKSHOP_EVENT_HANDLER_H
#define UMLWORKSHOP_EVENT_HANDLER_H

#include "Controller_Object.h"
#include "Controller_View.h"

#include <QGraphicsView>

class Event_Handler{
private:
    static Event_Handler* Handler;
    Controller_Object* Object_Control;
    Controller_View* View_Control;
    Event_Handler(Controller_Object*obj_cntl,Controller_View*view_cntl);
public:
    static Event_Handler* ReturnHandler(Controller_Object*obj_cntl,Controller_View*view_cntl);

};




#endif //UMLWORKSHOP_EVENT_HANDLER_H
