#include "location.h"

//not sure on how to implement this one yet
Location::Location() {

}

void Location::addLink(Location* location) {
    this->links.push_back(location);
}

void Location::removeLink(Location* location) {
    this->links.erase(std::remove(this->links.begin(), this->links.end(), location));
}

// template used to accept any type of action
template <class C>
void Location::addAction(C* action) {
    this->actions.push_back(action);
}

// i suspect that I get errors when I use this function.
template <class C>
void Location::removeAction(C* action) {
    this->actions.erase(std::remove(this->actions.begin(), this->actions.end(), action));
}

void Location::addActor(Actor* actor) {
    this->actorsPresent.push_back(actor);
}

void Location::removeActor(Actor* actor) {
    this->actorsPresent.erase(std::remove(this->actorsPresent.begin(), this->actorsPresent.end(), actor));
}

// not sure how to use this function and what i will do with it
// but I have a feeling it will be useful...
void Location::getActor(int actorID) {
    for (int i = 0; i < actorsPresent.size(); i++) {
        if (actorsPresent[i]->getID() == actorID) {
            return;
        }
    }
}
