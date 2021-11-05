#pragma once
#ifndef VITAE_SRC_ACTOR_H
#define VITAE_SRC_ACTOR_H

#include <vector>

#include "action.h"
#include "needs.h"


class Action;



class Actor {
public:
    Actor(Time* time);
    void addAction(Action* action);

    Action* curAction;

    Needs needs;
private:

};

#endif
