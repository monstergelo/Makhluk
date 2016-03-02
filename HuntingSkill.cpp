#include "HuntingSkill.h"

//CTOR
HuntingSkill::HuntingSkill(char* _Target){
    Target = new char[20];
    for (i=0; i<20; i++)
        Target[i] = _Target[i];
    memburu = false;
}

//CCTOR
HuntingSkill::HuntingSkill(const HuntingSkill& H){

}

//DTOR
~HuntingSkill ();
//OPERATOR =
HuntingSkill& operator= (const HuntingSkill&);

void setMemburu(bool M);
/*
Mengembalikan nilai true jika ada target di sekitar.
Hal ini digunakan untuk menentukan gerak selanjutnya yaitu
menuju ke target
*/
