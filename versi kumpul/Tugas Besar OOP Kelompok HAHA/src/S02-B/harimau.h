#ifndef HARIMAU_H_INCLUDED
#define HARIMAU_H_INCLUDED
#include "Karnivora.h"

/**
 *  Class for constructing a carnivore called Harimau
 */
 
class Harimau : public Karnivora{
    public :
        /**
		*  	ctor that take one argument to set the position of the Harimau
		* 	@param A Point
		*/
        Harimau(Point P);
        /**
		 *  a copy construktor
		 */
        Harimau(const Harimau&);
        /**
		 *  a destructor
		 */
        ~Harimau();
        /**
		 *  an operator=
		 */
        Harimau& operator= (const Harimau&);
    private:
		/**
		 * A static constant value of Harimau's age limit
		 */
        const static int batasumur_Harimau = 99;
        /**
		 * A static constant value of Harimau's birthday
		 */
        const static int ulangtahun_Harimau = 2;
        /**
		 * A static constant value of maksimum_tingkat_kekenyangan_Harimau
		 */
        const static int maksimum_tingkat_kekenyangan_Harimau = 70;
        /**
		 * A static constant value of Harimau's velocity
		 */
        const static int kecepatan_Harimau = 3;
        /**
		 * A static constant value of Harimau's acceleration
		 */
        const static int deltaKecepatan_Harimau = 2;
};


#endif // HARIMAU_H_INCLUDED
