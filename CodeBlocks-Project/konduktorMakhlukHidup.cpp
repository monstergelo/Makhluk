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

void KonduktorMakhlukHidup::aging(MakhlukHidup& m1)
{
	while(1)
	{
		m1.menua();
		sleep_for(nanoseconds(1000000000));
	}
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
	thread t(&KonduktorMakhlukHidup::aging, this, ref(m1));

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
	t.detach();
}

void KonduktorMakhlukHidup::hidup(Herbivora& m1)
{
	thread t(&KonduktorMakhlukHidup::aging, this, ref(m1));
	while(1)
	{
		if(lifeState == 1) //cek pause atau tidak
		{
			if(m1.get_Kecepatan() != 0)
			{
				if(m1.getPosisi() == Point(29,29))//ujung kanan-bawah
				{
					m1.set_Arah(8);

					m1.Herbivora::gerak_berarah(m1.get_Arah());
				}
				else if(m1.getPosisi() == Point(0,29))//kiri-bawah
				{
					m1.set_Arah(2);

					m1.Herbivora::gerak_berarah(m1.get_Arah());
				}
				else if(m1.getPosisi() == Point(29,0))//kanan-atas
				{
					m1.set_Arah(6);

					m1.Herbivora::gerak_berarah(m1.get_Arah());
				}
				else if(m1.getPosisi() == Point(0,0))//kiri-atas
				{
					m1.set_Arah(4);

					m1.Herbivora::gerak_berarah(m1.get_Arah());
				}
				else if(m1.getPosisi().getAbsis() == 29)//kanan
				{
					m1.set_Arah(7);

					m1.Herbivora::gerak_berarah(m1.get_Arah());
				}
				else if(m1.getPosisi().getAbsis() == 0)//kiri
				{
					m1.set_Arah(3);

					m1.Herbivora::gerak_berarah(m1.get_Arah());
				}
				else if(m1.getPosisi().getOrdinat() == 29)
				{
					m1.set_Arah(1);

					m1.Herbivora::gerak_berarah(m1.get_Arah());
				}
				else if(m1.getPosisi().getOrdinat() == 0)
				{
					m1.set_Arah(5);

					m1.Herbivora::gerak_berarah(m1.get_Arah());
				}
				else
				{
					m1.Herbivora::gerak_berarah(m1.get_Arah());
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
	t.detach();
}

void KonduktorMakhlukHidup::hidup(Karnivora& k1) {
	thread t(&KonduktorMakhlukHidup::aging, this, ref(k1));
	while(1)
	{
		if(lifeState == 1) //cek pause atau tidak
		{
			if(k1.get_Kecepatan() != 0)
			{
				if(k1.getPosisi() == Point(29,29))//ujung kanan-bawah
				{
					k1.set_Arah(8);

					k1.Karnivora::gerak_berarah(k1.get_Arah());
				}
				else if(k1.getPosisi() == Point(0,29))//kiri-bawah
				{
					k1.set_Arah(2);

					k1.Karnivora::gerak_berarah(k1.get_Arah());
				}
				else if(k1.getPosisi() == Point(29,0))//kanan-atas
				{
					k1.set_Arah(6);

					k1.Karnivora::gerak_berarah(k1.get_Arah());
				}
				else if(k1.getPosisi() == Point(0,0))//kiri-atas
				{
					k1.set_Arah(4);

					k1.Karnivora::gerak_berarah(k1.get_Arah());
				}
				else if(k1.getPosisi().getAbsis() == 29)//kanan
				{
					k1.set_Arah(7);

					k1.Karnivora::gerak_berarah(k1.get_Arah());
				}
				else if(k1.getPosisi().getAbsis() == 0)//kiri
				{
					k1.set_Arah(3);

					k1.Karnivora::gerak_berarah(k1.get_Arah());
				}
				else if(k1.getPosisi().getOrdinat() == 29)
				{
					k1.set_Arah(1);

					k1.Karnivora::gerak_berarah(k1.get_Arah());
				}
				else if(k1.getPosisi().getOrdinat() == 0)
				{
					k1.set_Arah(5);

					k1.Karnivora::gerak_berarah(k1.get_Arah());
				}
				else
				{
					k1.Karnivora::gerak_berarah(k1.get_Arah());
				}
				k1.menua();
				sleep_for(nanoseconds(1000000000/k1.get_Kecepatan()));

				if(k1.isMati())
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
	t.detach();
}
void KonduktorMakhlukHidup::hidup(Omnivora& o1) {
	thread t(&KonduktorMakhlukHidup::aging, this, ref(o1));
	while(1)
	{
		if(lifeState == 1) //cek pause atau tidak
		{
			if(o1.get_Kecepatan() != 0)
			{
				if(o1.getPosisi() == Point(29,29))//ujung kanan-bawah
				{
					o1.set_Arah(8);

					o1.Omnivora::gerak_berarah(o1.get_Arah());
				}
				else if(o1.getPosisi() == Point(0,29))//kiri-bawah
				{
					o1.set_Arah(2);

					o1.Omnivora::gerak_berarah(o1.get_Arah());
				}
				else if(o1.getPosisi() == Point(29,0))//kanan-atas
				{
					o1.set_Arah(6);

					o1.Omnivora::gerak_berarah(o1.get_Arah());
				}
				else if(o1.getPosisi() == Point(0,0))//kiri-atas
				{
					o1.set_Arah(4);

					o1.Omnivora::gerak_berarah(o1.get_Arah());
				}
				else if(o1.getPosisi().getAbsis() == 29)//kanan
				{
					o1.set_Arah(7);

					o1.Omnivora::gerak_berarah(o1.get_Arah());
				}
				else if(o1.getPosisi().getAbsis() == 0)//kiri
				{
					o1.set_Arah(3);

					o1.Omnivora::gerak_berarah(o1.get_Arah());
				}
				else if(o1.getPosisi().getOrdinat() == 29)
				{
					o1.set_Arah(1);

					o1.Omnivora::gerak_berarah(o1.get_Arah());
				}
				else if(o1.getPosisi().getOrdinat() == 0)
				{
					o1.set_Arah(5);

					o1.Omnivora::gerak_berarah(o1.get_Arah());
				}
				else
				{
					o1.Omnivora::gerak_berarah(o1.get_Arah());
				}
				o1.menua();
				sleep_for(nanoseconds(1000000000/o1.get_Kecepatan()));

				if(o1.isMati())
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
	t.detach();
}
