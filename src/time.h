#ifndef TIME_H
#define TIME_H

#include <string>

/* This class keeps track of time for the event loop system
 * It formats the time
 * Time is expressed as an int for events to dynamically trigger at
 * the appropriate time
 */

class Time {
public:
    // Two ways to inisilzie, one for the actula date timing and one
    // for simply pushing a time in total minutes
    Time(int minute, int hour, int day, int month, int year);
    Time(int time);
    
    // Advance minute by 1;
    void timeAdv();
    // advance time by input amount;
    void timeAdv(int timeDiff);

    // get time to schedule events
    int getTime();

    std::string getTimeFormated();
    

private:
    int minute_;
    int hour_;
    int day_;
    int year_;
    // this is time represented as an integer of minutes
    int time_;

    // stores formated string
    std::string timeFormated_;

};

#endif // TIME_H
