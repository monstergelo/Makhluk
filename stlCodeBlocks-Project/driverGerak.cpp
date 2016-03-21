#include "Gerak.h"
#include <iostream>
using namespace std;

main()
{
	Gerak g;
	Point p;

	cout << g.get_Kecepatan() << endl;
	cout << g.get_Arah() << endl;

	g.set_Kecepatan(2);
	//g.set_Arah(6);

	cout << g.get_Kecepatan() << endl;
	cout << g.get_Arah() << endl;

	cout << "mulai memburu" << endl << endl;
	//tes gerak mendekat
	Point target(5, 6);

	for(int i=0; i<10; i++)
	{
		p = g.gerak_memburu(p, target);
		cout << p.getAbsis() << endl;
		cout << p.getOrdinat() << endl;
	}

	p.setAbsis(0);
	p.setOrdinat(0);

	cout << "mulai diburu" << endl << endl;
	//tes gerak mendekat

	for(int i=0; i<10; i++)
	{
		p = g.gerak_menjauh(p, target);
		cout << p.getAbsis() << endl;
		cout << p.getOrdinat() << endl;
	}
}