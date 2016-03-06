#include "konduktorMakhlukHidup.h"
#include <iostream>
//#include <thread>

using namespace std;

int main()
{
	cout << "wawan" << endl;
	Manusia m1;
	KonduktorMakhlukHidup K;
	
	cout << "wawani" << endl;

	cout << "m1 posisi: " << m1.getPosisi().getAbsis() << " " << 
		     m1.getPosisi().getOrdinat() << endl;

	thread t(&KonduktorMakhlukHidup::hidup, &K, ref(m1));
	//K.hidup(m1);

	cout << "wawan" << endl;


	while(1)
	{
		cout << "m1 posisi: " << m1.getPosisi().getAbsis() << " " << 
			     m1.getPosisi().getOrdinat() << endl;

	}

	t.join();
	return 0;
}