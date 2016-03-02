#include "Gerak.h"

//CTOR
Gerak::Gerak(int k, int a)
{
    kecepatan = k;
    arah = a;
}
//CCTOR tidak perlu
//DTOR tidak perlu
//Operator =
Gerak& Gerak::operator= (const Gerak& G){
    kecepatan = G.kecepatan;
    arah = G.arah;
}
