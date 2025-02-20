#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        Point(float x, float y);
        Point(Point const& src);
        Point& operator=(Point const& obj);
        ~Point();

        const Fixed getX() const;
        const Fixed getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif