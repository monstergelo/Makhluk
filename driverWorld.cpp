#include "world.h"
#include "Polisi.h"

int main()
{
	Point P(10,10);
	Point P2(20, 20);
	Point P4(20, 10);
	Point P5(10, 20);
	Polisi m1(P2);
	Polisi m5(P5);
	Polisi m4(P4);
	Polisi m2(P);

	World W;
	W.fill(&m1);
	W.fill(&m2);
	W.fill(&m4);
	W.fill(&m5);
	cout << "m1 tes: " << W.get_daftar(0)->getPosisi().getOrdinat() << endl;
	cout << "m2 tes: " << W.get_daftar(1)->getPosisi().getOrdinat() << endl;
	W.get_daftar(0)->Reaction(*W.get_daftar(1));

	Point P3(0,31);
	Sleep(2000);

	//tes gambar
	W.initDisplay();
	W.draw(W.get_daftar(0));
	thread t0(&KonduktorMakhlukHidup::hidup, &W, ref(m1));
	Sleep(1000);
	W.draw(W.get_daftar(0));
	Sleep(5000);
	//hidupkan makhluk
	
	thread t1(&KonduktorMakhlukHidup::hidup, &W, ref(m2));
	thread t3(&KonduktorMakhlukHidup::hidup, &W, ref(m4));
	thread t4(&KonduktorMakhlukHidup::hidup, &W, ref(m5));

	//pantau makhluk
	W.sinyal();

	cout << "mantap";
	W.updateDisplay();


	W.draw(P3, '.');
	cout << "GameOver";
	t0.join();
	t1.join();
	t3.join();
	t4.join();

	for(int i=0; i<10; ++i)
	{
		for(int j=0; j<10; ++j)
		{
			if(W.get_pemantau(i,j) != NULL)
			{
				W.get_pemantau(i,j)->join();
			}
		}
	}

	return 0;
}
