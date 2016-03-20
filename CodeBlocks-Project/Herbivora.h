#ifndef HERBIVORA_H
#define HERBIVORA_H

#include "Hewan.h"

//Catatan : Hewan inherit ke MakhlukHidup, Gerak, dan HuntingSkill
class Herbivora : public Hewan {
public:
    /**
     *
     */
    Herbivora();
    /**
     *
     */
    Herbivora(int _umur, char _DNA, 
              int _ulangtahun, Point P, 
              int kenyang, int maks, 
              char* tar, bool _memburu, 
              int k, int a, 
              bool lambat, int delta);

    //CCTOR
    /**
     *
     */
    Herbivora(const Herbivora&);
    /**
     *
     */
    Herbivora& operator=(const Herbivora&);
    /**
     *
     */
    virtual ~Herbivora();
    /**
     *
     */
    void set_percepat( bool cepat);
    /**
     *
     */
    void set_deltaKecepatan(int kec);
    /**
     *
     */
    bool get_percepat();
    /**
     *
     */
    int get_deltaKecepatan();
    /**
     *
     */
    void prosesMempercepat();
    /**
     *
     */
    virtual void Reaction(MakhlukHidup&);
private:
    /**
     *  Store information how fast the Herbivore got to be.
     */
    int deltaKecepatan;
    /**
     *  Store information is Herbivore need to get faster or not.
     */
    bool percepat;
};


#endif // HERBIVORA_H
