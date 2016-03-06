#include "konduktorMakhlukHidup.h"


//using namespace std;




KonduktorMakhlukHidup::KonduktorMakhlukHidup()
{
	
}

KonduktorMakhlukHidup::~KonduktorMakhlukHidup()
{

}

void KonduktorMakhlukHidup::hidup(Manusia &m1)
{
	//while(1)
	
		m1.setPosisi(m1.gerak_bebas(m1.getPosisi()));
	
}

