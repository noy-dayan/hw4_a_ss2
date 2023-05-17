#include "SmartTeam.hpp"

namespace ariel {
    // constructors
    SmartTeam::SmartTeam() {}
    SmartTeam::SmartTeam(Character *leader) {
        setLeader(leader);
        this->add(leader);

    }

    // smartteam functions
    void SmartTeam::attack(Team *enemy_team){
        std::cout << "SmartTeam attack" << std::endl;
    }

    void SmartTeam::print(){
        std::cout << "SmartTeam" << std::endl;
    }
}