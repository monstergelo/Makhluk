#ifndef POINT_H
#define POINT_H

class Point {

public :
    //CTOR
    Point(int _x=0, int _y=0);
    //CCTOR tidak perlu
    //DTOR tidak perlu
    //OPERATOR =
    Point& operator=(const Point&);

    //OPERATOR ==
    bool operator==(const Point&);

    bool inRadius(int r);
    /* Mengembalikan true ketika ada suatu titik yang lain
    berada di radius r
    */

    void geser(int dx, int dy);
    //Menggeser sebuah titik sebesar dx, dy

private :
    int x; //Menyimpan Absis
    int y; //Menyimpan Oordinat
};

#endif // POINT_H
