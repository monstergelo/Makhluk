#include "Harimau.h"
/* Batas Umur harimau adalah 10 */
Harimau::Harimau(int x, int y) {

}

Harimau::Harimau(const Harimau& H){
    posisi = H.posisi;
    PPosisi  = H.PPosisi;
    umur = H.umur;
    ulang_tahun = H.ulang_tahun;
    DNA = H.DNA;
    predator = new char[2];
    predator[0] = H.predator[0];
    predator[1] = H.predator[1];
    tingkat_kekenyangan = H.tingkat_kekenyangan;
    maks_tingkat_kekenyangan = H.maks_tingkat_kekenyangan;
}

Harimau::~Harimau(){
    delete [] predator;
}

bool Harimau::melambat(){
    if (tingkat_kekenyangan < ((8 * maks_tingkat_kekenyangan)/10 )){
        return true;
    }
    else{
        return false;
    }
}

void Harimau::menua(){
    umur++;
}


void display(){
    /* Kecepatan harimau adalah 2*/
    //Gerak(2,B);
}
