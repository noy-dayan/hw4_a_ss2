#include "Point.hpp"

namespace ariel {
    // constructors
    Point::Point() : _x_(0), _y_(0) {}
    Point::Point(double _x_, double _y_) : _x_(_x_), _y_(_y_) {} 

    // point gunctions
    double Point::distance(Point other) {
        return 1.0;
    }

    Point Point::moveTowards(Point src, Point dest, double dist){
        return Point{0, 0};
    }

    // getters
    double Point::getX() {
        return this->_x_;
    }    
    
    double Point::getY() {
        return this->_y_;
    }   

    // toString
    void Point::print(){
        std::cout << "point" << std::endl;
    }


}