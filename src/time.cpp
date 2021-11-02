#include "time.h"

Time::Time(int minute, int hour, int day, int month, int year) {
    
   this->minute_ = minute;
   this->hour_ = hour;
   this->day_ = day;
   this->year_ = year;

   this->time_ = year * 525600 + day * 1440 + minute;
}

Time::Time(int time_in_minutes) {
         this->time_ = time_in_minutes;

         this->year_ = time_in_minutes / 525600;
         time_in_minutes = time_in_minutes % 525600;
         this->day_ = time_in_minutes / 1440;
         time_in_minutes = time_in_minutes % 1440;
         this->hour_ = time_in_minutes / 60;
         time_in_minutes = time_in_minutes % 60;
         this->minute_ = time_in_minutes;
     }

void Time::timeAdv() {
        time_++;
}

void Time::timeAdv(int timeDiff) {
    this->time_ += timeDiff;
}

int Time::getTime() {
    return time_;
}
