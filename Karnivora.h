#ifndef KARNIVORA_H
#define KARNIVORA_H

#include "Hewan.h"

class Karnivora : public Hewan {
    public :
        //CTOR
        Karnivora();
        Karnivora(int _umur,
                  char _DNA,
                  int _ulangtahun,
                  Point P,
                  int kenyang,
                  int maks,
                  char* tar,
                  bool _memburu,
                  int k,
                  int a,
                  bool lambat,
                  int delta);

        //CCTOR
        Karnivora(const Karnivora&);
        Karnivora& operator=(const Karnivora&);
        ~Karnivora();
        void setMelambat( bool lambat);
        Karnivora& operator=(Karnivora&);
        void setDeltaKecepatan(int delta);
        bool getMelambat();
        int getDeltaKecepatan();
        void prosesMelambat();
        virtual void Reaction();
    protected :
        int deltaKecepatan;
        /*
        Menyimpan nilai penurunan kecepatan
        */
        bool melambat;

};

#endif // KARNIVORA_H
