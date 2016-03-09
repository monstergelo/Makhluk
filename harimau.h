#ifndef HARIMAU_H_INCLUDED
#define HARIMAU_H_INCLUDED
#include "Karnivora.h"

class Harimau: public Karnivora{
    public :
        Harimau(Point P = PAwal);
        Harimau(const Harimau&);
        Harimau& operator=(const Harimau&);
        ~Harimau();
        void Reaction(MakhlukHidup&);
    private :
        const static int batasumur_Harimau = 10;
        const static int ulangtahun_Harimau = 2;
        const static int maksimum_tingkat_kekenyangan_Harimau = 9;
        const static int kecepatan_Harimau = 5;
        const static int deltaKecepatan_Harimau = 2;
};


#endif // HARIMAU_H_INCLUDED
