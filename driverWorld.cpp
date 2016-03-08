#include "world.h"
#include "Polisi.h"
#include <thread>

int main()
{
	Point P(20,20);
	Polisi m1(P);
	Polisi m2(P);

	World W;
	W.fill(&m1);
	W.fill(&m2);
	cout << "mantap: " << W.get_daftar(0)->getPosisi().getOrdinat() << endl; 
	Point P2(15, 15);
	Point P3(0,31);
	Sleep(5000);
	W.initDisplay();
	W.get_daftar(0)->setPosisi(P2);
	//W.get_daftar(0)->setPosisi(P2);
	//W.get_daftar(0)->setPrecPosisi(P2);
	W.initDraw(*W.get_daftar(0));
	W.initDraw(*W.get_daftar(1));
	thread t0(&KonduktorMakhlukHidup::hidup, &W, ref(m1));
	thread t1(&KonduktorMakhlukHidup::hidup, &W, ref(m2));


	while(1)
	{
		W.draw(*W.get_daftar(0));
		W.draw(*W.get_daftar(1));
		//W.draw(P3, '\n');
		//W.get_daftar(0)->setPrecPosisi(W.get_daftar(0)->getPosisi());
		//W.get_daftar(0)->setPosisi(W.get_daftar(0)->gerak_bebas(W.get_daftar(0)->getPosisi()));
		//cout << W.get_daftar(0)->getPrecPosisi().getOrdinat() << " " << W.get_daftar(0)->getPrecPosisi().getAbsis() << endl;
		//cout << W.get_daftar(0)->getPosisi().getOrdinat() << " " << W.get_daftar(0)->getPosisi().getAbsis() << endl;
		W.draw(P3, '.');
		cout << W.get_daftar(0)->getPrecPosisi().getAbsis() << " " <<
				W.get_daftar(0)->getPrecPosisi().getOrdinat() << endl; 
		cout << W.get_daftar(1)->getPrecPosisi().getAbsis() << " " <<
				W.get_daftar(1)->getPrecPosisi().getOrdinat() << endl; 
		Sleep(100);
	}

	W.draw(P3, '.');


	return 0;
}