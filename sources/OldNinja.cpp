#include "OldNinja.hpp"
#include "Character.hpp"

namespace ariel {
    // constructors
    OldNinja::OldNinja(){
        this->setHP(150);
        this->setSpeed(8);
    }
    OldNinja::OldNinja(std::string name, Point location) :  Ninja(name, location) {
        this->setHP(150);
        this->setSpeed(8);
    }
}