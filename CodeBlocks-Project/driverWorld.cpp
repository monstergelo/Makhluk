#include "world.h"

char opsi = 'W';

int GetKey() {
	int i;

	while (1) {
		for(i = 8; i < 48; i++){
		        if (GetAsyncKeyState(i) == -32767)
		        	if (i == 13) // ENTER
		        		return i;
		    }

	    //Looping untuk karakter hruruf dan angka
	    for(i = 48; i <= 90; i++){
	        if (GetAsyncKeyState(i) == -32767)
				if (i == '1' || i == '2' || i == '3' || i == '4' || i=='5' || i=='6' || i=='7' || i=='8' || i=='9' || i=='0' || i == 'P')
					return i;
	    }

		for(i = 91; i <= 222; i++){
	        if (GetAsyncKeyState(i) == -32767)
				if (i == '1' || i == '2' || i == '3' || i == '4' || i=='5' || i=='6' || i=='7' || i=='8' || i=='9' || i=='0' || i == 'P')
					return i;
	    }

	}
}

void listenKey()
{
	while(1)
	{
		opsi = getch();
		Sleep(50);
	}
}

int main()
{
	//typedef void (KonduktorMakhlukHidup::*hidup_herbivora)(Herbivora&);
	typedef void (KonduktorMakhlukHidup::*hidup_manusia)(Manusia&);
	//typedef void (KonduktorMakhlukHidup::*hidup_karnivora)(Karnivora&);
	//typedef void (KonduktorMakhlukHidup::*hidup_omnivora)(Omnivora&);

	
	thread l(listenKey);
	Sleep(1000);
	cout << opsi << endl;
	Sleep(2000);


	Point P1(5,18);
	Polisi m1(P1);
	Point P2(2,29);
	Polisi m2(P2);
	Point P5(20,18);
	Pemburu m3(P5);
	Point P4(15,29);
	Pemburu m4(P4);
	Point P9(13,18);

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
	thread t0((hidup_manusia)(&KonduktorMakhlukHidup::hidup), &W, ref(m1));
	thread t1((hidup_manusia)(&KonduktorMakhlukHidup::hidup), &W, ref(m2));
	thread t2((hidup_manusia)(&KonduktorMakhlukHidup::hidup), &W, ref(m3));
	thread t3((hidup_manusia)(&KonduktorMakhlukHidup::hidup), &W, ref(m4));


	//tampilkan dunia

	thread *d[W.get_size()];
	for(int i=0; i<W.get_size(); ++i)
	{
		if(W.get_daftar(i) != NULL)
			d[i] = new thread(&World::updateMakhluk, &W, i);
	}
/*
	Sleep(1000);
	thread t4(&World::creation, &W, P9, '1');
	Sleep(4000);

	W.pause();
	W.tangkapLayar();
	thread t5(&World::creation, &W, P9, '1');
	Sleep(2000);
	W.resume();
*/

	while(!W.isGameOver())
	{
		if(opsi == '1')
		{
			new thread(&World::creation, &W, P9, '1');
			opsi = 'W';
		}
		else if(opsi == 'p')
		{
			W.pause();
		}
		else if(opsi == '\n')
		{
			W.tangkapLayar();
		}
		else
		{
			W.resume();
		}

		W.draw(P3, W.get_count());
	}

	W.draw(P3, '.');
	cout << "GameOver";
	t0.join();
	t1.join();
	t2.join();
	t3.join();
//	t4.detach();
//	t5.detach();
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
