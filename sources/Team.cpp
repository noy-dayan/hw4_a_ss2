#include "Team.hpp"

namespace ariel {
    // constructors & destructor 
    Team::Team() : leader(nullptr) {}
    Team::Team(Character *leader) {
        this->leader = leader;
        this->add(leader);
    }
    Team::~Team() {
        for(size_t i = 0; i < warriors.size(); i++){
            std::cout << warriors[i]->print() << std::endl;
            delete warriors[i];
        }
    }

    // team functions
    void Team::add(Character *warrior){
        this->warriors.push_back(warrior);
    }

    void Team::attack(Team *enemy_team){
        std::cout << "Team attack" << std::endl;
    }

    int Team::stillAlive(){
        //return this->warriors.size();
        return 0; 
    }

    // getters
    Character *Team::getLeader(){
        return this->leader;
    }

    // setters
    void Team::setLeader(Character *leader){
        this->leader = leader;
    }

    // toString
    void Team::print(){
        std::cout << "Team" << std::endl;
    }
}