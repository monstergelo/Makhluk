#include "Gerak.h"
#include "Point.h"
#include <random>

std::random_device rd;
std::mt19937 mt(rd());
std::uniform_int_distribution<int> dist(1, 8);

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
    set_Arah_Bebas();
    Point temp = gerak_berarah(Awal);
    return temp;
}

Point Gerak::gerak_memburu(Point Awal, Point Target)
//Membuat gerakan dengan arah menuju suatu titik
{
    Point temp;
    set_Arah_Memburu(Awal,Target);
    temp = gerak_berarah(Awal);
    return temp;
}

Point Gerak::gerak_menjauh(Point Awal, Point Predator)
//Membuat gerakan dengan arah menjauhi suatu titik
{
    Point temp;
    set_Arah_Memburu(Awal,Predator);
    temp = gerak_berarah(Awal);
    return temp;
}

Point Gerak::gerak_berarah(Point Awal)
//Membuat gerakan arah yang ditentukan
{
    Point temp = Awal;
    switch (get_Arah()) {
        case 1 : temp.geser(0,-1); break;
        case 2 : temp.geser(1,-1); break;
        case 3 : temp.geser(1,0); break;
        case 4 : temp.geser(1,1); break;
        case 5 : temp.geser(0,1); break;
        case 6 : temp.geser(-1,1); break;
        case 7 : temp.geser(-1,0); break;
        case 8 : temp.geser(-1,-1); break;
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

void Gerak::set_Arah_Bebas()
{
    int _arah = dist(mt);
    set_Arah(_arah);
}
void Gerak::set_Arah_Memburu(Point Awal, Point Target)
{
    if ((Awal.getAbsis() == Target.getAbsis()) && (Awal.getOrdinat() > Target.getOrdinat()))
        set_Arah(1);
    else if ((Awal.getAbsis() < Target.getAbsis()) && (Awal.getOrdinat() > Target.getOrdinat()))
        set_Arah(2);
    else if ((Awal.getAbsis() < Target.getAbsis()) && (Awal.getOrdinat() == Target.getOrdinat()))
        set_Arah(3);
    else if ((Awal.getAbsis() < Target.getAbsis()) && (Awal.getOrdinat() < Target.getOrdinat()))
        set_Arah(4);
    else if ((Awal.getAbsis() == Target.getAbsis()) && (Awal.getOrdinat() < Target.getOrdinat()))
        set_Arah(5);
    else if ((Awal.getAbsis() > Target.getAbsis()) && (Awal.getOrdinat() < Target.getOrdinat()))
        set_Arah(6);
    else if ((Awal.getAbsis() > Target.getAbsis()) && (Awal.getOrdinat() == Target.getOrdinat()))
        set_Arah(7);
    else
        set_Arah(8);
}

void Gerak::set_Arah_Menjauh(Point Awal, Point Predator)
{
    if ((Awal.getAbsis() == Predator.getAbsis()) && (Awal.getOrdinat() > Predator.getOrdinat()))
        set_Arah(5);
    else if ((Awal.getAbsis() < Predator.getAbsis()) && (Awal.getOrdinat() > Predator.getOrdinat()))
        set_Arah(6);
    else if ((Awal.getAbsis() < Predator.getAbsis()) && (Awal.getOrdinat() == Predator.getOrdinat()))
        set_Arah(7);
    else if ((Awal.getAbsis() < Predator.getAbsis()) && (Awal.getOrdinat() < Predator.getOrdinat()))
        set_Arah(8);
    else if ((Awal.getAbsis() == Predator.getAbsis()) && (Awal.getOrdinat() < Predator.getOrdinat()))
        set_Arah(1);
    else if ((Awal.getAbsis() > Predator.getAbsis()) && (Awal.getOrdinat() < Predator.getOrdinat()))
        set_Arah(2);
    else if ((Awal.getAbsis() > Predator.getAbsis()) && (Awal.getOrdinat() == Predator.getOrdinat()))
        set_Arah(3);
    else
        set_Arah(4);
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
