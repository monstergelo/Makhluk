#include "world.h"

int main()
{
	World W;
	Point P1;
	Point P2(1,1);
	Point P3(0,31);
	W.initDisplay();
	W.draw(P1, '?');
	Sleep(3000);

	for(int i=1; i<20 ;++i)
	{
		W.draw(P1, P2, '?');
		P1 = P2;
		P2.setAbsis(P2.getAbsis() + 1);
		P2.setOrdinat(P2.getOrdinat() + 1);
		Sleep(1000);
	}

	W.draw(P3, '.');


	return 0;
}