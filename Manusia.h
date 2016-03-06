#ifndef MANUSIA_H
#define MANUSIA_H

#include "MakhlukHidup.h"
#include "HuntingSkill.h"
#include "Gerak.h"

class Manusia : public MakhlukHidup, public HuntingSkill, public Gerak {
public :
    //CTOR
    Manusia(int _umur = 0, char _DNA = '*', int _ulangtahun = 0, Point P = PAwal, char* Target = NULL, bool _memburu = false, int kec = 0, int arah = 0);

    //CCTOR
    Manusia(const Manusia&);

    //DTOR tidak perlu

    //OPERATOR =
    Manusia& operator= (const Manusia&);

    void setMenghindar(bool m);
    /*
    Mengeset bool menghindar jika ada predator di sekitar.
    Hal ini digunakan untuk menentukan gerak selanjutnya yaitu
    menjauh dari predator.
    */

    void setPosisiPredator(Point Pre);
    /*
    Mengeset posisi predator yang diketahui
    */

    //GETTER
    bool getMenghindar ();
    Point getPosisiPredator();

    void gerak_memburu(Point Target);
    //Membuat gerakan dengan arah menuju suatu titik
    void gerak_menjauh(Point Predator);
    //Membuat gerakan dengan arah menjauhi suatu titik;
    void gerak_berarah(int _arah);
    //Membuat gerakan arah yang ditentukan

private :
    bool menghindar;
    //Menyimpan kondisi manusia harus menghindar
    Point PosisiPredator;
    //Menyimpan posisi dari predator

};
//wawawawawawaw;
#endif // MANUSIA_H
