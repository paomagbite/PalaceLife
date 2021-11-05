#pragma once
#ifndef VITAE_SRC_ACTOR_H
#define VITAE_SRC_ACTOR_H

#include <vector>

#include "actor_input.h"

class Action;



class Actor {
public:
    Actor(Time* time) : needs(time), input(time, &needs) { 
        //input = new AiInput(time, &needs);
    }
    void addAction(Action* action);
    
    void update() {
        input.update();
        needs.update();
    }

    Action* curAction;

    Needs needs;
    AiInput input;
private:

};

#endif
