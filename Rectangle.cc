#include "Rectangle.hh"

#include <cassert>
using namespace std;


/** Constructor. */
Rectangle::Rectangle (double w, double h, const Point& p)
:   p(p),
    w(w),
    h(h)
{
    assert(w >= 0);
    assert(h >= 0);
}


/** Gets the LL (lower-left) point of this rectangle. */
Point Rectangle::get_LL () const {
    return p;
}


/** Gets the UR (upper-right) point of this rectangle. */
Point Rectangle::get_UR () const {
    return Point(p.get_x() + w, p.get_y() + h);
}


/** Gets the area of this rectangle. */
double Rectangle::area () const {
    return w * h;
}


/** Gets the width of this rectangle. */
double Rectangle::width () const {
    return w;
}


/** Gets the height of this rectangle. */
double Rectangle::height () const {
    return h;
}


// ***********************************************************
// Implement the rest of the Rectangle methods by yourself !!!
// ***********************************************************


