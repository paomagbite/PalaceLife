#include "event_queue.h"

EventQueue::EventQueue() {

}

void EventQueue::nextEvent() {
    event_queue[0]->run();
    event_queue.erase(event_queue.begin());
}

void EventQueue::addEvent(Event* event) {
    this->orderEvent_();
}

void EventQueue::addEvent(ScheduledEvent* event) {
    event_queue.push_back(event);
    this->orderEvent_();
}

// void EventQueue::removeEvent() {}

void EventQueue::orderEvent_() {
        std::sort(event_queue.begin(), event_queue.end(), sort_events());
}
