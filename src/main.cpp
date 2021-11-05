#include <iostream>
#include <string>
#include <unistd.h>

#include "actor.h"




int main () {

    Time time(0);
    unsigned int microsecond = 100000;

    std::string timeString= time.getTimeFormated();

    Actor actor(&time);

    float workPlease;

    for (int i = 0; i < 2880; i++) {

        

        actor.update();

        time.timeAdv(10);
        std::cout << "Time is: " << time.getTimeFormated() << "\n"; 
        std::cout << "Time elapsed is: " << time.getTime() << "\n"; 

        usleep(1 * microsecond);//sleeps for 3 second
    }
    


    return 0;
}
