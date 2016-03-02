#include "Herbivora.h"

Herbivora::Herbivora(int kec) {
	set_deltaKecepatan(kec);

}

Herbivora::Herbivora(const Herbivora& H) {
    set_deltaKecepatan(get_deltaKecepatan(H));
}

//services
void Herbivora::gerak(){
    if (!Lapar()) {
    	gerak_bebas(getPosisi());
    } else {
    	gerak_memburu(getPosisi(), /*Point dari target*/);
    }

}

virtual int Herbivora::get_deltaKecepatan(){
	return deltaKecepatan;
}
virtual void Herbivora::set_deltaKecepatan(int _deltaKecepatan) {
	deltaKecepatan = _deltaKecepatan;
}


bool Herbivora::Lapar(){
	//lagi bikin
}

bool Herbivora::berlari() {
	Point P; //Menyimpan Point predator

	bool stop = false;
	int i = 1;
	while (i < 10 && !stop) {
		if (gerak_berarah(getPosisi(),i) == /*Point dari predator*/) {
			setPosisi(gerak_menjauh(getPosisi(),/*Point dari predator*/));
			stop = true;
		} else {
			i++;
		}
	} //i >= 10 || stop
	if (i >= 10) {
		return false;
	} else {
		return true;
	}
}
