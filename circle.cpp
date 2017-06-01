#include "point.hpp"
#include "circle.hpp"

using namespace std;

Circle::Circle(Point p, float radius): 
    point(p), radius(radius) {}

Circle::Circle(float x, float y, float radius): 
    point(Point(x, y))
{
    // this -> point = new Point(x, y);
    this->radius = radius;
}

// float getRadius() { return radius; }

void Circle::setRadius(float radius)
{
    this->radius = radius > 0 ? radius : 0;
}