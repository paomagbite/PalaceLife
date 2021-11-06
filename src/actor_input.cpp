#include "actor_input.h"

AiInput::AiInput(Time* time, Actor* actor) {
    this->time_ = time;
    this->actor_ = actor
    this->currentAction = actor->curAction;
}

void AiInput::update() {
    if (!currentAction->getStatus()) {
        std::cout << "I'm working!\n" ;
        if (actor_->needs.hunger < 10.f) {
            currentAction = new Eat(time_, actor_->needs); 
        }
        else if (actor_->needs.energy < 5.f) {
            currentAction = new Sleep(time_, actor_->needs);
        }
    }
    else {
        if (currentAction->endTime == time_->getTime()) {
            currentAction->run();
            }
    }
}
