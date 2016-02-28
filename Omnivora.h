#ifndef OMNIVORA_H
#define OMNIVORA_H

#include "Hewan.h"

class Omnivora : public Hewan {
public :
    virtual void memuda()=0;
    /*
    Mengurangi umur dari Omnivora jika memakan tumbuhan
    */
};

#endif // OMNIVORA_H
