#ifndef KARNIVORA_H
#define KARNIVORA_H

#include "Hewan.h"

class Karnivora : public Hewan {
    public :
        //CTOR
        Karnivora();
        Karnivora(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar, int k, int a, bool lambat,
                int delta);
        //CCTOR
        Karnivora(Karnivora&);
        void setMelambat( bool lambat);
        /*
        kecepatan akan menurun jika tingkat kekenyangan
        di atas 80% maksimal
        */
        void setDeltaKecepatan(int delta);
        bool getMelambat();
        int getDeltaKecepatan();
        void virtual prosesMelambat() = 0;
    protected :
        int deltaKecepatan;
        /*
        Menyimpan nilai penurunan kecepatan
        */
        bool melambat;

};

#endif // KARNIVORA_H
