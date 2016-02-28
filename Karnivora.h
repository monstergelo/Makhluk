#ifndef KARNIVORA_H
#define KARNIVORA_H

class karnivora : public Hewan {
public :
    virtual bool melambat()=0;
    /*
    kecepatan akan menurun jika tingkat kekenyangan
    di atas 80% maksimal
    */
protected :
    int deltaKecepatan;
    /*
    Menyimpan nilai penurunan kecepatan
    */

};

#endif // KARNIVORA_H
