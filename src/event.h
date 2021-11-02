/* Event.h header, the event interfae will be the core of all events in Palace life
 * Meant to be easily identifiable and usable
 * Possible to prioritise events based on their cuntion and purpose through typeID's
 *
 * Written by: Dbeela
 * Date 01/11/21
 * Version: 0.0.1
 *
 */

#ifndef EVENT_H
#define EVENT_H

#include <iostream>

#include "time.h"

enum priority { primary, secondary, trietiary };

class Event {
public:
    priority prio;
    virtual void run() = 0; 
    //int typeId; //This is yet to be decided upon, maybe this will be necessary
    //
    //int prioType;
    //int timePoint; // this will hold a time stamp so the event can be scheduled accodringly 
};



#endif //EVENT_H
