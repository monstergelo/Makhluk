#include "world.h"
#include "Polisi.h"
#include <thread>

int main()
{
	Point P(20,20);
	Point P2(20, 20);
	Polisi m1(P2);
	Polisi m2(P);

	World W;
	W.fill(&m1);
	W.fill(&m2);
	cout << "m1 tes: " << W.get_daftar(0)->getPosisi().getOrdinat() << endl; 
	cout << "m2 tes: " << W.get_daftar(1)->getPosisi().getOrdinat() << endl; 
	W.get_daftar(0)->Reaction(*W.get_daftar(1));
	
	Point P3(0,31);
	Sleep(5000);
	W.initDisplay();
	//W.get_daftar(0)->setPosisi(P2);
	thread t0(&KonduktorMakhlukHidup::hidup, &W, ref(m1));
	thread t1(&KonduktorMakhlukHidup::hidup, &W, ref(m2));
	thread t2(&AdministratorMakhlukHidup::sinyal, &W);

	cout << "mantap";
	W.updateDisplay();


	W.draw(P3, '.');
	cout << "GameOver";
	t0.join();
	t1.join();
	t2.join();

	return 0;
}