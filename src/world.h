/*
 *
 */


#pragma once
#ifndef VITAE_SRC_WORLD_H
#define VITAE_SRC_WORLD_H

#include <vector>

#include "location.h"

class World {
public:
    World();

    std::vector<Location*> locations;
};


#endif // VITAE_SRC_WORLD_H
