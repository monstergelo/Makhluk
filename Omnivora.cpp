#include "Omnivora.h"

Omnivora::Omnivora() : Hewan(){
}

Omnivora::Omnivora::Omnivora(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar, bool _memburu, int k,
                     int a) : Hewan (_umur,_DNA,_ulangtahun,P,kenyang,maks,tar,_memburu,k,a){
}

Omnivora::~Omnivora(){}

Omnivora::Omnivora(const Omnivora& K) : Hewan(K){
}

Omnivora& Omnivora::operator=(const Omnivora& K){
    Hewan::operator=(K);
    return *this;
}

bool Omnivora::isTumbuhan(MakhlukHidup& M){
    if ((M.get_DNA() == 'r') || (M.get_DNA() == 't')){
        return true;
    }
    else{
        false;
    }
}

void Omnivora::memuda(){
    int newUmur = get_umur() - 1;
    set_umur(newUmur);
}

void Omnivora::Reaction(MakhlukHidup& M){
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
                if (isTumbuhan(M)){
                    memuda();
                }
                M.setMati(true);
        }
    } else if (isRadius(2,M.getPosisi())){
        if (isTarget(M.get_DNA()))
            gerak_memburu(M.getPosisi());
    }
}
