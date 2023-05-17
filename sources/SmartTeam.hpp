
#ifndef SMARTTEAM_H
#define SMARTTEAM_H

#include "Team.hpp"

namespace ariel {

    class SmartTeam : public Team {          
        public:
            // constructors
            SmartTeam();
            SmartTeam(Character *leader);

            // smartteam functions
            void attack(Team *enemy_team) override;
            void print() override;
    };
}
#endif // SMARTTEAM_H