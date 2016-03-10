#include "world.h"
#include "Polisi.h"

int main()
{
	Point P(5,5);
	Polisi m1(P);

	World W;
	W.fill(&m1);



	Point P3(0,31);


	//tes gambar
	W.initDisplay();
	Sleep(2000);
	//hidupkan makhluk
	thread t0(&KonduktorMakhlukHidup::hidup, &W, ref(m1));


	//pantau makhluk
	//W.sinyal();

	cout << "mantap";
	cout << W.get_daftar(0)->getPosisi().getOrdinat() << endl;

	W.updateDisplay();


	W.draw(P3, '.');
	cout << "GameOver";
	t0.join();


/*	for(int i=0; i<10; ++i)
	{
		for(int j=0; j<10; ++j)
		{
			if(W.get_pemantau(i,j) != NULL)
			{
				W.get_pemantau(i,j)->join();
			}
		}
	}
*/
	return 0;
}
