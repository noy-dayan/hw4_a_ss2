#include "YoungNinja.hpp"
#include "Character.hpp"

namespace ariel {
    // constructors
    YoungNinja::YoungNinja(){
        this->setHP(100);
        this->setSpeed(14);
    }
    
    YoungNinja::YoungNinja(std::string name, Point location) :  Ninja(name, location) {
        this->setHP(100);
        this->setSpeed(14);
    }
}