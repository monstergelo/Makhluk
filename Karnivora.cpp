#include "Karnivora.h"

Karnivora::Karnivora(){
    deltaKecepatan = 0;
    melambat = false;
}

Karnivora::Karnivora(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar, int k, int a, bool lambat,
                     int delta) : Hewan (_umur,_DNA,_ulangtahun,P,kenyang,maks,tar,k,a)
{
    melambat = lambat;
    deltaKecepatan = delta;
}

Karnivora::Karnivora
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
