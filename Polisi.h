#ifndef POLISI_H

#include "Manusia.h"
#include <iostream>

class Polisi : public Manusia {
public :
    Polisi(Point P);

    Polisi(const Polisi&);

    Polisi& operator= (const Polisi&);

    void Reaction(MakhlukHidup&);

};

#endif // POLISI_H
