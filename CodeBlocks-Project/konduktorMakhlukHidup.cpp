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

void KonduktorMakhlukHidup::hidup(Manusia &m1)
{
	while(1)
	{
		if(lifeState == 1) //cek pause atau tidak
		{
			if(m1.get_Kecepatan() != 0)
			{		
				m1.Manusia::gerak_berarah();
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

