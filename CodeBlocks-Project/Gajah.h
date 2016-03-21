#include "Herbivora.h"

/**
 *  Class for constructing a Herbivore called Gajah
 */
class Gajah : public Herbivora {
	public:
		/**
		*  	ctor that take one argument to set the position of the Gajah
		* 	@param A Point
		*/
		Gajah(Point P);
		/**
		 *  a destructor
		 */
		~Gajah();
		/**
		 *  a copy construktor
		 */
		Gajah(const Gajah&);
		/**
		 *  an operator=
		 */
		Gajah& operator= (const Gajah&);
		/**
		 * A member procedure that makes Burung Unta react, respond the other Organism
		 * @param a MakhlukHidup
		 */
		void Reaction(MakhlukHidup&);
	private:
		/**
		 * A static constant value of Gajah's age limit
		 */
		const static int batasumur_Gajah = 80;
		/**
		 * A static constant value of Gajah's birthday
		 */
		const static int ulangtahun_Gajah = 2;
		/**
		 * A static constant value of maksimum_tingkat_kekenyangan_Gajah
		 */
		const static int maksimum_tingkat_kekenyangan_Gajah = 9;
		/**
		 * A static constant value of Gajah's velocity
		 */
		const static int kecepatan_Gajah = 5;
		/**
		 * A static constant value of Gajah's acceleration
		 */
		const static int deltaKecepatan_Gajah = 2;
		/**
		 * A static constant value of Gajah's DNA
		 */
		const static char DNA_Gajah = 'g';
};
