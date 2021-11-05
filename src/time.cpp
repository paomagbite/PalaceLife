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

std::string Time::getTimeFormated(){
    this->timeFormated_ = "";

    int timeTemp = time_;

    this->year_ = timeTemp / 525600;
    timeTemp = timeTemp % 525600;
    this->day_ = timeTemp / 1440;
    timeTemp = timeTemp % 1440;
    this->hour_ = timeTemp / 60;
    timeTemp = timeTemp % 60;
    this->minute_ = timeTemp;

    if (hour_ < 10) { timeFormated_ = "0" + std::to_string(hour_); }
    else { timeFormated_ = std::to_string(hour_); }
    timeFormated_ += ":";
    if (minute_ < 10) {timeFormated_ += "0" + std::to_string(minute_); }
    else { timeFormated_ += std::to_string(minute_); }

    return timeFormated_;
}
