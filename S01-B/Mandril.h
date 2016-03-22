#ifndef MANDRIL_H_INCLUDED
#define MANDRIL_H_INCLUDED

#include "Omnivora.h"

class Mandril: public Omnivora{
    public :
        Mandril(Point P = PAwal);
        Mandril(const Mandril&);
        Mandril& operator=(const Mandril&);
        ~Mandril();
    private :
        const static int batasumur_Mandril = 87;
        const static int ulangtahun_Mandril = 4;
        const static int maksimum_tingkat_kekenyangan_Mandril = 25;
        const static int kecepatan_Mandril = 3;
};

#endif // MANDRIL_H_INCLUDED
