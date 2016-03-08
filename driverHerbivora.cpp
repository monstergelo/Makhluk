#include "Herbivora.h"
#include <iostream>
using namespace std;

int main () {

	Point P(5,5);
	Herbivora H;
	cout << "awal " << H.getPosisi().getAbsis() << " " << H.getPosisi().getOrdinat() << endl;
	H.prosesMempercepat();
	H.prosesMempercepat();
	H.prosesMempercepat();
	H.prosesMempercepat();
	H.prosesMempercepat();
	cout << "akhir " << H.getPosisi().getAbsis() << " " << H.getPosisi().getOrdinat() << endl;
	cout << H.get_deltaKecepatan() << endl;
	

	return 0;
}