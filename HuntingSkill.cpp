#include "HuntingSkill.h"


//CTOR
HuntingSkill::HuntingSkill(char* _Target) : ukuran_target(20) {
    Target = new char[ukuran_target];
    if (Target != NULL) {
        for (int i=0; i<ukuran_target; i++)
            Target[i] = _Target[i];
    }
    memburu = false;
}

//CCTOR
HuntingSkill::HuntingSkill(const HuntingSkill& H) : ukuran_target(H.ukuran_target) {
    Target = new char [ukuran_target];
    if (Target != NULL) {
        for (int i=0; i<ukuran_target; i++)
            Target[i] = H.Target[i];
    }
    memburu = H.memburu;
}

//DTOR
HuntingSkill::~HuntingSkill () {
    delete [] Target;
}
//OPERATOR =
HuntingSkill& HuntingSkill::operator= (const HuntingSkill& H) {
    delete [] Target;
    if (Target != NULL) {
        Target = new char[ukuran_target];
        for (int i=0; i<ukuran_target; i++)
            Target[i] = H.Target[i];
    }
    memburu = H.memburu;

}

void HuntingSkill::setMemburu(bool M)
/*
Mengembalikan nilai true jika ada target di sekitar.
Hal ini digunakan untuk menentukan gerak selanjutnya yaitu
menuju ke target
*/
{
    memburu = M;
}

//GETTER
char* HuntingSkill::getTarget(){
    return Target;
}

bool HuntingSkill::getMemburu(){
    return memburu;
}
