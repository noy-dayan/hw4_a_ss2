#include "Ninja.hpp"
#include "Character.hpp"

namespace ariel {
    // constructors
    Ninja::Ninja() {
        this->setHP(0);
        this->speed = 0;
    }
    Ninja::Ninja(std::string name, Point location) : Character(name, location) {
        this->setHP(0);
        this->speed = 0;
    }

    // ninja functions
    void Ninja::slash(Character *enemy){
        std::cout << "slash" << std::endl;
    }

    void Ninja::move(Character *enemy){
        std::cout << "move" << std::endl;
    }

    // getters
    int Ninja::getSpeed(){
        return this->speed;
    }

    // setters
    void Ninja::setSpeed(int speed){
        this->speed = speed;
    }

    // toString
    std::string Ninja::print() {
        return "N: " + Character::print();
    }
}