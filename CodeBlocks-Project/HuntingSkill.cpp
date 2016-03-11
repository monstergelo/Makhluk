#include "HuntingSkill.h"


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
}

HuntingSkill::HuntingSkill(const HuntingSkill& H) : ukuran_target(H.ukuran_target) {
    Target = new char [ukuran_target];
    for (int i=0; i<ukuran_target; i++)
        Target[i] = H.Target[i];
    memburu = H.memburu;
}

HuntingSkill::~HuntingSkill () {
    delete [] Target;
}

HuntingSkill& HuntingSkill::operator= (const HuntingSkill& H) {
    delete [] Target;
    Target = new char[ukuran_target];
    for (int i=0; i<ukuran_target; i++)
        Target[i] = H.Target[i];
    memburu = H.memburu;
}

void HuntingSkill::setMemburu(bool M)
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
