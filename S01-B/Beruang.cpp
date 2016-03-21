#include "Beruang.h"

Beruang::Beruang(Point P) : Omnivora(batasumur_Beruang,'b',ulangtahun_Beruang,P,maksimum_tingkat_kekenyangan_Beruang,maksimum_tingkat_kekenyangan_Beruang,NULL
                ,false, kecepatan_Beruang,1)
{
    setPredator(0,'h');
    setPredator(1,'y');
    setPredator(2,'H');

    setTarget(0,'u');
    setTarget(1,'g');
    setTarget(2,'^');
    setTarget(3,'!');
    setTarget(4,'m');
    setTarget(5,'C');
}

Beruang::Beruang(const Beruang& H) : Omnivora(H){
}

Beruang& Beruang::operator=(const Beruang& H){
    Omnivora::operator=(H);
    return *this;
}

Beruang::~Beruang(){
}
