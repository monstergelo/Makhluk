#ifndef HYENA_H_INCLUDED
#define HYENA_H_INCLUDED

#include "Karnivora.h"

class Hyena : public Karnivora{
    public :
        Hyena(Point P = PAwal);
        Hyena(const Hyena&);
        Hyena& operator=(const Hyena&);
        ~Hyena();
        void Reaction(MakhlukHidup&);
    private :
        const static int batasumur_Hyena = 7;
        const static int ulangtahun_Hyena = 2;
        const static int maksimum_tingkat_kekenyangan_Hyena = 8;
        const static int kecepatan_Hyena = 8;
        const static int deltaKecepatan_Hyena = 3;
};
#endif // HYENA_H_INCLUDED
