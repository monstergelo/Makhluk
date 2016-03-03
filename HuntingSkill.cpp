#include "HuntingSkill.h"


//CTOR
HuntingSkill::HuntingSkill(char* _Target, bool _memburu) : ukuran_target(20) {
    if (_Target != NULL) {
        Target = new char[ukuran_target];
        for (int i=0; i<ukuran_target; i++)
            Target[i] = _Target[i];
    } else
        Target = _Target;
    memburu = _memburu;
}

//CCTOR
HuntingSkill::HuntingSkill(const HuntingSkill& H) : ukuran_target(H.ukuran_target) {
    if (H.Target != NULL) {
        Target = new char [ukuran_target];
        for (int i=0; i<ukuran_target; i++)
            Target[i] = H.Target[i];
    } else
        Target = H.Target;
    memburu = H.memburu;
}

//DTOR
HuntingSkill::~HuntingSkill () {
    delete [] Target;
}
//OPERATOR =
HuntingSkill& HuntingSkill::operator= (const HuntingSkill& H) {
    delete [] Target;
    if (H.Target != NULL) {
        Target = new char[ukuran_target];
        for (int i=0; i<ukuran_target; i++)
            Target[i] = H.Target[i];
    } else
        Target = H.Target;
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
