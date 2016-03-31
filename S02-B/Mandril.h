#ifndef MANDRIL_H_INCLUDED
#define MANDRIL_H_INCLUDED

#include "Omnivora.h"
/**
 *  Class for constructing a omnivore called Mandril /*
 */
class Mandril: public Omnivora{
    public :
		/**
		*  	ctor that take one argument to set the position of the Harimau
		* 	@param A Point
		*/
        Mandril(Point P = PAwal);
        /**
		 *  a copy construktor
		 */
        Mandril(const Mandril&);
         /**
		 *  an operator=
		 */
        Mandril& operator=(const Mandril&);
         /**
		 *  a destructor
		 */
        ~Mandril();
    private :
		/**
		 * A static constant value of Mandril age limit
		 */
        const static int batasumur_Mandril = 87;
        /**
		 * A static constant value of Mandril birthday
		 */
        const static int ulangtahun_Mandril = 4;
        /**
		 * A static constant value of maksimum_tingkat_kekenyangan_Mandril
		 */
        const static int maksimum_tingkat_kekenyangan_Mandril = 25;
        /**
		 * A static constant value of Mandril's velocity
		 */
        const static int kecepatan_Mandril = 3;
};

#endif // MANDRIL_H_INCLUDED
