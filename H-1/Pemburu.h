#ifndef PEMBURU_H
#define PEMBURU_H

#include "Manusia.h"
/**
 *  Class for constructing a human called Pemburu /*
 */
class Pemburu : public Manusia {
public :
	/**
	*  	ctor that take one argument to set the position of the Pemburu
	* 	@param A Point
	*/
    Pemburu(Point P);
    
    /**
     *	A copy constructor
     */
    Pemburu(const Pemburu&);
    /**
     * An operator=
     */
    Pemburu& operator= (const Pemburu&);
     /**
	 * A procedure that make the pemburu react to the other MakhlukHidup
	 * @param MakhlukHidup
	 */
    void Reaction(MakhlukHidup& M);
};

#endif // PEMBURU_H
