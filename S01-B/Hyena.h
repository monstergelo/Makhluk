#ifndef HYENA_H_INCLUDED
#define HYENA_H_INCLUDED

#include "Karnivora.h"
/**
 *  Class for constructing a carnivore called Hyena
 */
class Hyena : public Karnivora{
    public :
		/**
		*  	ctor that take one argument to set the position of the Hyena
		* 	@param A Point
		*/
        Hyena(Point P = PAwal);
        /**
		 *  a copy construktor
		 */
        Hyena(const Hyena&);
        /**
		 *  an operator=
		 */
        Hyena& operator=(const Hyena&);
        /**
		 *  a destructor
		 */
        ~Hyena();
    private :
		/**
		 * A static constant value of Hyena's age limit
		 */
        const static int batasumur_Hyena = 70;
        /**
		 * A static constant value of Hyena's birthday
		 */
        const static int ulangtahun_Hyena = 3;
        /**
		 * A static constant value of maksimum_tingkat_kekenyangan_Hyena
		 */
        const static int maksimum_tingkat_kekenyangan_Hyena = 90;
        /**
		 * A static constant value of Hyena's velocity
		 */
        const static int kecepatan_Hyena = 4;
        /**
		 * A static constant value of Hyena's acceleration
		 */
        const static int deltaKecepatan_Hyena = 3;
};
#endif // HYENA_H_INCLUDED
