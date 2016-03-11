#include "Rumput.h"

Rumput::Rumput(int _umur, char _DNA, int _ulangtahun, Point P, char* predators) : Tumbuhan(_umur, _DNA, _ulangtahun, P) {
	setPredator(0,'u');
	setPredator(1,'g');
	setPredator(2,'C');
	setPredator(3,'H');
	setPredator(4,'m');
	setPredator(5,'b');
	setPredator(6,'h');
	setPredator(7,'y');
}
Rumput::~Rumput() {

}
Rumput::Rumput(const Rumput& R) : Tumbuhan(R) {

}
Rumput& Rumput::operator=(const Rumput& R) {
	Tumbuhan::operator=(R);
	return *this;
}
void Rumput::Reaction(MakhlukHidup& M) {
	if (isPredator(M.get_DNA()) && (getPosisi()==M.getPosisi())) {
		setMati(true);
	}
}