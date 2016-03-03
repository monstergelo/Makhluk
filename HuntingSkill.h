#ifndef HUNTING_SKILL
#define HUNTING_SKILL

#include <stdlib.h>

class HuntingSkill {
public :
    //CTOR
    HuntingSkill (char* Target = NULL);
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

    //GETTER
    char* getTarget();
    bool getMemburu();

private :
    char* Target;
    //Berisi DNA dari target
    bool memburu;
    //Menyimpan kondisi untuk berburu
    const int ukuran_target;
    //Konstanta dari ukuran target

};

#endif // HUNTING_SKILL
