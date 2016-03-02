#ifndef HERBIVORA_H
#define HERBIVORA_H

#include "Hewan.h"

class Herbivora : public Hewan {
public :
    //5 sekawan
    Herbivora();
    ~Herbivora();
    Herbivora(const Herbivora&);
    Herbivora& operator=(const Herbivora&);
    ifstream operator>> (istream&);
    ofstream operator<< (ostream&);

    bool berlari();
    /*
    Menghasilkan nilai true jika herbivora menyadari predatornya ada di sekitarnya.
    Hal ini mengakibatkan kecepatan meningkat.
    */
private :
    int deltaKecepatan;
    /*
    Menyimpan nilai peningkatan kecepatan
    */
};


#endif // HERBIVORA_H
