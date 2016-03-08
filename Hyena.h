#ifndef HYENA_H_INCLUDED
#define HYENA_H_INCLUDED

#include "Karnivora.h"

class Hyena : public Karnivora{
    public :
        Hyena(int _umur = batasumur_Hyena, char _DNA = 'y', int _ulangtahun = ulangtahun_Hyena,Point P = PAwal,
                int kenyang = maksimum_tingkat_kekenyangan_Hyena, int maks = maksimum_tingkat_kekenyangan_Hyena
                , char* tar = predatorHyena, int k = kecepatan_Hyena, int a = U, bool lambat = false,
                int delta = deltaKecepatan_Hyena);
        void setHyenaFromPoint(Point P);
        ~Hyena();
    private :
        static char* predatorHyena;
        const static int batasumur_Hyena = 7;
        const static int ulangtahun_Hyena = 2;
        const static int maksimum_tingkat_kekenyangan_Hyena = 8;
        const static int kecepatan_Hyena = 8;
        const static int deltaKecepatan_Hyena = 3;
};
#endif // HYENA_H_INCLUDED
