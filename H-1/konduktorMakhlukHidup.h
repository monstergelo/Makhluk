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
 	* 	@param a Manusia
 	*/	
	void hidup(Manusia&);
	/**
	 *  Told a Herbivora to do it's behaviour
	 * 	@param a Herbivore
	 */
	void hidup(Herbivora&);
	/**
	 *  Told a Karnivora to do it's behaviour
	 *  @param a Karnivora
	 */
	void hidup(Karnivora&);
	/**
	 *  Told a Omnivora to do it's behaviour
	 * 	@param a Omnivora
	 */
	void hidup(Omnivora&);
	/**
	 *  Told a Tumbuhan to do it's behaviour
	 * 	@param a Tumbuhan
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
	 * 	@param a MakhlukHidup
	 */
	void aging(MakhlukHidup&);
	/**
	 *  Set the value of batasBawah
	 *  @param an integer
	 */
	void setBawah(int);
	/**
	 *  Set the value of batasSamping
	 * 	@param an integer
	 */
	void setSamping(int);
	/**
	 *  returns the value of batasBawah
	 * 	@return an integer
	 */
	int GetBawah();
	/**
	 *  returns the value of batasSamping
	 * 	@return an integer
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
