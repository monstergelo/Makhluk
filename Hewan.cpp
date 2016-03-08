#include "Hewan.h"

using namespace std;

Hewan::Hewan(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar, int k, int a) :
    MakhlukHidup(_umur,_DNA,_ulangtahun,P), HuntingSkill(tar), Gerak(k,a)
{
    tingkat_kekenyangan = kenyang;
    maks_tingkat_kekenyangan = maks;
    Lapar = false;
};

Hewan::Hewan(const Hewan& H) : MakhlukHidup(H), Gerak(H), HuntingSkill(H){
    tingkat_kekenyangan = H.get_tingkat_kekenyangan();
    maks_tingkat_kekenyangan = H.get_maks_tingkat_kekenyangan();
    Lapar = H.get_Lapar();
}

Hewan& Hewan::operator=(const Hewan& H){
    MakhlukHidup::operator=(H);
    HuntingSkill::operator=(H);
    Gerak::operator=(H);
    tingkat_kekenyangan = H.get_tingkat_kekenyangan();
    maks_tingkat_kekenyangan = H.get_maks_tingkat_kekenyangan();
    return *this;
}

void Hewan::setLapar(bool lap){
    Lapar = lap;
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

void Hewan::hewanMati(){
    if ((tingkat_kekenyangan = ((8*tingkat_kekenyangan)/10)) || mati()){
        delete this;
    }
}
