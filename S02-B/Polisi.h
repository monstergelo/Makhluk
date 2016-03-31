#ifndef POLISI_H

#include "Manusia.h"
#include <iostream>

/**
 *  Class for constructing a human called Polisi /*
 */
class Polisi : public Manusia {
public :
	/**
	*  	ctor that take one argument to set the position of the Polisi
	* 	@param A Point
	*/
    Polisi(Point P);
    /**
     *	A copy constructor
     */
    Polisi(const Polisi&);
     /**
     * An operator=
     */
    Polisi& operator= (const Polisi&);
    /**
	 * A procedure that make the Polisi react to the other MakhlukHidup
	 * @param MakhlukHidup
	 */
    void Reaction(MakhlukHidup&);

};

#endif // POLISI_H
