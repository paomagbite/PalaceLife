/*
 *
 */

#pragma once
#ifndef VITAE_SRC_NEEDS_H
#define VITAE_SRC_NEEDS_H

#include <iostream>

#include "component.h"
#include "time.h"

class Needs /*: public Component */{
public:
    Needs(Time* time);
    void update();


    // not sure if these varibles will be private or not yet
    // 0 means empty, 100 means full
    float hunger;
    float energy;
private:
    int timeSinceLastUpdate_;
    Time* time_;
};

#endif // VITAE_SRC_NEEDS_H
