#ifndef Circle_hh
#define Circle_hh


#include "Point.hh"


/** The Circle class stores a circle and provides some usefull operations for it. */

class Circle {

public:

    /** Constructor. Creates a circle with a center c and a radius r.
        The center point c is optional and defaults to (0,0).
        Precondition: r ≥ 0. */
    Circle (double r=0, const Point& c=Point(0,0));

    /** Gets the center of this circle. */
    Point center () const;

    /** Gets the radius of this circle. */
    double radius () const;

    /** Returns the area of this circle. */
    double area () const;

    /** Compares this circle to circle c. */
    bool operator== (const Circle& c) const;

    /** Compares this circle to circle c. */
    bool operator!= (const Circle& c) const;

    /** Scales this circle with a factor s >= 0. */
    void scale (double s);

    /** Moves the center of this circle to some point. */
    void move_to (const Point& p);

    /** Check whether point p is contained in this circle. */
    bool contains (const Point& p) const;

    /** Check whether circle c is fully contained in this circle. */
    bool contains (const Circle& c) const;

private:

    /** Fill yourself !!! **/

};


#endif
