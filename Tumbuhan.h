#ifndef TUMBUHAN_H
#define TUMBUHAN_H

#include "MakhlukHidup.h"

/**
 *	A Tumbuhan class. A class that describe plant.
 *	This class inherit from MakhlukHidup class.
 */

class Tumbuhan : public MakhlukHidup {
public:
	/**
	 *	A constructor.
	 *	It use default parameters.
	 *	@see MakhlukHidup
	 */
	Tumbuhan(int=0 , char='*' , int=0 , Point=PAwal ,char* predators=NULL);
	/**
	 *	A virtual destructor.
	 *	When it's child (Pointer of this class) destruct, this class will be destructed too.
	 */
	virtual ~Tumbuhan();
	/**
	 *	A copy constructor.
	 */
	Tumbuhan(const Tumbuhan&);
	/**
	 *	An operator =
	 */
	Tumbuhan& operator=(const Tumbuhan&);
 	/**
	 *	virtual function to react when conditions to react is true.
	 */
 	virtual void Reaction(MakhlukHidup&);
private:

};

#endif