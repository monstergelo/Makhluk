#include "HuntingSkill.h"


//CTOR
HuntingSkill::HuntingSkill(char* _Target, bool _memburu) : ukuran_target(20) {
    Target = new char[ukuran_target];
    if (_Target != NULL) {
        for (int i=0; i<ukuran_target; i++)
            Target[i] = _Target[i];
    } else {
        for (int i=0; i<ukuran_target; i++)
            Target[i] = ' ' ;
    }
    memburu = _memburu;
    posisiTarget.setAbsis(0);
    posisiTarget.setOrdinat(0);
}

//CCTOR
HuntingSkill::HuntingSkill(const HuntingSkill& H) : ukuran_target(H.ukuran_target) {
    Target = new char [ukuran_target];
    for (int i=0; i<ukuran_target; i++)
        Target[i] = H.Target[i];
    memburu = H.memburu;
    posisiTarget = H.posisiTarget;
}

//DTOR
HuntingSkill::~HuntingSkill () {
    delete [] Target;
}
//OPERATOR =
HuntingSkill& HuntingSkill::operator= (const HuntingSkill& H) {
    delete [] Target;
    Target = new char[ukuran_target];
    for (int i=0; i<ukuran_target; i++)
        Target[i] = H.Target[i];
    memburu = H.memburu;
    posisiTarget = H.posisiTarget;
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

void HuntingSkill::setPosisiTarget(Point Target){
    posisiTarget = Target;
}

//GETTER
char* HuntingSkill::getTarget(){
    return Target;
}

bool HuntingSkill::getMemburu(){
    return memburu;
}

Point HuntingSkill::getPosisiTarget(){
    return posisiTarget;
}

void HuntingSkill::setTarget (int i, char _target){
    Target[i] = _target;
}

bool HuntingSkill::isTarget(char _target){
    int i = 0;
    bool stop = false;
    while ((i < ukuran_target) && (!stop)){
        if (Target[i] == _target){
            stop = true;
        } else
            i++;
    }
    return (i < ukuran_target);
}
