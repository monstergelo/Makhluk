#ifndef HUNTING_SKILL
#define HUNTING_SKILL



class HuntingSkill {
public :
    //CTOR
    HuntingSkill (char* Target = NULL);
    //CCTOR
    HuntingSkill (const HuntingSkill&);
    //DTOR
    ~HuntingSkill ();
    //OPERATOR =
    HuntingSkill& operator= (const HuntingSkill&);

    void setMemburu(bool M);
    /*
    Mengembalikan nilai true jika ada target di sekitar.
    Hal ini digunakan untuk menentukan gerak selanjutnya yaitu
    menuju ke target
    */
protected :
    char* Target
    //Berisi DNA dari target
    bool memburu;
};

#endif // HUNTING_SKILL
