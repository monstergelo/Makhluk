#include "Pohon.h"

Pohon::Pohon(Point P) : Tumbuhan(batasumur_Pohon, DNA_Pohon, ulangtahun_Pohon,P) {
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