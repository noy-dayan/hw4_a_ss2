
#ifndef TEAM2_H
#define TEAM2_H

#include "Team.hpp"

namespace ariel {

    class Team2 : public Team {          
        public:
            // constructors
            Team2();
            Team2(Character *leader);

            // team2 functions
            void attack(Team *enemy_team) override;
            void print() override;
    };
}
#endif // TEAM2_H