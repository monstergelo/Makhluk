#ifndef KONDUKTOR_H
#define KONDUKTOR_H

#include "Manusia.h"
#include "Herbivora.h"
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
	void pause();
	void resume();

private:
	int lifeState;
};

#endif