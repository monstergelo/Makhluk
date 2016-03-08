#include "Hewan.h"

using namespace std;

Hewan::Hewan(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar, bool _memburu, int k, int a) :
    MakhlukHidup(_umur,_DNA,_ulangtahun,P), HuntingSkill(tar), Gerak(k,a)
{
    tingkat_kekenyangan = kenyang;
    maks_tingkat_kekenyangan = maks;
    Lapar = false;
};

Hewan::Hewan(const Hewan& H) : MakhlukHidup(H), Gerak(H), HuntingSkill(H){
    tingkat_kekenyangan = H.tingkat_kekenyangan;
    maks_tingkat_kekenyangan = H.maks_tingkat_kekenyangan;
    Lapar = H.Lapar;
}

Hewan& Hewan::operator=(const Hewan& H){
    MakhlukHidup::operator=(H);
    HuntingSkill::operator=(H);
    Gerak::operator=(H);
    tingkat_kekenyangan = H.tingkat_kekenyangan;
    maks_tingkat_kekenyangan = H.maks_tingkat_kekenyangan;
    return *this;
}

void Hewan::setLapar(){
    if (tingkat_kekenyangan <= (8 * maks_tingkat_kekenyangan/10)){
        Lapar = true;
    }
    else{
        Lapar = false;
    }
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
    if (tingkat_kekenyangan == 0) {
        setMati(true);
    }
}

void Hewan::gerak_memburu(Point Target){
    if (getMemburu()){
        setPrecPosisi(getPosisi());
        setPosisi(Gerak::gerak_memburu(getPosisi(),Target));
        tingkat_kekenyangan--;
        hewanMati();
        if (!isMati()){
            setLapar();
            if (Lapar){
                setMemburu(true);
            }
            else{
                setMemburu(false);
            }
        }
    }
}

//Membuat gerakan dengan arah menjauhi suatu titik;

void Hewan::gerak_berarah(int _arah){
    setPrecPosisi(getPosisi());
    setPosisi(Gerak::gerak_berarah(getPosisi(),_arah));
    tingkat_kekenyangan--;
    hewanMati();
    if (!isMati()){
        setLapar();
        if (Lapar){
            setMemburu(true);
        }
        else{
            setMemburu(false);
        }
    }
}
//Membuat gerakan arah yang ditentukan
