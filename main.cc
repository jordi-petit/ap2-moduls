#include <iostream>
#include <string>
#include <map>
#include <cassert>
using namespace std;

#include "Point.hh"
#include "Rectangle.hh"
#include "Circle.hh"


// ************************************************************************************


void point_def (map<string, Point>& points) {
    string name;
    double x, y;
    cin >> name >> x >> y;
    points[name] = Point(x, y);
}


void point_copy (map<string, Point>& points) {
    string name1, name2;
    cin >> name1 >> name2;
    points[name1] = points[name2];
}


void point_get_x (map<string, Point>& points) {
    string name;
    cin >> name;
    cout << points[name].get_x() << endl;
}


void point_get_y (map<string, Point>& points) {
    string name;
    cin >> name;
    cout << points[name].get_y() << endl;
}


void point_radius (map<string, Point>& points) {
    string name;
    cin >> name;
    cout << points[name].radius() << endl;
}


void point_angle (map<string, Point>& points) {
    string name;
    cin >> name;
    cout << points[name].angle() << endl;
}


void point_distance (map<string, Point>& points) {
    string name1, name2;
    cin >> name1 >> name2;
    cout << points[name1].distance(points[name2]) << endl;
}


void point_eq (map<string, Point>& points) {
    string name1, name2;
    cin >> name1 >> name2;
    cout << (points[name1] == points[name2]) << endl;
}


void point_ne (map<string, Point>& points) {
    string name1, name2;
    cin >> name1 >> name2;
    cout << (points[name1] != points[name2]) << endl;
}


void point_add (map<string, Point>& points) {
    string name1, name2;
    cin >> name1 >> name2;
    points[name1] += points[name2];
}


// ************************************************************************************


void rect_def (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_copy (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_get_LL (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_get_UR (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_width (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_height (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_area (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_scale (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_move_to (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_eq (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_ne (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_intersec (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_rotate (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_flip_hor (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_flip_ver (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_contains_point (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


void rect_contains_rect (map<string, Point>& points, map<string, Rectangle>& rects) {
    // Implement me !!!
}


// ************************************************************************************


int main () {
    map<string, Point> points;
    map<string, Rectangle> rects;

    string action;
    while (cin >> action) {
             if (action == "point_def")             point_def(points);
        else if (action == "point_copy")            point_copy(points);
        else if (action == "point_get_x")           point_get_x(points);
        else if (action == "point_get_y")           point_get_y(points);
        else if (action == "point_radius")          point_radius(points);
        else if (action == "point_angle")           point_angle(points);
        else if (action == "point_distance")        point_distance(points);
        else if (action == "point_eq")              point_eq(points);
        else if (action == "point_ne")              point_ne(points);
        else if (action == "point_add")             point_add(points);

        else if (action == "rect_def")              rect_def(points, rects);
        else if (action == "rect_copy")             rect_copy(points, rects);
        else if (action == "rect_get_LL")           rect_get_LL(points, rects);
        else if (action == "rect_get_UR")           rect_get_UR(points, rects);
        else if (action == "rect_width")            rect_width(points, rects);
        else if (action == "rect_height")           rect_height(points, rects);
        else if (action == "rect_area")             rect_area(points, rects);
        else if (action == "rect_scale")            rect_scale(points, rects);
        else if (action == "rect_move_to")          rect_move_to(points, rects);
        else if (action == "rect_eq")               rect_eq(points, rects);
        else if (action == "rect_ne")               rect_ne(points, rects);
        else if (action == "rect_intersec")         rect_intersec(points, rects);
        else if (action == "rect_rotate")           rect_rotate(points, rects);
        else if (action == "rect_flip_hor")         rect_flip_hor(points, rects);
        else if (action == "rect_flip_ver")         rect_flip_ver(points, rects);
        else if (action == "rect_contains_point")   rect_contains_point(points, rects);
        else if (action == "rect_contains_rect")    rect_contains_rect(points, rects);

        else assert(false);

        /** Extend for Circle !!! **/
    }
}
