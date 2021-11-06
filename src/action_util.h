
#pragma once
#ifndef VITAE_SRC_ACTION_UTIL_H
#define VITAE_SRC_ACTION_UTIL_H

#include <vector>
#include <string>

#include "action.h"


class EmptyAction : public Action {
public:
    EmptyAction() {
        statusDoing = false;
    }

    ~EmptyAction() override {};

    void run(Actor* actor) override {
        // empty for many reasons
    }
};

class MoveActor : public Action {
public:
    void run(Actor* actor) override {
    }
};

#endif // VITAE_SRC_ACTION_UTIL_H
