#ifndef POLISI_H

#include "Manusia.h"
#include <iostream>

class Polisi : public Manusia {
public :
    void Polisi();

    Polisi(const Polisi&);

    Polisi& operator= (const Polisi&);

    ostream& operator<< (ostream&, const Polisi&);

};

#endif // POLISI_H
