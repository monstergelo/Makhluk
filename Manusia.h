#ifndef MANUSIA_H
#define MANUSIA_H

#include "MakhlukHidup.h"
#include "HuntingSkill.h"
#include "Gerak.h"

class Manusia : public MakhlukHidup, public HuntingSkill, public Gerak {
public :
    virtual bool setMenghindar(bool m)=0;
    /*
    Mengeset bool menghindar jika ada predator di sekitar.
    Hal ini digunakan untuk menentukan gerak selanjutnya yaitu
    menjauh dari predator.
    */
private :
    bool menghindar;

};
//wawawawawawaw;
#endif // MANUSIA_H
