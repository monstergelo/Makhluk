#ifndef HERBIVORA_H
#define HERBIVORA_H

#include "Hewan.h"

//Catatan : Hewan inherit ke MakhlukHidup, Gerak, dan HuntingSkill
class Herbivora : public Hewan {
public :
        Herbivora();
        Herbivora(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar,
                 bool _memburu, int k, int a, bool lambat, int delta);

        //CCTOR
        Herbivora(const Karnivora&);
        Herbivora& operator=(const Karnivora&);
        virtual ~Herbivora() = 0;
        void set_percepat( bool cepat);
        Karnivora& operator=(Karnivora&);
        void set_deltaKecepatan(int kec);
        bool get_percepat();
        int get_deltaKecepatan();
        void prosesMempercepat();
    //services
private :
    int deltaKecepatan;
    /*
    Menyimpan nilai peningkatan kecepatan
    */
    bool percepat;
};


#endif // HERBIVORA_H
