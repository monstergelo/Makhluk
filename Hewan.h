#ifndef HEWAN_H
#define HEWAN_H

#include "MakhlukHidup.h"
#include "HuntingSkill.h"
#include "Gerak.h"

class Hewan : public MakhlukHidup, public HuntingSkill, public Gerak{
public :
    //5 sekawan
    Hewan(int _umur = 0, char _DNA = '*', int _ulangtahun = 0, Point P = PAwal, int kenyang = 0, int maks = 0, char* tar = NULL, int k = 0, int a = 0);
    //~Hewan();
    Hewan(const Hewan&);
    Hewan& operator=(const Hewan&);

    void setLapar(bool lap);
    /*
    Menghasilkan true jika tingkat kekenyangan rendah.
    Hal ini mengakitkan skill berburu dari hewan muncul.
    */
    void set_tingkat_kekenyangan(int kenyang);
    void set_maks_tingkat_kekenyangan(int maks);
    int get_tingkat_kekenyangan();
    int get_maks_tingkat_kekenyangan();
    bool get_lapar();

private :
    int tingkat_kekenyangan;
    /*
    Menyimpan nilai tingkat kekenyangan dari hewan. Hal ini dapat digunakan
    untuk menentukan kondisi lapar dan kematian hewan.
    Contoh : Tingkat kekenyangan = 3, berarti hewan akan mati jika selama 3 detik tidak mendapatkan makanan.
    */

    int maks_tingkat_kekenyangan;
    /*
    Menyimpan nilai maksimum dari tingkat kekenyangan hewan.
    Hal ini digunakan untuk memberi batasan dari tingkat kekenyangan hewan tersebut.
    */
    bool Lapar;
};

#endif // HEWAN_H
