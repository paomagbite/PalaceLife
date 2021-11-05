
#pragma once
#ifndef VITAE_SRC_NEED_ACTION_H
#define VITAE_SRC_NEED_ACTION_H
/*
#include <iostream>

#include "time.h"
#include "action.h"
#include "needs.h"

// eat action, satiate hunger. Simplistic now
class Eat : public Action {
public:
    Eat(Time* time, Needs* needs) {
        durationMin = 30;
        startTime = time->getTime();
        endTime = startTime + durationMin;
        this->needs_ = needs;
        std::cout << "Actor started eating\n"; 

    }


    void run() override {
        this->needs_->hunger += 75.f;
        std::cout << "Actor finshed eating!\n";
        statusDoing = false;
    }

private:
    Needs* needs_;

};

class Sleep : public Action {
public:
    Sleep(Time* time, Needs* needs) {
        durationMin = 480; //rudimoentary for now but this makes the character sleep for 8 hours
        startTime = time->getTime();
        endTime = startTime + durationMin;
        this->needs_ = needs;
        
        std::cout << "=================Actor started sleeping\n";

    }


    void run() override {
        this->needs_->energy = 100;
        std::cout << "=================Actor finshed sleeping\n";
        statusDoing = false;
    }
    
private:
    Needs* needs_;
};
*/
#endif
