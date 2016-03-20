#include "Karnivora.h"

Karnivora::Karnivora() : Hewan(){
    deltaKecepatan = 0;
    melambat = false;
}

Karnivora::Karnivora(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar, bool _memburu, int k,
                     int a, bool lambat, int delta) : Hewan (_umur,_DNA,_ulangtahun,P,kenyang,maks,tar,_memburu,k,a)
{
    melambat = lambat;
    deltaKecepatan = delta;
}

Karnivora::~Karnivora(){}

Karnivora::Karnivora(const Karnivora& K) : Hewan(K){
    deltaKecepatan = K.deltaKecepatan;
    melambat = K.melambat;
}

Karnivora& Karnivora::operator=(const Karnivora& K){
    Hewan::operator=(K);
    deltaKecepatan = K.deltaKecepatan;
    melambat = K.melambat;
    return *this;
}

void Karnivora::setMelambat( bool lambat){
    melambat = lambat;
}

void Karnivora::setDeltaKecepatan(int delta){
    deltaKecepatan = delta;
}

bool Karnivora::getMelambat(){
    return melambat;
}

int Karnivora::getDeltaKecepatan(){
    return deltaKecepatan;
}

void Karnivora::prosesMelambat(){
    int newKecepatan;
    if (!getMelambat()){
        if (get_tingkat_kekenyangan() <= ((8*get_maks_tingkat_kekenyangan())/10)){
            newKecepatan = get_Kecepatan() - deltaKecepatan;
            set_Kecepatan(newKecepatan);
            setMelambat(true);
        }
        else{
            newKecepatan = get_Kecepatan() + deltaKecepatan;
            set_Kecepatan(newKecepatan);
        }
    }
}

void Karnivora::Reaction(MakhlukHidup& M){
    prosesMelambat();
    if (M.getPosisi()== getPosisi()){
        if (get_DNA() == M.get_DNA()) {
            if (M.get_umur() >= get_umur())
                setMati(true);
        } else if (isPredator(M.get_DNA())) {
                setMati(true);
        }
    }else if (isRadius(1,M.getPosisi())){
        if (isTarget(M.get_DNA()) && (M.get_DNA() != '!'))
            set_Arah_Memburu(getPosisi(),M.getPosisi());
        else
            set_Arah_Bebas();
    }else{
        set_Arah_Bebas();
    }
}
