#include "Hyena.h"

Hyena::Hyena(Point P) : Karnivora(batasumur_Hyena,'y',ulangtahun_Hyena,P,maksimum_tingkat_kekenyangan_Hyena,maksimum_tingkat_kekenyangan_Hyena,NULL
                ,false, kecepatan_Hyena,1,false,deltaKecepatan_Hyena)
{
    setPredator(0,'!');
    setPredator(1,'h');
    setPredator(2,'H');

    setTarget(0,'u');
    setTarget(1,'g');
    setTarget(2,'b');
    setTarget(3,'m');
    setTarget(4,'^');
    setTarget(5,'C');
}

Hyena::Hyena(const Hyena& H) : Karnivora(H){
}

Hyena& Hyena::operator=(const Hyena& H){
    Karnivora::operator=(H);
    return *this;
}

Hyena::~Hyena(){
}
