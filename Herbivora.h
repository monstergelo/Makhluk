#ifndef HERBIVORA_H
#define HERBIVORA_H

#include "Hewan.h"

//Catatan : Hewan inherit ke MakhlukHidup, Gerak, dan HuntingSkill
class Herbivora : public Hewan {
public :
    //4 sekawan
    Herbivora(int kec = 0);
    virtual ~Herbivora();
    Herbivora(const Herbivora&);
    Herbivora& operator=(const Herbivora&);
    
    //getter-setter
    virtual int get_deltaKecepatan();
    virtual void Herbivora::set_deltaKecepatan(int _deltaKecepatan);

    //services
    void bergerak(MakhlukHidup M);
    /*
    Mengubah posisi dari Herbivora ke posisi M jika Herbivora merupakan predator dari M.
    Mengubah posisi secara acak apabila Herbivora bukan predator dari M.
    */
    bool isTarget(MakhlukHidup M);
    /*
    Menghasilkan nilai true jika MakhlukHidup M mempunyai predator Herbivora. Hal ini
    akan membantu Herbivora dalam mencari makanan (berburu).
    */
    bool isPredator(MakhlukHidup M);
    /*
    Menghasilkan nilai true jika MakhlukHidup M adalah predator dari Herbivora. Hal
    ini akan membantu penyadaran Herbivora terhadap MakhlukHidup yang berada di sekitarnya.
    */
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
