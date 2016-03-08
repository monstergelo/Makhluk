#include "Harimau.h"

char* Harimau::predatorHarimau = new char[2]; //Masih bingung disini

Harimau::Harimau(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar, int k,
                 int a, bool lambat, int delta) : Karnivora(_umur,_DNA,_ulangtahun,P,kenyang,maks,tar,k,a,lambat,delta)
{
    //Untuk sementara dibuat seperti ini dulu
    setPredator(0,'p');
    setPredator(1,'t');
}

Harimau::~Harimau(){

}
void Harimau::setHarimauFromPoint(Point P){
    setPosisi(P);
}
