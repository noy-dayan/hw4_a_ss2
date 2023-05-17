#ifndef YOUNGNINJA_H
#define YOUNGNINJA_H

#include "Ninja.hpp"

namespace ariel {

    class YoungNinja : public Ninja {
        public:
            // constructors
            YoungNinja();
            YoungNinja(std::string name, Point location);
    };
}
#endif // YOUNGNINJA_H