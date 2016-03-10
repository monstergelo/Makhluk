#include "Pemburu.h"

Pemburu::Pemburu(Point P) : Manusia(7,'H',5,P,NULL,true,2,2) {
    setPredator(0,'C');
    setPredator(1,'!');

    setTarget(0,'u');
    setTarget(1,'g');
    setTarget(2,'m');
    setTarget(3,'b');
    setTarget(4,'h');
    setTarget(5,'y');
    setTarget(6,'^');

}

Pemburu::Pemburu(const Pemburu& P) : Manusia(P) {

}

Pemburu& Pemburu::operator= (const Pemburu& P) {
    Manusia::operator=(P);
    return *this;
}

void Pemburu::Reaction(MakhlukHidup& M){
    if (M.getPosisi()== getPosisi()){
        if (get_DNA() == M.get_DNA()) {
            if (M.get_umur() >= get_umur())
                setMati(true);
        } else if (isPredator(M.get_DNA())) {
                setMati(true);
        }
    } else if (isRadius(2,M.getPosisi())){
        if (isPredator(M.get_DNA()))
            set_Arah_Menjauh(posisi,M.getPosisi());
        else if (isTarget(M.get_DNA()))
            set_Arah_Memburu(posisi,M.getPosisi());
    }
}
