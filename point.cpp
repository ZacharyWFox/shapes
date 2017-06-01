#include "point.hpp"

using namespace std;

void setF (float& val, float x){
    val = x >= 0 ? x : 0;
}

Point::Point(float X, float Y){
    setX(X);
    setY(Y);
}

float Point::getX(){
    return X;
}

float Point::getY(){
    return Y;
}

void Point::setX(float x){
    setF(X, x);
}

void Point::setY(float y){
    setF(Y, y);
}