#pragma once
#include "point.hpp"

class Circle{

    float radius;
  public:
    Point point;
    // Circle(Point, float);
    // Circle(float, float, float);
    Circle(Point p, float radius);
    Circle(float x, float y, float radius);

    float getRadius();
    void setRadius(float radius);

};