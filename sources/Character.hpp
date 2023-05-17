#ifndef CHARACTER_H
#define CHARACTER_H

#include "Point.hpp"
#include <iostream>
#include <sstream>

namespace ariel {

    class Character {
        private:
            std::string name;
            Point location;
            int hp_;
        
        protected:
            // constructors
            Character();
            Character(std::string name, Point location);
        public:
            // destructor
            virtual ~Character();

            // character functions
            bool isAlive();
            double distance(Character *other);
            void hit(int damage);

            // getters
            std::string getName();
            Point getLocation();
            int getHP();

            // setters
            void setHP(int hp_);

            // toString
            virtual std::string print();
    };
}
#endif // CHARACTER_H