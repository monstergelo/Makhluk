#ifndef HARIMAU_H_INCLUDED
#define HARIMAU_H_INCLUDED
#include "Karnivora.h"

class Harimau : public Karnivora{
    public :
        /* ctor, dtor, operator=, cctor */
        Harimau(Point P);
        Harimau(const Harimau&);
        ~Harimau();
        Harimau& operator= (const Harimau&);
    private:
        const static int batasumur_Harimau = 10;
        const static int ulangtahun_Harimau = 2;
        const static int maksimum_tingkat_kekenyangan_Harimau = 8;
        const static int kecepatan_Harimau = 8;
        const static int deltaKecepatan_Harimau = 3;
};


#endif // HARIMAU_H_INCLUDED
