#ifndef BERUANG_H_INCLUDED
#define BERUANG_H_INCLUDED

#include "Omnivora.h"
/**
 *  Class for constructing an omnivore called Beruang
 */

class Beruang: public Omnivora{
    public :
		/**
		*  	ctor that take one argument to set the position of the Beruang
		* 	@param A Point
		*/
        Beruang(Point P = PAwal);
        /**
		 *  a copy construktor
		 */
        Beruang(const Beruang&);
        /**
		 *  an operator=
		 */
        Beruang& operator=(const Beruang&);
        /**
		 *  a destructor
		 */
        ~Beruang();
    private :
		/**
		 * A static constant value of Beruang age limit
		 */
        const static int batasumur_Beruang = 7;
        /**
		 * A static constant value of Beruang birthday
		 */
        const static int ulangtahun_Beruang = 4;
        /**
		 * A static constant value of maksimum_tingkat_kekenyangan_Beruang
		 */
        const static int maksimum_tingkat_kekenyangan_Beruang = 10;
        /**
		 * A static constant value of Beruang's velocity
		 */
        const static int kecepatan_Beruang = 4;
};

#endif // BERUANG_H_INCLUDED
