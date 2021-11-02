#pragma once
#ifndef COMPONENT_H
#define COMPONENT_H

//#include "typeId.h" // This will be unsued for now, entites will be given all components they need

class Component {
public:
    // should contain all component logic and be passed necessary args to complete necessary
    virtual void update() = 0;
};

/* This might be used but as for now it is unlikely
class Action : public Component{
public:
    virtual void update() = 0;
};
*/



#endif // COMPONENT_H
