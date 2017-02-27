//
// Created by KV on 27 february, 2017.
// On the platform Linux (Ubuntu Xenial xerus) 64Bit
//
// hellowwoor@gmail.com
//

#ifndef BLANKNATIVEACTIVITY_NEW_EVENT_LOOP_H
#define BLANKNATIVEACTIVITY_NEW_EVENT_LOOP_H


#include <android_native_app_glue.h>
#include "input_event.h"
#include "handle_command.h"

class event_loop {



public:
    event_loop(android_app* app);


    void run(android_app* application);


private:
    android_app* e_application;
    input_event& inputEvent;
    handle_command handleCommand;
    native_egl nativeEgl;

};


#endif //BLANKNATIVEACTIVITY_NEW_EVENT_LOOP_H
