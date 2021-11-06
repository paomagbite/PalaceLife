#pragma once
#ifndef VITAE_SRC_ACTOR_H
#define VITAE_SRC_ACTOR_H

#include <vector>

#include "actor_input.h"
#include "location.h"

class Action;



class Actor {
public:
    Actor(Time* time) : needs(time), input(time, &needs) { 
        //input = new AiInput(time, &needs);
        actorID_ = ActorCountID_++;
    }
    void addAction(Action* action);
    
    void update() {
        input.update();
        needs.update();
    }

    int getID() {
        return actorID_;
    }

    Action* curAction;

    Needs needs;
    AiInput input;

    // pointer to the current location
    Location* curLocation;
private:
    static int ActorCountID_;
    int actorID_;

};

int Actor::ActorCountID_ = 0;



#endif
