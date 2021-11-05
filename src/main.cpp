#include <iostream>
#include <string>
#include <unistd.h>

#include "actor.h"
#include "need_action.h"
#include "event_queue.h"
#include "test_event.h"
#include "component.h"




int main () {

    Time time(0);
    unsigned int microsecond = 100000;

    std::string timeString= time.getTimeFormated();

    Actor actor(&time);

    float workPlease;

    for (int i = 0; i < 2880; i++) {

        if (actor.curAction->endTime == time.getTime()) {
            actor.curAction->run();
        }

        workPlease = actor.needs.hunger;
        std::cout << "============ NUM: " << workPlease << "===========\n";

        if (workPlease < 10.f) {
            std::cout << "======================== ITS WORKING =======================\n";
            actor.curAction = new Eat(&time, &actor);
        }
        
        actor.needs.update();

        time.timeAdv(10);
        std::cout << "Time is: " << time.getTimeFormated() << "\n"; 
        std::cout << "Time elapsed is: " << time.getTime() << "\n"; 

        usleep(1 * microsecond);//sleeps for 3 second
    }
    


    return 0;
}
