
#ifndef TEAM_H
#define TEAM_H

#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "OldNinja.hpp"
#include "Cowboy.hpp"
#include <vector>
#include <iostream>

namespace ariel {

    class Team {
        private:
            Character *leader;
            std::vector<Character *> warriors;
            
        public:
            // constructors & destructor 
            Team();
            Team(Character *leader);
            virtual ~Team();

            // team functions
            void add(Character *warrior);
            virtual void attack(Team *enemy_team);
            int stillAlive();
            
            // getters
            Character *getLeader();

            // setters
            void setLeader(Character *leader);

            // toString
            virtual void print();


    };
}
#endif // TEAM_H