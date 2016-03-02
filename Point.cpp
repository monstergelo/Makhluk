#include "Point.h"
//CTOR
Point::Point(int _x, int _y){
    x = _x;
    y = _y;
}

//CCTOR tidak perlu
//DTOR tidak perlu
//OPERATOR =
Point& Point::operator=(const Point& P){
    x = P.x;
    y = P.y;
    return *this;
}

//OPERATOR ==
bool Point::operator==(const Point& P){
    return ((P.x == x) && (P.y == y));
}

void Point::geser(int dx, int dy)
//Menggeser sebuah titik sebesar dx, dy
{
    x += dx;
    y += dy;
}
