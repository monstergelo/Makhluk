#ifndef MAKHLUK_HIDUP_H
#define MAKHLUK_HIDUP_H

#include "Point.h"

class MakhlukHidup {
public :
    virtual void menua()= 0;
    //menambah umur dari makhluk hidup
    virtual bool mati()= 0;
    //mengembalikan nilai true jika umur makhluk hidup sudah mencapai batas umur atau kondisi tertentu;
    virtual void display()=0;
    //menampilkan makhluk hidup ke layar

protected :
    point posisi;
    //Menyimpan posisi Makhluk Hidup setelah berpindah
    point PPosisi;
    //Menyimpan posisi Makhluk Hidup sebelum berpindah
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
};

#endif // MAKHLUK_HIDUP_H
