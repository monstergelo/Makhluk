#ifndef MAKHLUK_HIDUP_H
#define MAKHLUK_HIDUP_H

#include "Point.h"

class MakhlukHidup {
    public :
        //ctor
        MakhlukHidup(int _umur, char *predator, char _DNA, int _ulangtahun, Point P);
        //cctor
        MakhlukHidup(const MakhlukHidup&);
        //dtor
        ~MakhlukHidup();
        //operator =
        MakhlukHidup& operator=(const MakhlukHidup&);
        void menua();
        //menambah umur dari makhluk hidup
        bool mati();
        //mengembalikan nilai true jika umur makhluk hidup sudah mencapai batas umur atau kondisi tertentu;
        void display();
        //menampilkan makhluk hidup ke layar

        //getter
        int get_umur();
        int get_ulang_tahun();
        char get_DNA();
        int get_batas_umur();
        Point getPosisi();
        //setter
        void get_umur(int);
        void get_ulang_tahun(int);
        void get_DNA(char);
        void setPosisi(Point);

    protected :
        int umur;
        //Menyimpan umur dari makhluk hidup;
        int ulang_tahun;
        //Menyimpan waktu untuk bertambah umur
        char DNA;
        //Menyimpan DNA dari makhluk hidup
        char* predator;
        //Menyimpan DNA predator dari makhluk hidup
        const int batas_umur;
        //Menyimpan batas umur makhluk hidup
        Point posisi;
        Point PPosisi;
};

#endif // MAKHLUK_HIDUP_H
