#ifndef BERUANG_H_INCLUDED
#define BERUANG_H_INCLUDED

#include "Omnivora.h"

class Beruang: public Omnivora{
    public :
        Beruang(Point P = PAwal);
        Beruang(const Beruang&);
        Beruang& operator=(const Beruang&);
        ~Beruang();
    private :
        const static int batasumur_Beruang = 39;
        const static int ulangtahun_Beruang = 5;
        const static int maksimum_tingkat_kekenyangan_Beruang = 70;
        const static int kecepatan_Beruang = 3;
};

#endif // BERUANG_H_INCLUDED
