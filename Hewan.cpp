#include "Hewan.h"
#include <iostream>

using namespace std;

Hewan::Hewan(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar, int k, int a) : MakhlukHidup(_umur,_DNA,_ulangtahun,P), HuntingSkill(tar), Gerak(k,a) {
    tingkat_kekenyangan = kenyang;
    maks_tingkat_kekenyangan = maks;
};

Hewan::Hewan(const Hewan& H){
    tingkat_kekenyangan = H.tingkat_kekenyangan;
    maks_tingkat_kekenyangan = H.maks_tingkat_kekenyangan;
}

Hewan& Hewan::operator=(const Hewan& H){
    tingkat_kekenyangan = H.tingkat_kekenyangan;
    maks_tingkat_kekenyangan = H.maks_tingkat_kekenyangan;
    return *this;
}

void Hewan::setLapar(){
    Lapar = true;
}
/*
Menghasilkan true jika tingkat kekenyangan rendah.
Hal ini mengakitkan skill berburu dari hewan muncul.
*/
void Hewan::set_tingkat_kekenyangan(int kenyang){
    tingkat_kekenyangan = kenyang;
}

void Hewan::set_maks_tingkat_kekenyangan(int maks){
    maks_tingkat_kekenyangan = maks;
}

int Hewan::get_tingkat_kekenyangan(){
    return tingkat_kekenyangan;
}

int Hewan::get_maks_tingkat_kekenyangan(){
    return maks_tingkat_kekenyangan;
}

bool Hewan::get_lapar(){
    return Lapar;
}
