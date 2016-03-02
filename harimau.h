#ifndef HARIMAU_H_INCLUDED
#define HARIMAU_H_INCLUDED
#include "Karnivora.h"

class Harimau : public karnivora{
    public :
        Harimau(int x = 0, int y = 0);
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
        void set_tingkat_kekenyangan();
        void set_maks_tingkat_kekenyangan();
        void get_tingkat_kekenyangan();
        void get_maks_tingkat_kekenyangan();
};


#endif // HARIMAU_H_INCLUDED
