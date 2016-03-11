#include "Polisi.h"
#include <iostream>

using namespace std;

Polisi::Polisi(Point P) : Manusia(80,'C',5,P,NULL,true,3,1) {
    //setPredator
    setPredator(0,'u');
    setPredator(1,'g');
    setPredator(2,'m');
    setPredator(3,'b');
    setPredator(4,'h');
    setPredator(5,'y');
    setPredator(6,'!');

    //setTarget
    setTarget(0,'H');
    setTarget(1,'^');
}

Polisi::Polisi(const Polisi& P) : Manusia(P) {

}

Polisi& Polisi::operator= (const Polisi& P) {
    Manusia::operator=(P);
    return *this;
}

void Polisi::Reaction(MakhlukHidup& M){
    if (M.getPosisi()== getPosisi()){
        if (get_DNA() == M.get_DNA()) {
            if (M.get_umur() >= get_umur())
                setMati(true);
        } else if (isPredator(M.get_DNA())) {
                setMati(true);
        }
    } else if(isRadius(2,M.getPosisi())) {
        if (isPredator(M.get_DNA()))
            set_Arah_Menjauh(getPosisi(),M.getPosisi());
    }else if (isRadius(4,M.getPosisi())){
        if (isTarget(M.get_DNA()) && (M.get_DNA() != '^'))
            set_Arah_Memburu(getPosisi(),M.getPosisi());
    }
}
