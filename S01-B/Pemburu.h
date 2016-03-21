#ifndef PEMBURU_H
#define PEMBURU_H

#include "Manusia.h"

class Pemburu : public Manusia {
public :
    Pemburu(Point P);

    Pemburu(const Pemburu&);

    Pemburu& operator= (const Pemburu&);

    void Reaction(MakhlukHidup& M);
};

#endif // PEMBURU_H
