#include "Harimau.h"

char* Harimau::predatorHewan(new char('p','t'));

Harimau::Harimau(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar, int k,
                 int a, bool lambat, int delta) : Karnivora(_umur,_DNA,_ulangtahun,P,kenyang,maks,tar,k,a,lambat,delta)
{
}
