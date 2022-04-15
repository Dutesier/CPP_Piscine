#include "Point.hpp"

Point::Point()
        : x(Fixed(0))
        , y(Fixed(0))
{}

Point::Point(const float new_x, const float new_y)
        : x(Fixed(new_x))
        , y(Fixed(new_y))
{}

Point::Point(const Point& original)
        : x(original.x)
        , y(original.y)
{}

Point& Point::operator=(const Point& original) {
    Point temp (original);

    return (temp);
}

const Fixed& Point::getX() const{
    return (x);
}

const Fixed& Point::getY() const{
    return (y);
}