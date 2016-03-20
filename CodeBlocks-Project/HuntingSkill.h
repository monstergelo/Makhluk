#ifndef HUNTING_SKILL
#define HUNTING_SKILL

#include <stdlib.h>
#include "Point.h"

/**
* HuntingSkill Class. Kelas yang memberikan kemampuan memburu pada Makhluk Hidup.
*/
class HuntingSkill {
public :
    /**
    * A Constructor.
    * Konstruktor dari HuntingSkill dengan signature berupa default parameter
    * @param _Target , parameter pertama yang menyimpan tabel DNA dari target
    * @param _memburu , paramter kedua yang meyimpan kondisi akan berburu atau tidak
    */
    HuntingSkill (char* _Target = NULL, bool _memburu = false);

    /**
    * A Copy Constructor.
    */
    HuntingSkill (const HuntingSkill&);

    /**
    * A Destructor.
    */
    virtual ~HuntingSkill ();

    /**
    * An Operator =.
    */
    HuntingSkill& operator= (const HuntingSkill&);

    /**
    * Prosedur setter untuk atribut Memburu
    * @param M , parameter pertama yang menyimpan kondisi yang akan diubah
    */
    void setMemburu(bool M);

    void setSedangMemburu(bool s);

    bool getSedangMemburu();
    /**
    * Prosedur setter untuk atribut tabel Target
    * @param i , parameter pertama yang menyimpan nilai indeks tabel
    * @param _target , parameter kedua yang menyimpan DNA target
    */
    void setTarget (int i, char _target);

    /**
    * Fungsi getter untuk atribut tabel Target
    * @return Mengembalikan atribut tabel Target
    */
    char* getTarget();

    /**
    * Fungsi getter untuk atribut Memburu
    * @return Mengembalikan atribut Memburu
    */
    bool getMemburu();

    /**
    * Fungsi mencari anggota untuk atribut tabel Target
    * @param _target , parameter pertama yang menyimpan DNA yang akan dicari
    * @return Mengembalikan nilai true jika _target berada pada tabel Target
    */
    bool isTarget(char _target);

private :
    /**
    * Private Attribute yang menyimpan DNA target
    */
    char* Target;

    /**
    * Private Attribute yang menyimpan kondisi akan berburu atau tidak
    */
    bool memburu;

    /**
    * Constant Private Attribute yang menyimpan ukuran dari tabel Target
    */
    const int ukuran_target;

    /**
    * Private Attribute yang menyimpan kondisi sedang berburu atau tidak
    */
    bool sedangMemburu;
};

#endif // HUNTING_SKILL
