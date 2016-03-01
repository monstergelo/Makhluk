#ifndef HERBIVORA_H
#define HERBIVORA_H

#include "Hewan.h"

class Herbivora : public Hewan {
public :
    virtual bool berlari()=0;
    /*
    Menghasilkan nilai true jika herbivora menyadari predatornya ada di sekitarnya.
    Hal ini mengakibatkan kecepatan meningkat.
    */
protected :
    int deltaKecepatan;
    /*
    Menyimpan nilai peningkatan kecepatan
    */
};

class Gajah : public Herbivora {
public:
    bool berlari();
protected:
    deltaKecepatan = 2;
}

class Burung_Unta : public Herbivora {
public:
    bool berlari();
protected:
    deltaKecepatan = 4;
}

#endif // HERBIVORA_H