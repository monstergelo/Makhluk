#ifndef OMNIVORA_H
#define OMNIVORA_H

#include "Hewan.h"

class Omnivora : public Hewan {
    public :
        Omnivora();
        Omnivora(int _umur, char _DNA,
                  int _ulangtahun, Point P,
                  int kenyang, int maks,
                  char* tar, bool _memburu,
                  int k, int a);

        //CCTOR
        Omnivora(const Omnivora&);
        ~Omnivora();
        Omnivora& operator=(const Omnivora&);
        void memuda();
        bool isTumbuhan(MakhlukHidup&);
        void Reaction(MakhlukHidup&);
};

#endif // OMNIVORA_H
