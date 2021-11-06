/*
 *
 */

#pragma once
#ifndef VITAE_SRC_ACTiON_NEEDS_H
#define VITAE_SRC_ACTION_NEEDS_H

#include "action.h"

// eat action, satiate hunger. Simplistic now
class Eat : public Action {
public:
    Eat();

    ~Eat() override {};

    void run(Actor* actor) override;

    int durationMin = 30;

}; 

class Sleep : public Action {
public:
    Sleep();

    ~Sleep() override {};
    
    // run requires pointer to needs to operate
    void run(Needs* needs);

    int durationMin = 400;

};

#endif // VITAE_SRC_ACTION_NEEDS
