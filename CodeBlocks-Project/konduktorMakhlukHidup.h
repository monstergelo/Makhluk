#ifndef KONDUKTOR_H
#define KONDUKTOR_H

#include "Manusia.h"
#include "Hewan.h"
#include "Herbivora.h"
#include "Karnivora.h"
#include "Omnivora.h"
#include "Tumbuhan.h"
#include <thread>

/**
 *  A class to control a MakhlukHidup
 */
//class untuk mengatur kehidupan makhluk hidup
class KonduktorMakhlukHidup
{
public:
	//ctor, dtor
	/**
	 *  ctor which initialize lifestate with 1
	 */
	KonduktorMakhlukHidup();
	

	//method
	/**
 	* 	Told a Manusia to do it's behaviour
 	*/	
	void hidup(Manusia&); //menghidupkan semua makhluk hidup
	/**
	 *  Told a Herbivora to do it's behaviour
	 */
	void hidup(Herbivora&);
	/**
	 *  Told a Karnivora to do it's behaviour
	 */
	void hidup(Karnivora&);
	/**
	 *  Told a Omnivora to do it's behaviour
	 */
	void hidup(Omnivora&);
	/**
	 *  Told a Tumbuhan to do it's behaviour
	 */
	void hidup(Tumbuhan&);
	/**
	 *  prevent all behavior to be done
	 */
	void pause();
	/**
	 *  cancel a pause
	 */
	void resume();
	/**
	 *  Increase the umur of a MakhlukHidup
	 */
	void aging(MakhlukHidup&);
	/**
	 *  Set the value of batasBawah
	 */
	void setBawah(int);
	/**
	 *  Set the value of batasSamping
	 */
	void setSamping(int);
	/**
	 *  returns the value of batasBawah
	 */
	int GetBawah();
	/**
	 *  returns the value of batasSamping
	 */
	int GetSamping();

private:
	/**
	 *  a flag to pause method hidup
	 */
	int lifeState;
	/**
	 *  bottom edge of map
	 */
	int batasBawah;
	/**
	 *  right edge of map
	 */
	int batasSamping;
};

#endif