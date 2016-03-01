#ifndef HERBIVORA_H
#define HERBIVORA_H

#include "Hewan.h"

class Herbivora : public Hewan {
public :
    //5 sekawan
    Herbivora();
    ~Herbivora();
    Herbivora(const Herbivora&);
    Herbivora& operator=(const Herbivora&);
    ifstream operator>> (istream&);
    ofstream operator<< (ostream&);
    
    //services
    void menua();
    //menambah umur dari makhluk hidup
    void gerak();
    //mengbah posisi makhluk hidup sesuai arah dan kecepatan
    bool mati();
    //mengembalikan nilai true jika umur makhluk hidup sudah mencapai batas umur atau kondisi tertentu;
    void display();
    //menampilkan makhluk hidup ke layar
    bool Lapar();
    bool memburu();

    virtual bool berlari()=0;
    /*
    Menghasilkan nilai true jika herbivora menyadari predatornya ada di sekitarnya.
    Hal ini mengakibatkan kecepatan meningkat.
    */
protected :
    int deltaKecepatan;
    /*
    Menyimpan nilai peningkatan kecepatan
    */
};


#endif // HERBIVORA_H
