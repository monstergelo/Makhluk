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
	thread t0(&KonduktorMakhlukHidup::hidup, &W, ref(m1));
	thread t1(&KonduktorMakhlukHidup::hidup, &W, ref(m2));
	thread t2(&AdministratorMakhlukHidup::signal, &W);


	W.updateDisplay();

	W.draw(P3, '.');
	cout << "GameOver";
	t0.join();
	t1.join();
	t2.join();

	return 0;
}