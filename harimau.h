#ifndef HARIMAU_H_INCLUDED
#define HARIMAU_H_INCLUDED
#include "Karnivora.h"

class Harimau : public Karnivora{
    public :
        Harimau(int _umur = batasumur_Harimau, char _DNA = 'h', int _ulangtahun = ulangtahun_Harimau,Point P = PAwal,
                int kenyang = maksimum_tingkat_kekenyangan_Harimau, int maks = maksimum_tingkat_kekenyangan_Harimau
                , char* tar = predatorHarimau, int k = kecepatan_Harimau, int a = U, bool lambat = false,
                int delta = deltaKecepatan_Harimau);
        void setHarimauFromPoint(Point P);
        Harimau(const Harimau&);
        Harimau& operator=(const Harimau&);
        ~Harimau();
    private :
        static char* predatorHarimau;
        const static int batasumur_Harimau = 10;
        const static int ulangtahun_Harimau = 2;
        const static int maksimum_tingkat_kekenyangan_Harimau = 10;
        const static int kecepatan_Harimau = 5;
        const static int deltaKecepatan_Harimau = 2;
};


#endif // HARIMAU_H_INCLUDED
