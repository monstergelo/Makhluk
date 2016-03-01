#ifndef GERAK_H
#define GERAK_H

#include "Point.h"

#define U 1 //Utara
#define TL 2 //Timur Laut
#define T 3 //Timur
#define TG 4 //Tenggara
#define S 5 //Selatan
#define BD 6 //Barat Daya
#define B 7 //Barat
#define BL 8 //Barat Laut

class Gerak {
public :

    //CTOR
    Gerak(int k= 0, int a=0);
    //CCTOR tidak perlu
    //DTOR tidak perlu
    //Operator =
    Gerak& operator= (const Gerak&);
    //Operator input output tidak perlu
    void gerak_bebas() = 0;
    //Membuat gerakan dengan kecepatan tertentu dan arah yang random
    void gerak_berarah(const Point&) = 0;
    //Membuat gerakan dengan arah menuju suatu titik
    void gerak_menjauh(const Point&) = 0;
    //Membuat gerakan dengan arah menjauhi suatu titik;

private :
	int kecepatan;
    //Menyimpan waktu makhluk harus berpindah. Contoh kecepatan = 3, tiap tidak detik makhluk berpindah
    int arah;
    //Menyimpan arah makhluk dalam bergerak.
};

#endif // GERAK_H
