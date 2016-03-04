#ifndef HUNTING_SKILL
#define HUNTING_SKILL

#include <stdlib.h>
#include "Point.h"

class HuntingSkill {
public :
    //CTOR
    HuntingSkill (char* Target = NULL, bool _memburu = false);
    //CCTOR
    HuntingSkill (const HuntingSkill&);
    //DTOR
    virtual ~HuntingSkill ();
    //OPERATOR =
    HuntingSkill& operator= (const HuntingSkill&);

    void setMemburu(bool M);
    /*
    Mengembalikan nilai true jika ada target di sekitar.
    Hal ini digunakan untuk menentukan gerak selanjutnya yaitu
    menuju ke target
    */
    void setPosisiTarget(Point Target);

    //GETTER
    char* getTarget();
    bool getMemburu();
    Point getPosisiTarget();

private :
    char* Target;
    //Berisi DNA dari target
    bool memburu;
    //Menyimpan kondisi untuk berburu
    Point posisiTarget;
    //Meyimpan posisi dari target
    const int ukuran_target;
    //Konstanta dari ukuran target

};

#endif // HUNTING_SKILL
