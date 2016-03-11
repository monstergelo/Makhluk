#include "world.h"
#include "Polisi.h"



int main()
{
	Point P1(17,18);
	Polisi m1(P1);
	Point P2(17,17);
	Polisi m2(P2);
	Point P5(17,16);
	Polisi m3(P5);
	Point P4(18,17);
	Polisi m4(P4);

	World W;
	W.fill(&m1);
	W.fill(&m2);
	W.fill(&m3);
	W.fill(&m4);

	Point P3(0,31);


	//tes gambar
	W.initDisplay();
	Sleep(2000);


	//hidupkan makhluk
	W.draw(m1);
	W.draw(m2);
	W.draw(m3);
	W.draw(m4);

	thread t0(&KonduktorMakhlukHidup::hidup, &W, ref(m1));
	thread t1(&KonduktorMakhlukHidup::hidup, &W, ref(m2));
	thread t2(&KonduktorMakhlukHidup::hidup, &W, ref(m3));
	thread t3(&KonduktorMakhlukHidup::hidup, &W, ref(m4));


	//pantau makhluk
	W.sinyal();

	W.draw(P3, '.');
	cout << "mantap";
	cout << W.get_daftar(0)->getPosisi().getOrdinat() << endl;

	W.updateDisplay();


	W.draw(P3, '.');
	cout << "GameOver";
	t0.join();
	t1.join();
	t2.join();
	t3.join();


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
