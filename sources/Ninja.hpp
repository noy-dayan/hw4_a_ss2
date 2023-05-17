#ifndef NINJA_H
#define NINJA_H

#include "Character.hpp"

namespace ariel {

    class Ninja : public Character {
        private:
            int speed;
        protected:
            // constructors
            Ninja();
            Ninja(std::string name, Point location);
            
        public:
            // ninja functions
            void move(Character *enemy);
            void slash(Character *enemy);

            // getters
            int getSpeed();

            // setters
            void setSpeed(int speed);

            // toString
            std::string print() override;
            
    };
}
#endif // NINJA_H