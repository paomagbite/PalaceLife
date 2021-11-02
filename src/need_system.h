/*
 *
 */

#pragma once
#ifndef NEED_SYSTEM_H
#define NEED_SYSTEM_H

#include "component.h"
#include "actor.h"

// Holds needs value for the system
struct Needs {
    // Needs range 0-100, 0 being statisfied 100 being need it now
    float hunger;
    float sleep;
};

class NeedSystem : public Component {
public:
    NeedSystem();
    void update(Actor& actor);


private:
    Needs *needs_;
};

#endif // NEED_SYSTEM_H
