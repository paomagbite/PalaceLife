#include "world.h"

// I suspect that this constructor will be huge, a way to abstract the init will
// have to be made at a later stage to make it more manageable
World::World() {
    locations.push_back(new Location);
    locations.push_back(new Location);
    locations.push_back(new Location);
    locations.push_back(new Location);

    locations[0]->desc = "Null location";
    locations[1]->desc = "Eating Location";
    locations[2]->desc = "Pass thorugh location";
    locations[3]->desc = "Sleeping location";

    locations[1]->addLink(locations[2]);
    locations[2]->addLink(locations[1]);

    locations[2]->addLink(locations[3]);
    locations[3]->addLink(locations[2]);

    locations[1]->addAction(new Eat);
    locations[3]->addAction(new Sleep);

}


