#include "Herbivora.h"
#include "MakhlukHidup.h"
#include "Hewan.h"
#include "Gerak.h"
#include "Point.h"
#include <iostream>
using namespace std;

int main() {
	
	MakhlukHidup M1 = new Hewan();
	Hewan _M1 = new Herbivora(4);

	cout << M1.get_deltaKecepatan() << " <- M1.get_deltaKecepatan()" << endl;
	cout << M1.get_ukuran_predator() << " <- M1.get_ukuran_predator()" << endl;

	Hewan M2 = new Herbivora(M1);

	cout << M1.get_deltaKecepatan() << " <- M2.get_deltaKecepatan()" << endl;
	cout << M1.get_ukuran_predator() << " <- M2.get_ukuran_predator()" << endl;

	M2.set_deltaKecepatan(8);

    int a = M1.get_umur(); cout << "a " << a << endl;
    int b = M1.get_ulang_tahun(); cout << "b " << b << endl;
    char c = M1.get_DNA(); cout << "c " << c << endl;
    int d = M1.get_batas_umur(); cout << "d " << d << endl;
    Point e;
    e = M1.getPosisi(); cout << "e-x:e-y " << getAbsis() << ":" << getOrdinat() << endl;
    int f = M1.get_ukuran_predator(); cout << "f " << f << endl;
    M1.set_umur(1);
    M1.set_ulang_tahun(2);
    M1.set_DNA(3);
    Point g(1,2);
    M1.setPosisi(g);
    M1.set_ukuran_predator(10);

	return 0;
}