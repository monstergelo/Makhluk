#include "Herbivora.h"
#include <iostream>
using namespace std;

int main () {

	Point P(5,5);
	Herbivora H(2,'a',1,P);
	MakhlukHidup M(1,'c');
	cout << "awal " << H.getPosisi().getAbsis() << " " << H.getPosisi().getOrdinat() << endl;
	
	cout << "akhir " << H.getPosisi().getAbsis() << " " << H.getPosisi().getOrdinat() << endl;
	cout << H.get_deltaKecepatan() << endl;
	

	return 0;
}