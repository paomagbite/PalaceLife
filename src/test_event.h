
#pragma once
#ifndef VITAE_SRC_TEST_EVENT_H
#define VITAE_SRC_TEST_EVENT_H

#include "time.h"
#include "event.h"
#include "event_queue.h"

class TimeAdvEvent : public Event {
public:
    TimeAdvEvent(Time *time) {
        this->time_ = time;
    }

    void run() override {
        std::cout << "Time: " << this->time_->getTime() << "\n";
        this->time_->timeAdv();
    }

private:
    Time *time_;
};

class ScheduledEvent : public Event {
public:
    ScheduledEvent(Time *time, int time_till_event) {
        this->scheduledTime = time->getTime() + time_till_event;
    }
    void run() override {
        std::cout << "I'm the scheduled event at this time: " << scheduledTime << "\n";
    }

    int scheduledTime;
};

#endif // EVENT_QUEUE_H
