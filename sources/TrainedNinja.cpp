#include "TrainedNinja.hpp"
#include "Character.hpp"

namespace ariel {
    // constructors
    TrainedNinja::TrainedNinja(){
        this->setHP(120);
        this->setSpeed(12);
    }
    
    TrainedNinja::TrainedNinja(std::string name, Point location) :  Ninja(name, location) {
        this->setHP(120);
        this->setSpeed(12);
    }
}