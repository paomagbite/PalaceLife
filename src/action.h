
#pragma once
#ifndef VITAE_SRC_ACTION_H
#define VITAE_SRC_ACTION_H

#include <vector>

// base action class, has virtual run(), and a start and end time for the action
class Action {
public:
    virtual void run() = 0;

    int startTime;
    int endTime;
    int durationMin;

};

#endif
