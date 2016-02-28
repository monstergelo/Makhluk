#ifndef MAKHLUK_HIDUP_H
#define MAKHLUK_HIDUP_H

#define U 1 //Utara
#define TL 2 //Timur Laut
#define T 3 //Timur
#define TG 4 //Tenggara
#define S 5 //Selatan
#define BD 6 //Barat Daya
#define B 7 //Barat
#define BL 8 //Barat Laut

class MakhlukHidup {
public :
    virtual void menua()= 0;
    //menambah umur dari makhluk hidup
    virtual void gerak()= 0;
    //mengbah posisi makhluk hidup sesuai arah dan kecepatan
    virtual bool mati()= 0;
    //mengembalikan nilai true jika umur makhluk hidup sudah mencapai batas umur atau kondisi tertentu;
    virtual void display()=0;
    //menampilkan makhluk hidup ke layar

protected :
    point posisi;
    //Menyimpan posisi Makhluk Hidup
    int kecepatan;
    //Menyimpan waktu makhluk harus berpindah. Contoh kecepatan = 3, tiap tidak detik makhluk berpindah
    int arah;
    //Menyimpan arah makhluk dalam bergerak.
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
