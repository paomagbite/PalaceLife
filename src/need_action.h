
#pragma once
#ifndef VITAE_SRC_NEED_ACTION_H
#define VITAE_SRC_NEED_ACTION_H

#include <iostream>

#include "time.h"
#include "action.h"
#include "actor.h"

// eat action, satiate hunger. Simplistic now
class Eat : public Action {
public:
    Eat(Time* time, Actor* actor ) {
        durationMin = 30;
        startTime = time->getTime();
        endTime = startTime + durationMin;
        this->actor = actor;
        this->actor->curAction = this;
        std::cout << "Actor started eating\n"; 

    }


    void run() override {
        this->actor->needs.hunger += 75.f;
        std::cout << "Actor finshed eating!\n";
    }

    Actor* actor;

};

class Sleep : public Action {
public:
    Sleep(Time* time, Actor* actor) {
        durationMin = 480; //rudimoentary for now but this makes the character sleep for 8 hours
        startTime = time->getTime();
        endTime = startTime + durationMin;
        this->actor = actor;
        this->actor->curAction = this;
        
        std::cout << "=================Actor started sleeping\n";

    }


    void run() override {
        this->actor->needs.energy = 100;
        std::cout << "=================Actor finshed sleeping\n";
    }
    Actor* actor;
};

#endif
