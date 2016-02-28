#ifndef HERBIVORA_H
#define HERBIVORA_H

#include "Hewan.h"

class Herbivora : public Hewan {
public :
    virtual bool berlari()=0;
    /*
    Menghasilkan nilai true jika omnivora menyadari predatornya ada di sekitarnya.
    Hal ini mengakibatkan kecepatan meningkat.
    */
protected :
    int deltaKecepatan;
    /*
    Menyimpan nilai peningkatan kecepatan
    */
};

#endif // HERBIVORA_H
