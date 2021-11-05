#include "event_queue.h"

EventQueue::EventQueue() {

}

// executes the next event and takes it out of the que
void EventQueue::nextEvent() {
    if (!event_queue.size()) {
        return;
    }
    event_queue[0]->run();
    event_queue.erase(event_queue.begin());
}

// adds new event to the queue
void EventQueue::addEvent(Event* event) {
    event_queue.push_back(event);
}
// adds scheduled event not in use currently
/*
void EventQueue::addEvent(ScheduledEvent* event) {
    event_queue.push_back(event);
    this->orderEvent_();
}
*/

// void EventQueue::removeEvent() {}

