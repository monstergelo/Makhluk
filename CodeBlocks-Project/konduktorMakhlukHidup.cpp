#include "konduktorMakhlukHidup.h"
#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

KonduktorMakhlukHidup::KonduktorMakhlukHidup()
{
	lifeState = 1;
}

KonduktorMakhlukHidup::~KonduktorMakhlukHidup()
{

}

void KonduktorMakhlukHidup::pause()
{
	lifeState = 0;
}

void KonduktorMakhlukHidup::resume()
{
	lifeState = 1;
}

void KonduktorMakhlukHidup::hidup(Manusia& m1)
{
	while(1)
	{
		if(lifeState == 1) //cek pause atau tidak
		{
			if(m1.get_Kecepatan() != 0)
			{
				if(m1.getPosisi() == Point(29,29))//ujung kanan-bawah
				{
					m1.set_Arah(8);

					m1.Manusia::gerak_berarah();
				}
				else if(m1.getPosisi() == Point(0,29))//kiri-bawah
				{
					m1.set_Arah(2);

					m1.Manusia::gerak_berarah();
				}
				else if(m1.getPosisi() == Point(29,0))//kanan-atas
				{
					m1.set_Arah(6);

					m1.Manusia::gerak_berarah();
				}
				else if(m1.getPosisi() == Point(0,0))//kiri-atas
				{
					m1.set_Arah(4);

					m1.Manusia::gerak_berarah();
				}
				else if(m1.getPosisi().getAbsis() == 29)//kanan
				{
					m1.set_Arah(7);

					m1.Manusia::gerak_berarah();
				}
				else if(m1.getPosisi().getAbsis() == 0)//kiri
				{
					m1.set_Arah(3);

					m1.Manusia::gerak_berarah();
				}
				else if(m1.getPosisi().getOrdinat() == 29)
				{
					m1.set_Arah(1);

					m1.Manusia::gerak_berarah();
				}
				else if(m1.getPosisi().getOrdinat() == 0)
				{
					m1.set_Arah(5);

					m1.Manusia::gerak_berarah();
				}
				else
				{
					m1.Manusia::gerak_berarah();
				}
				m1.menua();
				sleep_for(nanoseconds(1000000000/m1.get_Kecepatan()));

				if(m1.isMati())
				{
					sleep_for(nanoseconds(3000000000));
					break;
				}
			}
			else
			{
				sleep_for(nanoseconds(300000000));
			}
		}
		else if(lifeState == 0)
		{

		}
	}
}

void KonduktorMakhlukHidup::hidup(Herbivora& m1)
{
	while(1)
	{
		if(lifeState == 1) //cek pause atau tidak
		{
			if(m1.get_Kecepatan() != 0)
			{
				if(m1.getPosisi() == Point(29,29))//ujung kanan-bawah
				{
					m1.set_Arah(8);

					m1.Gerak::gerak_berarah(m1.getPosisi());
				}
				else if(m1.getPosisi() == Point(0,29))//kiri-bawah
				{
					m1.set_Arah(2);

					m1.Gerak::gerak_berarah(m1.getPosisi());
				}
				else if(m1.getPosisi() == Point(29,0))//kanan-atas
				{
					m1.set_Arah(6);

					m1.Gerak::gerak_berarah(m1.getPosisi());
				}
				else if(m1.getPosisi() == Point(0,0))//kiri-atas
				{
					m1.set_Arah(4);

					m1.Gerak::gerak_berarah(m1.getPosisi());
				}
				else if(m1.getPosisi().getAbsis() == 29)//kanan
				{
					m1.set_Arah(7);

					m1.Gerak::gerak_berarah(m1.getPosisi());
				}
				else if(m1.getPosisi().getAbsis() == 0)//kiri
				{
					m1.set_Arah(3);

					m1.Gerak::gerak_berarah(m1.getPosisi());
				}
				else if(m1.getPosisi().getOrdinat() == 29)
				{
					m1.set_Arah(1);

					m1.Gerak::gerak_berarah(m1.getPosisi());
				}
				else if(m1.getPosisi().getOrdinat() == 0)
				{
					m1.set_Arah(5);

					m1.Gerak::gerak_berarah(m1.getPosisi());
				}
				else
				{
					m1.Gerak::gerak_berarah(m1.getPosisi());
				}
				m1.menua();
				sleep_for(nanoseconds(1000000000/m1.get_Kecepatan()));

				if(m1.isMati())
				{
					sleep_for(nanoseconds(3000000000));
					break;
				}
			}
			else
			{
				sleep_for(nanoseconds(300000000));
			}
		}
		else if(lifeState == 0)
		{

		}
	}
}
