#ifndef HUNTING_SKILL
#define HUNTING_SKILL

class HuntingSkill {
public :
    void setMemburu();
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
