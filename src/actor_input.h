/* The ActorInput is the controller for behavior for every actor in the game
 * AiInput and PlayerInput will determine the actions possible to take
 * It should include all posible actions and should contain current action
 * the status of that action and its finishing time so the next input can be retrived
 * and acuated.
 *
 * Written by Dbeela
 * Date: 05/11/21
 * Version: 0.0.1
 */

#pragma once
#ifndef VITAE_SRC_CONTROLLER_H
#define VITAE_SRC_CONTROLLER_H

#include <vector>

#include "action.h"
#include "action_needs.h"
#include "world.h"

//Base interface for actor behavior
class ActorInput {
public:
    virtual void update() = 0;
    
    Action* currentAction;
    // std::vector<Action*> actionQueue; // i want to use this instead as it may offer more versatility...
    
private:
    bool actionStatus_;

};

class AiInput : public ActorInput {
public:
    AiInput(Time* time, Actor* actor);

    void update();

private:
    Time* time_;
    Actor* actor_;
    Action* destination_;

    std::vector<Location*> pathToAction_;
};

#endif // VITAE_SRC_CONTROLLER_H
