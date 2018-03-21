#ifndef Rectangle_hh
#define Rectangle_hh


#include "Point.hh"


/** The Rectangle class stores a rectilinear rectangle
    and provides some usefull operations for it.

        +-------------+ UR
        |             |
        |             |  height ↕
        |             |
    LL  +-------------+
             width
               ⟷
*/

class Rectangle {

public:

    /** Constructor: creates a rectangle with its LL at p and width w and height h.
        The LL point p is optional and defaults to (0,0).
        Precondition: w ≥ 0, h ≥ 0. */
    Rectangle (double w=0, double h=0, const Point& p=Point(0,0));

    /** Gets the LL (lower-left) point of this rectangle. */
    Point get_LL () const;

    /** Gets the UR (upper-right) point of this rectangle. */
    Point get_UR () const;

    /** Returns the width of this rectangle. */
    double width () const;

    /** Returns the height of this rectangle. */
    double height () const;

    /** Returns the area of this rectangle. */
    double area () const;

    /** Scales this rectangle with a factor s >= 0. */
    void scale (double s);

    /** Moves the LL of this rectangle to some point p. */
    void move_to (const Point& p);

    /** Compares this rectangle to rectangle r. */
    bool operator== (const Rectangle& r) const;

    /** Compares this rectangle to rectangle r. */
    bool operator!= (const Rectangle& r) const;

    /** Intersects this rectangle with another rectangle. */
    Rectangle& operator*= (const Rectangle& r);

    /** Returns the intersection of this rectangle with another rectangle. */
    Rectangle operator* (const Rectangle& r) const;

    /** Rotates this rectangle 90 degrees clockwise or counterclockwise around its LL point. */
    void rotate (bool clockwise=true);

    /** Horizontally flips this rectangle around its LL point.*/
    void flip_hor ();

    /** Vertically flips this rectangle around its LL point.*/
    void flip_ver ();

    /** Check whether point p is contained in this rectangle. */
    bool contains (const Point& p) const;

    /** Check whether rectangle r is fully contained in this rectangle. */
    bool contains (const Rectangle& r) const;

private:

    /** The coordinates of the LL point. */
    Point p;

    /** The width of this rectangle. */
    double w;

    /** The height of this rectangle. */
    double h;

};


#endif
