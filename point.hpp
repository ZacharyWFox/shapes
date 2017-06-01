#pragma once

using namespace std;

class Point{
  private:
    float X;
    float Y;

  public:
    Point(float, float);
    float getX();
    float getY();
    void setX(float);
    void setY(float);
};