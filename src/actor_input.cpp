#include "actor_input.h"

AiInput::AiInput(Time* time, Needs* needs) {
    this->time_ = time;
    this->needs_ = needs;
    this->currentAction = new EmptyAction; 
}

void AiInput::update() {
    if (!currentAction->getStatus()) {
        std::cout << "I'm working!\n" ;
        float hunger = needs_->hunger;
        float energy = needs_->energy;
        if (needs_->hunger < 10.f) {
            currentAction = new Eat(time_, needs_); 
        }
        else if (needs_->energy < 5.f) {
            currentAction = new Sleep(time_, needs_);
        }
    }
    else {
        if (currentAction->endTime == time_->getTime()) {
            currentAction->run();
            }
    }
}
