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
    int get_deltaKecepatan();
    void set_deltaKecepatan(int _deltaKecepatan);

    //services
private :
    const int deltaKecepatan;
    /*
    Menyimpan nilai peningkatan kecepatan
    */
};


#endif // HERBIVORA_H
