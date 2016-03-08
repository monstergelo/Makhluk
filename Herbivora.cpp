#include "Herbivora.h"

Herbivora::Herbivora() {
	set_deltaKecepatan(0);
	set_percepat(false);
}
Herbivora::Herbivora(int _umur, char _DNA, int _ulangtahun, Point P, int kenyang, int maks, char* tar,
					bool _memburu, int k, int a, bool cepat, int delta) : Hewan(_umur, _DNA, _ulangtahun, P, kenyang, 
					maks, tar, k, a)
{
	set_percepat(cepat);
	set_deltaKecepatan(delta);
}

Herbivora::~Herbivora() {

}

//CCTOR
Herbivora::Herbivora(const Herbivora& H) : Hewan(H) {
	set_deltaKecepatan(H.deltaKecepatan);
	set_percepat(H.percepat);
}
Herbivora& Herbivora::operator=(const Herbivora& H) {
	Hewan::operator=(H);
	set_deltaKecepatan(H.deltaKecepatan);
	set_percepat(H.percepat);
	return *this;
}
void Herbivora::set_percepat( bool cepat) {
	percepat = cepat;
}
void Herbivora::set_deltaKecepatan(int kec) {
	deltaKecepatan = kec;
}
bool Herbivora::get_percepat() {
	return percepat;
}
int Herbivora::get_deltaKecepatan() {
	return deltaKecepatan;
}
void Herbivora::prosesMempercepat() {
	setPosisi(gerak_bebas(getPosisi()));
}