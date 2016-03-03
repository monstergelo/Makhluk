#include "Hewan.h"

Hewan::Hewan(){
    tingkat_kekenyangan = 0;
    maks_tingkat_kekenyangan = 0;
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
