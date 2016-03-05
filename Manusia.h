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

    //GETTER
    bool getMenghindar ();

private :
    bool menghindar;

};
//wawawawawawaw;
#endif // MANUSIA_H
