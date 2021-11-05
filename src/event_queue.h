/* Event queue header
 * Contain the functionality of the event queue which is fundamental to the gameloop
 *
 * Written by: Dbeela
 * Date: 01/11/21
 * Version 0.0.1
 *
 */
#pragma once
#ifndef VITAE_SRC_EVENT_QUEUE_H
#define VITAE_SRC_EVENT_QUEUE_H

#include <vector>

#include "event.h"
#include "test_event.h"

class EventQueue {
public:
    EventQueue();


    std::vector<Event*> event_queue;

    void nextEvent();

    void addEvent(Event* event);
    void addEvent(ScheduledEvent* event);
    //void removeEvent(); // i am not sure how to implemnnt this
                          // so it removes the desired event in case it is needed
};
#endif // EVENT_QUEUE_H
