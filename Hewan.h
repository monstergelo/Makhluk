#ifndef HEWAN_H
#define HEWAN_H

#include "MakhlukHidup.h"
#include "HuntingSkill.h"

class Hewan : public MakhlukHidup, public HuntingSkill{
public :
    //5 sekawan
    Hewan();
    ~Hewan();
    Hewan(const Hewan&);
    Hewan& operator=(const Hewan&);
    ifstream operator>> (istream&);
    ofstream operator<< (ostream&);
    
    virtual bool Lapar()=0;
    /*
    Menghasilkan true jika tingkat kekenyangan rendah.
    Hal ini mengakitkan skill berburu dari hewan muncul.
    */
protected :
    int tingkat_kekenyangan;
    /*
    Menyimpan nilai tingkat kekenyangan dari hewan. Hal ini dapat digunakan
    untuk menentukan kondisi lapar dan kematian hewan.
    Contoh : Tingkat kekenyangan = 3, berarti hewan akan mati jika selama 3 detik tidak mendapatkan makanan.
    */

    int maks_tingkat_kekenyangan
    /*
    Menyimpan nilai maksimum dari tingkat kekenyangan hewan.
    Hal ini digunakan untuk memberi batasan dari tingkat kekenyangan hewan tersebut.
    */
};

#endif // HEWAN_H
