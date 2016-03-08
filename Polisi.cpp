#include "Polisi.h"

Polisi::Polisi(Point P) : Manusia(8,'a',5,P,NULL,true,3,1) {
    //setPredator
    setPredator(0,'u');
    setPredator(1,'g');
    setPredator(2,'m');
    setPredator(3,'b');
    setPredator(4,'h');
    setPredator(5,'y');
    setPredator(6,'t');

    //setTarget
    setTarget(0,'p');
    setTarget(1,'r');
}

Polisi::Polisi(const Polisi& P) : Manusia(P) {

}

Polisi& Polisi::operator= (const Polisi& P) {
    Manusia::operator=(P);
}

Polisi::Reaction(const MakhlukHidup& M){
    if (M.getPosisi()== getPosisi()){
        if (getDNA() == M.get_DNA()) {
            if (M.get_umur() > get_umur())
                setMati(true);
            else if (M.get_umur() < get_umur())
                M.setMati(true);
            else {
                M.setMati(true);
                setMati(true);
            }
        } else {
            if (M.isPredator(DNA))
                setMati(true);
            else
                M.setMati(true);
        }
    } else if (isRadius(2,M.getPosisi())){
        if (M.isPredator(DNA))
            gerak_menjauh(M.getPosisi();
        else if (M.isTarget(DNA))
            gerak_memburu(M.getPosisi());
    }
}
/*
ostream& Polisi::operator<< (ostream& out, const Polisi& P){
    out << P.getDNA();
    return out;
} */

