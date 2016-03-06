#ifndef KONDUKTOR_H
#define KONDUKTOR_H

#include <thread>
#include "administratorMakhlukHidup.h"

//class untuk mengatur kehidupan makhluk hidup
class KonduktorMakhlukHidup: public AdministratorMakhlukHidup
{
public:
	//ctor, dtor
	KonduktorMakhlukHidup();
	~KonduktorMakhlukHidup();

	//method
	void hidup();//menghidupkan semua makhluk hidup
	void hidup(int); //menghidupkan makhluk hidup pada indeks


private:
};

#endif