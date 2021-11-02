#include <iostream>
#include <string>

#include "event_queue.h"
#include "test_event.h"
#include "component.h"




int main () {

    EventQueue test;

    Time time(0);
    
    TimeAdvEvent event(&time);
    test.addEvent(&event);


    while(true) {
       test.nextEvent();

       if (!test.event_queue.size()) {
           test.addEvent(&event);
       }
    }

    


    return 0;
}
