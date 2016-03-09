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
BurungUnta::BurungUnta(const BurungUnta& Burung) : Herbivora(Burung) {

}
BurungUnta& BurungUnta::operator= (const BurungUnta& Burung) {
	Herbivora::operator=(Burung);
	return *this;
}
BurungUnta::~BurungUnta() {
	
}

//services
void BurungUnta::Reaction(MakhlukHidup& M) {
	if (getPosisi() == M.getPosisi()) {
		if (get_DNA() == M.get_DNA()) {
			setMati(true);
		} else {
			if (isPredator(M.get_DNA())) {
				setMati(true);
			} else if (isTarget(M.get_DNA())) {
				set_tingkat_kekenyangan(get_maks_tingkat_kekenyangan());
			}
		}
	} else {
		if (isRadius(2,M.getPosisi())) {
			if (isPredator(M.get_DNA())) {
				prosesMempercepat();
				gerak_bebas(getPosisi());
			}
		} else {
			set_Kecepatan(kecepatan_BurungUnta);
		}
	}

}