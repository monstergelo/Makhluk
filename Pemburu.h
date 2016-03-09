<<<<<<< HEAD
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
=======
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
>>>>>>> cf3802503bc836c5e4d0b2b8fa0b90609f114326
