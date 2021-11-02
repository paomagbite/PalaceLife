#pragma once
#ifndef ACTOR_H
#define ACTOR_H

#include <vector>

#include "action.h"

class Action;

class Actor {
public:
    void addAction();

private:
    std::vector<Action> actionQueue;

};

#endif
