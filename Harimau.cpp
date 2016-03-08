#include "Harimau.h"

Harimau::Harimau(Point P) : Karnivora(batasumur_Harimau,'h',ulangtahun_Harimau,P,0,maksimum_tingkat_kekenyangan_Harimau,NULL
                ,false, kecepatan_Harimau,1,false,deltaKecepatan_Harimau)
{
    setPredator(0,'p');
    setPredator(1,'t');

    setTarget(0,'u');
    setTarget(1,'g');
    setTarget(2,'b');
    setTarget(3,'m');
    setTarget(4,'y');
    setTarget(5,'r');
}

Harimau::Harimau(const Harimau& H) : Karnivora(H){
}

Harimau& Harimau::operator=(const Harimau& H){
    Karnivora::operator=(H);
    return *this;
}

Harimau::~Harimau(){
}

void Harimau::Reaction(MakhlukHidup& M){
    prosesMelambat();
    if (M.getPosisi()== getPosisi()){
        if (get_DNA() == M.get_DNA()) {
            if (M.get_umur() > get_umur())
                setMati(true);
            else if (M.get_umur() < get_umur())
                M.setMati(true);
            else {
                M.setMati(true);
                setMati(true);
            }
        } else {
            if (M.isPredator(get_DNA()))
                setMati(true);
            else
                M.setMati(true);
        }
    } else if (isRadius(2,M.getPosisi())){
        if (isTarget(M.get_DNA()))
            gerak_memburu(M.getPosisi());
    }
}
