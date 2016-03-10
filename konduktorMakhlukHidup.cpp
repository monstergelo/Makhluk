#include "konduktorMakhlukHidup.h"
#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

KonduktorMakhlukHidup::KonduktorMakhlukHidup()
{
	
}

KonduktorMakhlukHidup::~KonduktorMakhlukHidup()
{

}

void KonduktorMakhlukHidup::hidup(Manusia &m1)
{
	while(1)
	{
		if(m1.get_Kecepatan() != 0)
		{		
			m1.Manusia::gerak_bebas();
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
	
}

