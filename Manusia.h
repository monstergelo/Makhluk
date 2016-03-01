#ifndef MANUSIA_H
#define MANUSIA_H

#include "MakhlukHidup.h"
#include "HuntingSkill.h"
#include "Gerak.h"

class Manusia : public MakhlukHidup, public HuntingSkill, public Gerak {
public :
    virtual bool menghindar()=0;
    /*
    Mengembalikan nilai true jika ada predator di sekitar.
    Hal ini digunakan untuk menentukan gerak selanjutnya yaitu
    menjauh dari target.
    */
};
//wawawawawawaw;
#endif // MANUSIA_H
