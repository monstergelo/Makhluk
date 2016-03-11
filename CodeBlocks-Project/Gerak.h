#ifndef GERAK_H
#define GERAK_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
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
    Point gerak_bebas(Point Awal);
    //Membuat gerakan dengan kecepatan tertentu dan arah yang random
    //Arah awalnya terdefinisi
    Point gerak_memburu(Point Awal, Point Target);
    //Membuat gerakan dengan arah menuju suatu titik
    Point gerak_menjauh(Point Awal, Point Predator);
    //Membuat gerakan dengan arah menjauhi suatu titik;
    Point gerak_berarah(Point Awal);
    //Membuat gerakan arah yang ditentukan

    //SETTER
    void set_Kecepatan(int _kecepatan);
    void set_Arah(int _arah);
    void set_Arah_Bebas();
    void set_Arah_Memburu(Point Awal, Point Target);
    void set_Arah_Menjauh(Point Awal, Point Predator);

    //GETTER
    int get_Kecepatan();
    int get_Arah();

private :
	int kecepatan;
    //Menyimpan waktu makhluk harus berpindah. Contoh kecepatan = 3, tiap tidak detik makhluk berpindah
    int arah;
    //Menyimpan arah makhluk dalam bergerak.
};

#endif // GERAK_H
