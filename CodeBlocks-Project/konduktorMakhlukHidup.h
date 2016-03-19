#ifndef KONDUKTOR_H
#define KONDUKTOR_H

#include "Manusia.h"
#include "Hewan.h"
#include "Herbivora.h"
#include "Karnivora.h"
#include "Omnivora.h"
#include <thread>


//class untuk mengatur kehidupan makhluk hidup
class KonduktorMakhlukHidup
{
public:
	//ctor, dtor
	KonduktorMakhlukHidup();
	~KonduktorMakhlukHidup();

	

	//method
	/**
 	* 	Told Manusia to do it's behaviour
 	*/	
	void hidup(Manusia&);//menghidupkan semua makhluk hidup
	void hidup(Herbivora&);
	void hidup(Karnivora&);
	void hidup(Omnivora&);
	void pause();
	void resume();
	void aging(MakhlukHidup&);

private:
	int lifeState;
};

#endif