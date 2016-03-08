#include "Hyena.h"

Hyena::Hyena(Point P) : Karnivora(batasumur_Hyena,'h',ulangtahun_Hyena,P,0,maksimum_tingkat_kekenyangan_Hyena,NULL
                ,false, kecepatan_Hyena,1,false,deltaKecepatan_Hyena)
{
    setPredator(0,'p');
    setPredator(1,'t');
    setPredator(2,'h');

    setTarget(0,'u');
    setTarget(1,'g');
    setTarget(2,'b');
    setTarget(3,'m');
    setTarget(4,'r');
}

Hyena::Hyena(const Hyena& H) : Karnivora(H){
}

Hyena& Hyena::operator=(const Hyena& H){
    Karnivora::operator=(H);
    return *this;
}

Hyena::~Hyena(){
}

void Hyena::Reaction(MakhlukHidup& M){
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
