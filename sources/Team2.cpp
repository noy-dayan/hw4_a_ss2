#include "Team2.hpp"

namespace ariel {
    // constructors
    Team2::Team2() {}
    Team2::Team2(Character *leader) {
        setLeader(leader);
        this->add(leader);

    }

    // team2 functions
    void Team2::attack(Team *enemy_team){
        std::cout << "Team2 attack" << std::endl;
    }

    void Team2::print(){
        std::cout << "Team2" << std::endl;
    }
}