#ifndef HARIMAU_H_INCLUDED
#define HARIMAU_H_INCLUDED
#include "Karnivora.h"

class Harimau : public karnivora{
    public :
        /* ctor, dtor, operator=, cctor */
        Harimau(int _umur, char *_predator, char _DNA, int _ulangtahun, Point P);
        Harimau (const Harimau&);
        ~Harimau();
        /* Karnivora */
        bool melambat();
        /* Mahluk Hidup */
        void menua();
        bool mati();
        void display();
        /* Dari hewan.h */
        //ifstream operator>> (istream&);
        //ofstream operator<< (ostream&);
        bool Lapar();
};


#endif // HARIMAU_H_INCLUDED
