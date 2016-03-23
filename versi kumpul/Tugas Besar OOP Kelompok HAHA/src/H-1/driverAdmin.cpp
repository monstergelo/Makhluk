#include "administratorMakhlukHidup.h"
#include <iostream>

using namespace std;


main()
{
	AdministratorMakhlukHidup a;

	Herbivora h0;
	Herbivora h1;
	Herbivora h2;
	Herbivora h3;
	a.fill(&h0);
	a.fill(&h1);
	a.fill(&h2);
	a.fill(&h3);
	cout << "count sekarang " << a.get_count() << endl;
	cout << "wawa 0 " << a.get_daftar(0)->getPosisi().getAbsis() << endl;
	cout << "wawa 1 " << a.get_daftar(1)->getPosisi().getAbsis() << endl;
	cout << "wawa 2 " << a.get_daftar(2)->getPosisi().getAbsis() << endl;
	cout << "wawa 3 " << a.get_daftar(3)->getPosisi().getAbsis() << endl;

	a.check();
}