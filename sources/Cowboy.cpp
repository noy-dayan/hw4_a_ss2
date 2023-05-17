#include "Cowboy.hpp"
#include "Character.hpp"

namespace ariel {
    // constructors
    Cowboy::Cowboy() : ammo(6){
        this->setHP(110);
    }
    Cowboy::Cowboy(std::string name, Point location) : Character(name, location), ammo(6) {
        this->setHP(110);
    }

    // cowboy functions
    void Cowboy::shoot(Character *enemy){
        if (hasboolets())
            this->ammo -= 1;
        std::cout << "shoot" << std::endl;
    }

    bool Cowboy::hasboolets(){
        if(this->ammo > 0)
            return true;
        else
            return false;
    }

    void Cowboy::relaod(){
        this->ammo = 6;
        std::cout << "reload" << std::endl;
    }

    // getters
    int Cowboy::getAmmo(){
        return this->ammo;
    }

    // toString
    std::string Cowboy::print() {
        return "C: " + Character::print();
    }
}