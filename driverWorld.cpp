#include "world.h"
#include "Manusia.h"

int main()
{
	Manusia m1;

	World W;
	cout << "mantap: " << W.ModeratorMakhlukHidup::get_daftar(0)->getPosisi().getOrdinat() << endl; 
	Point P2(15, 15);
	Point P3(0,31);
	Sleep(10000);
	W.initDisplay();
	W.ModeratorMakhlukHidup::get_daftar(0)->setPosisi(P2);
	W.ModeratorMakhlukHidup::get_daftar(0)->setPrecPosisi(P2);
	W.draw(W.ModeratorMakhlukHidup::get_daftar(0)->getPosisi(), '?');
	Sleep(3000);

	while(1)
	{
		W.draw(W.ModeratorMakhlukHidup::get_daftar(0)->getPrecPosisi(), W.ModeratorMakhlukHidup::get_daftar(0)->getPosisi(), '?');
		W.draw(P3, '\n');
		W.ModeratorMakhlukHidup::get_daftar(0)->setPrecPosisi(W.ModeratorMakhlukHidup::get_daftar(0)->getPosisi());
		W.ModeratorMakhlukHidup::get_daftar(0)->setPosisi(W.ModeratorMakhlukHidup::get_daftar(0)->gerak_bebas(W.ModeratorMakhlukHidup::get_daftar(0)->getPosisi()));
		cout << W.ModeratorMakhlukHidup::get_daftar(0)->getPrecPosisi().getOrdinat() << " " << W.ModeratorMakhlukHidup::get_daftar(0)->getPrecPosisi().getAbsis() << endl;
		cout << W.ModeratorMakhlukHidup::get_daftar(0)->getPosisi().getOrdinat() << " " << W.ModeratorMakhlukHidup::get_daftar(0)->getPosisi().getAbsis() << endl;
		Sleep(1000);
	}

	W.draw(P3, '.');


	return 0;
}