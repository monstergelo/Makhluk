#ifndef POINT_H
#define POINT_H

class Point {

public :
    //CTOR
    Point();
    Point(int range);
    Point(int _x, int _y);
    //CCTOR tidak perlu
    //DTOR tidak perlu
    //OPERATOR =
    Point& operator=(const Point&);

    //OPERATOR ==
    bool operator==(const Point&);

    void geser(int dx, int dy);
    //Menggeser sebuah titik sebesar dx, dy

    //Getter
    int getAbsis();
    int getOrdinat();

    //Setter
    void setAbsis(int _x);
    void setOrdinat(int _y);

private :
    int x; //Menyimpan Absis
    int y; //Menyimpan Oordinat
};

#endif
