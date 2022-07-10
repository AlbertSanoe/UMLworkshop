//
// Created by Su on 2022/7/10.
//

#include "Event_Handler.h"

Event_Handler::Event_Handler(Controller_Object *obj_cntl, Controller_View *view_cntl) :
        Object_Control(obj_cntl), View_Control(view_cntl) {}

Event_Handler* Event_Handler::ReturnHandler(Controller_Object*obj_cntl,Controller_View*view_cntl){
    if(Handler==nullptr){
        Handler->ReturnHandler(obj_cntl,view_cntl);
    }
    return Handler;
}

