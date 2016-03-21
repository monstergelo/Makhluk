#include "world.h"

char opsi = 'W';

void listenKey()
{
	while(1)
	{
		opsi = getch();
	}
}

int main()
{
	typedef void (KonduktorMakhlukHidup::*hidup_herbivora)(Herbivora&);
	typedef void (KonduktorMakhlukHidup::*hidup_manusia)(Manusia&);
	typedef void (KonduktorMakhlukHidup::*hidup_karnivora)(Karnivora&);
	typedef void (KonduktorMakhlukHidup::*hidup_omnivora)(Omnivora&);

	Point P1(5,18);
	Polisi m1(P1);
	Point P2(2,29);
	Hyena m2(P2);
	Point P5(20,18);
	Pemburu m3(P5);
	Point P4(15,29);
	Gajah m4(P4);
	Point P9(13,18);

	World W;
	W.fill(&m1);
	W.fill(&m2);
	W.fill(&m3);
	W.fill(&m4);

	int border = (W.getPanjang() < W.getLebar())?W.getPanjang():W.getLebar();

	thread l(listenKey);

	Point P3(0,W.getPanjang());


	//tes gambar
	W.initDisplay();
	Sleep(2000);



	W.initDraw(m1);
	W.initDraw(m2);
	W.initDraw(m3);
	W.initDraw(m4);

	//pantau makhluk
	W.sinyal();

	//hidupkan makhluk
	thread t0((hidup_manusia)(&KonduktorMakhlukHidup::hidup), &W, ref(m1));
	thread t1((hidup_karnivora)(&KonduktorMakhlukHidup::hidup), &W, ref(m2));
	thread t2((hidup_manusia)(&KonduktorMakhlukHidup::hidup), &W, ref(m3));
	thread t3((hidup_herbivora)(&KonduktorMakhlukHidup::hidup), &W, ref(m4));


	//tampilkan dunia

	thread *d[W.get_size()];
	for(int i=0; i<W.get_size(); ++i)
	{
		if(W.get_daftar(i) != NULL)
			d[i] = new thread(&World::updateMakhluk, &W, i);
	}

	while(!W.isGameOver())
	{       
		if((opsi >= '0') && (opsi <= '9'))
		{
			P9 = Point(border); 
			new thread(&World::creation, &W, P9, opsi);
			opsi = 'W';
		}
		else if(opsi == 'p')
		{
			W.pause();
			opsi = 'W';
		}
		else if(opsi == 'c')
		{
			W.tangkapLayar();
			opsi = 'W';
		}
		else if(opsi == ' ')
		{
			W.resume();
			opsi = 'W';
		}
		else if(opsi == 'x')
		{
			W.killAll();
		}

		W.draw(P3, W.get_count());
	}

	W.draw(P3, '.');
	cout << "GameOver";
	t0.detach();
	t1.detach();
	t2.detach();
	t3.detach();
	l.detach();
	W.draw(P3, '.');
	cout << "Mati Semua";

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
