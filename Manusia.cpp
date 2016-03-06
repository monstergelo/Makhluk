#include "Manusia.h"

//CTOR
Manusia::Manusia(int _umur, char _DNA, int _ulangtahun, Point P, char* Target, bool _memburu, int kec, int arah) : MakhlukHidup(_umur,_DNA,_ulangtahun,P), HuntingSkill(Target,_memburu), Gerak(kec,arah) {
    menghindar = true;
}

//CCTOR
Manusia::Manusia(const Manusia& M) : MakhlukHidup(M), HuntingSkill(M), Gerak(M) {
    menghindar = M.menghindar;
}

//DTOR tidak perlu

//OPERATOR =
Manusia& Manusia::operator= (const Manusia& M){
    MakhlukHidup::operator=(M);
    HuntingSkill::operator=(M);
    Gerak::operator=(M);
    menghindar = M.menghindar;
    return *this;
}

void Manusia::setMenghindar(bool m){
    menghindar = m;
}
/*
Mengeset bool menghindar jika ada predator di sekitar.
Hal ini digunakan untuk menentukan gerak selanjutnya yaitu
menjauh dari predator.
*/

//GETTER
bool Manusia::getMenghindar(){
    return menghindar;
}

void Manusia::gerak_memburu(Point Target)
//Membuat gerakan dengan arah menuju suatu titik
{
    if (getMemburu()){
        setPrecPosisi(getPosisi());
        setPosisi(Gerak::gerak_memburu(getPosisi(),Target));
    }
}
void Manusia::gerak_menjauh(Point Predator)
//Membuat gerakan dengan arah menjauhi suatu titik
{
    if (getMenghindar()){
        setPrecPosisi(getPosisi());
        setPosisi(Gerak::gerak_menjauh(getPosisi(),Predator));
    }
}
void Manusia::gerak_berarah(int _arah)
//Membuat gerakan arah yang ditentukan
{
    setPrecPosisi(getPosisi());
    setPosisi(Gerak::gerak_berarah(getPosisi(),_arah));
}
