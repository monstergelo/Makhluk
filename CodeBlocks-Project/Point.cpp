#include "Point.h"
#include <random>

std::random_device acak;
std::mt19937 mt1(acak());

//CTOR
Point::Point(int range) {
    std::uniform_int_distribution<int> distance(0, (range-1));
    int sumbuX = distance(mt1);
    int sumbuY = distance(mt1);
    x = sumbuX;
    y = sumbuY;
}

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

//Getter
int Point::getAbsis(){
    return x;
}
int Point::getOrdinat(){
    return y;
}

//Setter
void Point::setAbsis(int _x){
    x = _x;
}

void Point::setOrdinat(int _y){
    y = _y;
}
