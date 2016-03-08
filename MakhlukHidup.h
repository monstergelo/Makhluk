#ifndef MAKHLUK_HIDUP_H
#define MAKHLUK_HIDUP_H

#include "Point.h"
#include <stdlib.h>

//Variabel Global
static Point PAwal(0,0);

class MakhlukHidup {
    public :
        //ctor
        MakhlukHidup(int _umur = 0, char _DNA = '*', int _ulangtahun = 0, Point P = PAwal);
        //cctor
        MakhlukHidup(const MakhlukHidup&);
        //dtor
        virtual ~MakhlukHidup();
        //operator =
        MakhlukHidup& operator=(const MakhlukHidup&);
        void menua();
        //menambah umur dari makhluk hidup
        virtual bool isMati();
        //mengembalikan nilai true jika umur makhluk hidup sudah mencapai batas umur atau kondisi tertentu;
        void display();
        //menampilkan makhluk hidup ke layar

        //getter
        int get_umur();
        int get_ulang_tahun();
        char get_DNA();
        int get_batas_umur();
        Point getPosisi();
        Point getPrecPosisi();
        char getPredator(int i);
        int getUkuranPredator();
        /* i adalah indeks dan selalu valid */
        //setter
        void set_umur(int);
        void set_ulang_tahun(int);
        void set_DNA(char);
        void setPosisi(Point);
        void setPrecPosisi(Point);
        void setPredator(int i, char _predator);
        void setMati(bool _mati);
        /* i adalah indeks dari predator dan selalu valid */

        bool isPredator(char DNA_predator);

        virtual void Reaction(const MakhlukHidup&)=0;

    private :
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
        //Menyimpan posisi awal
        Point PPosisi;
        //Menyimpan posisi sebelumnya
        const int ukuran_predator;
        //meyimpan jumlah dari predator
        bool mati;
        //menyimpan kondisi mati
};

#endif // MAKHLUK_HIDUP_H
