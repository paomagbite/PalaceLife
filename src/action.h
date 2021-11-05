/* Action base class, meant for all actor actions possible to take
 * written by Dbeela
 * Date: 29/10/21
 * Version 0.0.2
 *
 */
#pragma once
#ifndef VITAE_SRC_ACTION_H
#define VITAE_SRC_ACTION_H

#include <vector>
#include <string>

#include "time.h"
#include "needs.h"

// base action class
class Action {
public:
    // this causes a lot of issues now...
    Action() {};
    // destructor to destroy the action, needed for memory I think
    virtual ~Action() {};
    // base update function, needs to be implmented for evey action
    virtual void run() = 0;

    int startTime;
    int endTime;
    int durationMin;

    // for internal checking purposes
    bool getStatus() {
        return statusDoing;
    }

    // for parser, if player sees npc do an action this word is insereted
    std::string verb;
    // describes action, with consequence printed too
    std::string desc;

protected:
    bool statusDoing = true;

};

class EmptyAction : public Action {
public:
    EmptyAction() {
        statusDoing = false;
    }

    ~EmptyAction() override {};

    void run() override {
        // empty for many reasons
    }
};


// eat action, satiate hunger. Simplistic now
class Eat : public Action {
public:
    Eat(Time* time, Needs* needs) {
        durationMin = 30;
        startTime = time->getTime();
        endTime = startTime + durationMin;
        this->needs_ = needs;
        std::cout << "====================Actor started eating\n"; 
    }

    ~Eat() override {};

    void run() override {
        this->needs_->hunger += 75.f;
        std::cout << "====================Actor finshed eating!\n";
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

    ~Sleep() override {};

    void run() override {
        this->needs_->energy = 100;
        std::cout << "=================Actor finshed sleeping\n";
        statusDoing = false;
    }

    
    
private:
    Needs* needs_;
};

#endif
