#include "Point.h"
#include <iostream>

using namespace std;

int main()
{
	Point P1;
	Point P2(8,9);

	cout << endl;
	cout << P1.getAbsis() << endl;
	cout << P1.getOrdinat() << endl;
	cout << P2.getAbsis() << endl;
	cout << P2.getOrdinat() << endl;

	P1.setAbsis(5);
	P1.setOrdinat(5);

	cout << endl;
	cout << P1.getAbsis() << endl;
	cout << P1.getOrdinat() << endl;
	cout << P2.getAbsis() << endl;
	cout << P2.getOrdinat() << endl;

	P1 = P2;

	P1.geser(1,2);
	P2.geser(8,9);

	cout << endl;
	cout << P1.getAbsis() << endl;
	cout << P1.getOrdinat() << endl;
	cout << P2.getAbsis() << endl;
	cout << P2.getOrdinat() << endl;

	P1 = P2;

	if(P1 == P2) cout << "berhasil" << endl; 

	return 0;
}