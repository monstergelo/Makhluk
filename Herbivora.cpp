#include "Herbivora.h"

Herbivora::Herbivora(int kec) : Hewan() {
	set_deltaKecepatan(kec);
	//set_ukuran_predator(4);
}

Herbivora::Herbivora(const Herbivora& H) : Hewan(H) {
	Herbivora _H = H;
	int _deltaKecepatan = _H.get_deltaKecepatan();
	set_deltaKecepatan(_deltaKecepatan);
	//set_ukuran_predator(H.get_ukuran_predator());
}

//services
void Herbivora::bergerak(MakhlukHidup M){

    if (!Lapar()) {
    	if (!berlari(M)) {
    		gerak_bebas(getPosisi());
    	} else {
    		setPosisi(gerak_menjauh(getPosisi(),M.getPosisi()));
    	}
    } else {
    	gerak_memburu(getPosisi(), M.getPosisi());
    }

}

int Herbivora::get_deltaKecepatan(){
	return deltaKecepatan;
}
void Herbivora::set_deltaKecepatan(int _deltaKecepatan) {
	deltaKecepatan = _deltaKecepatan;
}

bool Herbivora::isPredator(MakhlukHidup M) {
	int i = 0;
	bool stop = false;
	while (i < M.getUkuranPredator() && !stop) {
		if (M.get_DNA() == getPredator(i)) {
			stop = true;
		} else {
			i++;
		}
	}
	return (i < M.getUkuranPredator());
}

bool Herbivora::isTarget(MakhlukHidup M) {
	int i = 0;
	bool stop = false;
	while (i < M.getUkuranPredator() && !stop) {
		if (get_DNA() == M.getPredator(i)) {
			stop = true;
		} else {
			i++;
		}
	}
	return (i < M.getUkuranPredator());
}

bool Herbivora::Lapar(){
	return (get_tingkat_kekenyangan() >= 5);
}

bool Herbivora::berlari(MakhlukHidup M) {
	bool stop = false;
	int i = 1;

	if (isPredator(M)) {
		while (i < 10 && !stop) {
			if (gerak_berarah(getPosisi(),i) == M.getPosisi()) {
				stop = true;
			} else {
				i++;
			}
		} //i >= 10 || stop
		return (i >= 10);
	} else {
		return false;
	}
}
