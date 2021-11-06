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
#include "actor.h"

// base action class
class Action {
public:
    // this causes a lot of issues now...
    Action() {};
    // destructor to destroy the action, needed for memory I think
    virtual ~Action() {};
    // base update function, needs to be implmented for evey action
    virtual void run(Actor* actor) = 0;

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

#endif
