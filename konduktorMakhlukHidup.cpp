#include "konduktorMakhlukHidup.h"
#include <chrono>

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
		m1.gerak_bebas();
		sleep_for(nanoseconds(1000000000/m1.get_Kecepatan()));
	}
	
}

