#include "Manusia.h"

Manusia::Manusia(int _umur, char _DNA, int _ulangtahun, Point P, char* Target, bool _memburu, int kec, int arah) : MakhlukHidup(_umur,_DNA,_ulangtahun,P), HuntingSkill(Target,_memburu), Gerak(kec,arah) {
    menghindar = true;
}

Manusia::Manusia(const Manusia& M) : MakhlukHidup(M), HuntingSkill(M), Gerak(M) {
    menghindar = M.menghindar;
}

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

bool Manusia::getMenghindar(){
    return menghindar;
}

void Manusia::gerak_bebas(){
    setPosisi(Gerak::gerak_bebas(getPosisi()));
}

void Manusia::gerak_memburu(Point Target)
{
    if (getMemburu()){
        setPosisi(Gerak::gerak_memburu(getPosisi(),Target));
    }
}

void Manusia::gerak_menjauh(Point Predator)
{
    if (getMenghindar()){
        setPosisi(Gerak::gerak_menjauh(getPosisi(),Predator));
    }
}

void Manusia::gerak_berarah()
{
    setPosisi(Gerak::gerak_berarah(getPosisi()));
}
