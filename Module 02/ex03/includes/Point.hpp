#ifndef __POINT_HPP__
# define __POINT_HPP__

# include "Fixed.hpp"

class Point {
public:
    Point();
    Point(const float new_x, const float new_y);
    Point(const Point& original);
    Point operator=(const Point& original);
    ~Point();
    /*We can include our own members here*/
    const Fixed& getX() const;
    const Fixed& getY() const;
private:
    const Fixed x;
    const Fixed y;
    /*We can include our own members here*/

};

#endif