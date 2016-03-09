#include "Harimau.h"

Harimau::Harimau(Point P) : Karnivora(batasumur_Harimau,'h',ulangtahun_Harimau,P,maksimum_tingkat_kekenyangan_Harimau,maksimum_tingkat_kekenyangan_Harimau,NULL
                ,false, kecepatan_Harimau,1,false,deltaKecepatan_Harimau)
{
    setPredator(0,'H');
    setPredator(1,'!');

    setTarget(0,'u');
    setTarget(1,'g');
    setTarget(2,'b');
    setTarget(3,'m');
    setTarget(4,'y');
    setTarget(5,'^');
    setTarget(6,'C');
}

Harimau::Harimau(const Harimau& H) : Karnivora(H){
}

Harimau& Harimau::operator=(const Harimau& H){
    Karnivora::operator=(H);
    return *this;
}

Harimau::~Harimau(){
}
