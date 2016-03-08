#include "Hyena.h"

char* Hyena::predatorHyena = new char[2]; //Masih bingung disini

Hyena::Hyena(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar, int k,
                 int a, bool lambat, int delta) : Karnivora(_umur,_DNA,_ulangtahun,P,kenyang,maks,tar,k,a,lambat,delta)
{
    //Untuk sementara dibuat seperti ini dulu
    setPredator(0,'p');
    setPredator(1,'t');
}

void Hyena::setHyenaFromPoint(Point P){
    setPosisi(P);
}
