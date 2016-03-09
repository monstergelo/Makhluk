#include "Gajah.h"

Gajah::Gajah(Point P) : Herbivora(batasumur_Gajah,DNA_Gajah,ulangtahun_Gajah,
									P,maksimum_tingkat_kekenyangan_Gajah,maksimum_tingkat_kekenyangan_Gajah,
									NULL,false,kecepatan_Gajah,1,false,deltaKecepatan_Gajah) 
{
	setPredator(0,'H');
	setPredator(1,'h');
	setPredator(2,'y');
	setPredator(3,'b');

	setTarget(0,'!');
	setTarget(1,'^');
	setTarget(2,'u');
}
Gajah::Gajah(const Gajah& G) : Herbivora(G) {

}
Gajah& Gajah::operator= (const Gajah& G) {
	Herbivora::operator=(G);
	return *this;
}
Gajah::~Gajah() {
	
}

//services
void Gajah::Reaction(MakhlukHidup& M) {
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
			set_Kecepatan(kecepatan_Gajah);
		}
	}
}