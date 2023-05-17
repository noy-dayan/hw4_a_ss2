#ifndef OLDNINJA_H
#define OLDNINJA_H

#include "Ninja.hpp"

namespace ariel {

    class OldNinja : public Ninja {
        public:
            // constructors
            OldNinja();
            OldNinja(std::string name, Point location);
    };
}
#endif // OLDNINJA_H