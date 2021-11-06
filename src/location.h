/*
 *
 */
#pragma once
#ifndef VITAE_SRC_LOCATION_H
#define VITAE_SRC_LOCATION_H

#include <algorithm>
#include <vector>
#include <string>

#include "action.h"
#include "actor.h"

// class for locations, contains links to other locations, and action pools for the input sytem to use
class Location {
public:
    Location();
    
    // adds/remove a linked location
    void addLink(Location* location);
    void removeLink(Location* location);

    // adds/remove a action to the action pool
    template <class C>
    void addAction(C* action);
    template <class C>
    void removeAction(C* action);
    
    void addActor(Actor* actor);
    void removeActor(Actor* actor);

    void getActor(int actorID);

    // contains all actors presently in the location
    std::vector<Actor*> actorsPresent;
    // contains all the links to locations this location are connected to 
    std::vector<Location*> links;
    // contains the pool of actions that this location has
    std::vector<Action*> actions;

    std::string desc;
    
    static int locationID;

    
};

int Location::locationID = -1;

#endif // VITAE_SRC_LOCATION_H
