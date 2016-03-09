#include "Mandril.h"

Mandril::Mandril(Point P) : Omnivora(batasumur_Mandril,'m',ulangtahun_Mandril,P,maksimum_tingkat_kekenyangan_Mandril,maksimum_tingkat_kekenyangan_Mandril,NULL
                ,false, kecepatan_Mandril,1)
{
    setPredator(0,'h');
    setPredator(1,'y');
    setPredator(2,'p');
    setPredator(3,'b');

    setTarget(0,'u');
    setTarget(1,'g');
    setTarget(2,'r');
    setTarget(3,'t');
}

Mandril::Mandril(const Mandril& H) : Omnivora(H){
}

Mandril& Mandril::operator=(const Mandril& H){
    Omnivora::operator=(H);
    return *this;
}

Mandril::~Mandril(){
}
