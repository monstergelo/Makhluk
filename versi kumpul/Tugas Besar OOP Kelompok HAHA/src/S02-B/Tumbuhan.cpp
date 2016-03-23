#include "Tumbuhan.h"

Tumbuhan::Tumbuhan(int _umur, char _DNA, int _ulangtahun, Point P, char* predators) : MakhlukHidup(_umur, _DNA, _ulangtahun, P) {

};
Tumbuhan::~Tumbuhan() {

}
Tumbuhan::Tumbuhan(const Tumbuhan& T) : MakhlukHidup(T) {

}
Tumbuhan& Tumbuhan::operator=(const Tumbuhan& T) {
	MakhlukHidup::operator=(T);
	return *this;
}
void Tumbuhan::Reaction(MakhlukHidup& M) {}