#include "needs.h"

Needs::Needs(Time* time) {
    this->time_ = time;
    this->timeSinceLastUpdate_ = time->getTime();
    
    // inits all needs to full
    this->hunger = 100.f;
    this->energy = 100.f;
}

void Needs::update() {
    int timePassed = time_->getTime() - timeSinceLastUpdate_;

    // takes away the needs that have not been proccessed
    this->hunger -= 0.3125 * timePassed;
    this->energy -= 0.1041 * timePassed;
        
    this->timeSinceLastUpdate_ = time_->getTime();
    std::cout << "Hunger is: " << this->hunger << " and Energy is: " << this->energy << "\n";
}
