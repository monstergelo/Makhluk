#include "world.h"



int main()
{
	Point P1(5,5);
	Polisi m1(P1);
	Point P2(5,20);
	Polisi m2(P2);
	Point P5(20,5);
	Polisi m3(P5);
	Point P4(15,29);
	Polisi m4(P4);
	Point P9(13,13);

	World W;
	W.fill(&m1);
	W.fill(&m2);
	W.fill(&m3);
	W.fill(&m4);

	Point P3(0,31);


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
	thread t0(&KonduktorMakhlukHidup::hidup, &W, ref(m1));
	thread t1(&KonduktorMakhlukHidup::hidup, &W, ref(m2));
	thread t2(&KonduktorMakhlukHidup::hidup, &W, ref(m3));
	thread t3(&KonduktorMakhlukHidup::hidup, &W, ref(m4));


	//tampilkan dunia

	thread *d[W.get_size()];

	for(int i=0; i<W.get_size(); ++i)
	{
		if(W.get_daftar(i) != NULL)
			d[i] = new thread(&World::updateMakhluk, &W, i);
	}

	Sleep(1000);
	thread t4(&World::creation, &W, P9, '1');
	Sleep(4000);

	//pause & tangkap layar
	W.pause();
	W.tangkapLayar();
	Sleep(2000);
	W.resume();
	/*for(int i=0; i<W.get_size(); ++i)
	{
		if(W.get_daftar(i) != NULL)
			d[i] = new thread(&World::updateMakhluk, &W, i);
	}*/
	while(!W.isGameOver())
	{
			W.draw(P3, W.get_count());
	}

	W.draw(P3, '.');
	cout << "GameOver";
	t0.join();
	t1.join();
	t2.join();
	t3.join();
	t4.detach();
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
