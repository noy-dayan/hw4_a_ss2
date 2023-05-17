#ifndef POINT_H
#define POINT_H

#include <iostream>

namespace ariel {

    class Point {
        private:
            double _x_, _y_;
            
        public:
            // constructors
            Point();
            Point(double _x_, double _y_);
            
            // point functions
            Point moveTowards(Point src, Point dest, double dist);
            double distance(Point other);

            // getters
            double getX();
            double getY();

            // toString
            void print();
    };
}
#endif // POINT_H