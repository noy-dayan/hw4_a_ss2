#ifndef TRAINEDNINJA_H
#define TRAINEDNINJA_H

#include "Ninja.hpp"

namespace ariel {

    class TrainedNinja : public Ninja {
        public:
            // constructors
            TrainedNinja();
            TrainedNinja(std::string name, Point location);
    };
}
#endif // TRAINEDNINJA_H