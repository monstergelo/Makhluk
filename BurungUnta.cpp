#include "BurungUnta.h"

BurungUnta::BurungUnta(Point P) : Herbivora(batasumur_BurungUnta,DNA_BurungUnta,ulangtahun_BurungUnta,
									P,maksimum_tingkat_kekenyangan_BurungUnta,maksimum_tingkat_kekenyangan_BurungUnta,
									NULL,false,kecepatan_BurungUnta,1,false,deltaKecepatan_BurungUnta) 
{
	setPredator(0,'H');
	setPredator(1,'h');
	setPredator(2,'y');
	setPredator(3,'b');
	setPredator(4,'g');


	setTarget(0,'!');
	setTarget(1,'^');
}
BurungUnta::BurungUnta(const BurungUnta& G) : Herbivora(G) {

}
BurungUnta& BurungUnta::operator= (const BurungUnta& G) {
	Herbivora::operator=(G);
	return *this;
}
BurungUnta::~BurungUnta() {
	
}

//services
void BurungUnta::Reaction(MakhlukHidup& M) {
	if (getPosisi() == M.getPosisi()) {
		if (get_DNA() == M.get_DNA()) {
			if (get_umur() >= M.get_umur()) {
				if (get_umur() == M.get_umur()) {
					M.setMati(true);
					setMati(true);
				} else {
					M.setMati(true);
				}
			} else {
				setMati(true);
			}
		} else {
			if (M.isPredator(get_DNA())) {
				M.setMati(true);
			} else {
				if (isPredator(M.get_DNA())) {
					setMati(true);
				}
			}
		}
	} else {
		if (isRadius(2,M.getPosisi())) {
			if (isPredator(M.get_DNA())) {
				prosesMempercepat();
				gerak_bebas(getPosisi());
			} else if (M.isPredator(get_DNA())) {
				gerak_memburu(M.getPosisi());
			}
		} else {
			set_Kecepatan(kecepatan_BurungUnta);
		}
	}
}