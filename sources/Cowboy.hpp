#ifndef COWBOY_H
#define COWBOY_H

#include "Character.hpp"

namespace ariel {

    class Cowboy : public Character {
        private:
            int ammo;
            
        public:
            // constructors
            Cowboy();
            Cowboy(std::string name, Point location);

            // cowboy functions
            void shoot(Character *enemy);
            bool hasboolets();
            void relaod();

            // getters
            int getAmmo();

            // toString
            std::string print() override;

    };
}
#endif // COWBOY_H