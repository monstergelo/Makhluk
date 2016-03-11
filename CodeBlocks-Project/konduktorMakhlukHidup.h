#ifndef KONDUKTOR_H
#define KONDUKTOR_H

#include "Manusia.h"
#include <thread>


//class untuk mengatur kehidupan makhluk hidup
class KonduktorMakhlukHidup
{
public:
	//ctor, dtor
	KonduktorMakhlukHidup();
	~KonduktorMakhlukHidup();

	//method
	void hidup(Manusia&);//menghidupkan semua makhluk hidup

private:
};

#endif