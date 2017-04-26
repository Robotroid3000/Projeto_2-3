#include "point.h"
#include <math.h>
#include <iostream>

using namespace std;

Point::Point(float mx, float my){
  x = mx;
  y = my;
}

void Point::setX(float mx){
    x = mx;
}

void Point::setY(float my){
    y = my;
}
void Point::setXY(float mx, float my){
   x = mx;
   y = my;
}

float Point::getX(void){
    return x;
}

float Point::getY(void){
    return y;
}

Point Point::add(Point p1){
    Point p2;
    p2.x = x + p1.x;
    p2.y = y + p1.y;
    return(p2);
}

Point Point::sub(Point p1){
    Point p2;
    p2.x = x - p1.x;
    p2.y = y - p1.y;
    return(p2);
}

float Point::norma(Point p1){
    float m;
    m = sqrt((p1.x-x)*(p1.x-x)+(p1.y-y)*(p1.y-y));
    return(m);
}

Point Point::translada(float a, float b){
    Point p3;
    p3.x = x + a;
    p3.y = y + b;
    return(p3);
}

void Point::imprime(){
    cout << "(" << x << "," << y << ")" << endl;
}
