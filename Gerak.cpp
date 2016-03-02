#include "Gerak.h"
#include "Point.h"
#include <iostream>

using namespace std;

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

Point Gerak::gerak_bebas(Point Awal)
//Membuat gerakan dengan kecepatan tertentu dan arah yang random
//Arah awalnya terdefinisi
{
    int _arah = rand()%8 +1;
    Point temp = gerak_berarah(Awal,_arah);
    return temp;
}

Point Gerak::gerak_memburu(Point Awal, Point Target)
//Membuat gerakan dengan arah menuju suatu titik
{
    Point temp;
    if ((Awal.getAbsis() == Target.getAbsis()) && (Awal.getOrdinat() < Target.getOrdinat()))
        temp = gerak_berarah(Awal,1);
    else if ((Awal.getAbsis() < Target.getAbsis()) && (Awal.getOrdinat() < Target.getOrdinat()))
        temp = gerak_berarah(Awal,2);
    else if ((Awal.getAbsis() < Target.getAbsis()) && (Awal.getOrdinat() == Target.getOrdinat()))
        temp = gerak_berarah(Awal,3);
    else if ((Awal.getAbsis() < Target.getAbsis()) && (Awal.getOrdinat() > Target.getOrdinat()))
        temp = gerak_berarah(Awal,4);
    else if ((Awal.getAbsis() == Target.getAbsis()) && (Awal.getOrdinat() > Target.getOrdinat()))
        temp = gerak_berarah(Awal,5);
    else if ((Awal.getAbsis() > Target.getAbsis()) && (Awal.getOrdinat() > Target.getOrdinat()))
        temp = gerak_berarah(Awal,6);
    else if ((Awal.getAbsis() > Target.getAbsis()) && (Awal.getOrdinat() == Target.getOrdinat()))
        temp = gerak_berarah(Awal,7);
    else
        temp = gerak_berarah(Awal,8);
    return temp;
}

Point Gerak::gerak_menjauh(Point Awal, Point Predator)
//Membuat gerakan dengan arah menjauhi suatu titik
{
    Point temp;
    if ((Awal.getAbsis() == Predator.getAbsis()) && (Awal.getOrdinat() > Predator.getOrdinat()))
        temp = gerak_berarah(Awal,5);
    else if ((Awal.getAbsis() < Predator.getAbsis()) && (Awal.getOrdinat() < Predator.getOrdinat()))
        temp = gerak_berarah(Awal,6);
    else if ((Awal.getAbsis() < Predator.getAbsis()) && (Awal.getOrdinat() == Predator.getOrdinat()))
        temp = gerak_berarah(Awal,7);
    else if ((Awal.getAbsis() < Predator.getAbsis()) && (Awal.getOrdinat() > Predator.getOrdinat()))
        temp = gerak_berarah(Awal,8);
    else if ((Awal.getAbsis() == Predator.getAbsis()) && (Awal.getOrdinat() > Predator.getOrdinat()))
        temp = gerak_berarah(Awal,1);
    else if ((Awal.getAbsis() > Predator.getAbsis()) && (Awal.getOrdinat() > Predator.getOrdinat()))
        temp = gerak_berarah(Awal,2);
    else if ((Awal.getAbsis() > Predator.getAbsis()) && (Awal.getOrdinat() == Predator.getOrdinat()))
        temp = gerak_berarah(Awal,3);
    else
        temp = gerak_berarah(Awal,4);
    return temp;
}

Point Gerak::gerak_berarah(Point Awal, int _arah)
//Membuat gerakan arah yang ditentukan
{
    Point temp = Awal;
    switch (_arah) {
        case 1 : temp.geser(0,1); break;
        case 2 : temp.geser(1,1); break;
        case 3 : temp.geser(1,0); break;
        case 4 : temp.geser(1,-1); break;
        case 5 : temp.geser(0,-1); break;
        case 6 : temp.geser(-1,-1); break;
        case 7 : temp.geser(-1,0); break;
        case 8 : temp.geser(-1,1); break;
    }
    return temp;
}


    //SETTER
void Gerak::set_Kecepatan(int _kecepatan)
{
    kecepatan = _kecepatan;
}

void Gerak::set_Arah(int _arah)
{
    arah = _arah;
}

    //GETTER
int Gerak::get_Kecepatan()
{
    return kecepatan;
}

int Gerak::get_Arah()
{
    return arah;
}
