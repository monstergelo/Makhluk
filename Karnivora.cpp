#include "Karnivora.h"

Karnivora::Karnivora() : Hewan(){
    deltaKecepatan = 0;
    melambat = false;
}

Karnivora::Karnivora(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar, int k, int a, bool lambat,
                     int delta) : Hewan (_umur,_DNA,_ulangtahun,P,kenyang,maks,tar,k,a)
{
    melambat = lambat;
    deltaKecepatan = delta;
}

Karnivora::Karnivora(const Karnivora& K) : Hewan(K){
    deltaKecepatan = K.deltaKecepatan;
    melambat = K.melambat;
}

Karnivora& Karnivora::operator=(const Karnivora& K){
    Hewan::operator=(K);
    deltaKecepatan = K.deltaKecepatan;
    melambat = K.melambat;
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
    if (get_tingkat_kekenyangan() < ((8*get_maks_tingkat_kekenyangan())/10)){
        int newKecepatan = get_Kecepatan();
        newKecepatan -= deltaKecepatan;
        set_Kecepatan(newKecepatan);
    }
}
