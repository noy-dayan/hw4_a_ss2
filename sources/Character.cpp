#include "Character.hpp"
#include <typeinfo>
namespace ariel {
    // constructors & destructor
    Character::Character() : name("NULL"), location(Point{0, 0}), hp_(0){}
    Character::Character(std::string name, Point location) : name(name), location(location), hp_(0) {}
    Character::~Character() = default;

    // character functions
    bool Character::isAlive(){
        return true;
    }

    double Character::distance(Character *other){
        return 1.0;
    }

    void Character::hit(int damage){
        std::cout << "hit" << std::endl;
    }

    // getters
    std::string Character::getName(){
        return this->name;
    }

    Point Character::getLocation(){
        return Point{0, 0};
    }

    int Character::getHP(){
        return this->hp_;
    }

    // setters
    void Character::setHP(int hp){
        this->hp_ = hp;
    }

    // toString
    std::string Character::print(){
        std::stringstream ss;
        ss << "Name: " << this->name << " | HP: " << this->hp_ << " | Location: (" << this->location.getX() << "," << this->location.getY() << ")";
        return ss.str();
    }
}