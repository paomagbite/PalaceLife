#include "action_needs.h"

// implements eat action functions
Eat::Eat() {

}

void run(Actor* actor) {
    actor->needs.hunger += 75.f;
    std::cout << "====================Actor finshed eating!\n";
    
}

Sleep::Sleep() {

}

void Sleep::run(Needs* needs) {
    needs->energy = 100;
    std::cout << "=================Actor finshed sleeping\n";
}
