#include "Pohon.h"

Pohon::Pohon(int _umur, char _DNA, int _ulangtahun, Point P, char* predators) : Tumbuhan(_umur, _DNA, _ulangtahun, P) {
	setPredator(0,'g');
	setPredator(1,'u');
}
Pohon::~Pohon() {

}
Pohon::Pohon(const Pohon& P) : Tumbuhan(P) {

}
Pohon& Pohon::operator=(const Pohon& P) {
	Tumbuhan::operator=(P);
	return *this;
}
void Pohon::Reaction(MakhlukHidup& M) {
	if (isPredator(M.get_DNA()) && (getPosisi()==M.getPosisi())) {
		setMati(true);
	}
}