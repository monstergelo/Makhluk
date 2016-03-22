#include "Herbivora.h"

/**
 *  Class for constructing a Herbivore called Burung Unta
 */
class BurungUnta : public Herbivora {
	public:
		/**
		*  	ctor that take one argument to set the position of the Burung Unta
		* 	@param A Point
		*/
		BurungUnta(Point);
		/**
		 *  a destructor
		 */
		~BurungUnta();
		/**
		 *  a copy construktor
		 */
		BurungUnta(const BurungUnta&);
		/**
		 *  an operator=
		 */
		BurungUnta& operator=(const BurungUnta&);

		/**
		 * A member procedure that makes Burung Unta react, respond the other Organism
		 * @param a MakhlukHidup
		 */
		void Reaction(MakhlukHidup&);
	private:
		/**
		 * A static constant value of Burung Unta age limit
		 */
		const static int batasumur_BurungUnta = 80;
		/**
		 * A static constant value of Burung Unta birthday
		 */
		const static int ulangtahun_BurungUnta = 2;
		/**
		 * A static constant value of maksimum_tingkat_kekenyangan_BurungUnta
		 */
		const static int maksimum_tingkat_kekenyangan_BurungUnta = 9;
		/**
		 * A static constant value of Burung Unta's velocity
		 */
		const static int kecepatan_BurungUnta = 5;
		/**
		 * A static constant value of Burung Unta's acceleration
		 */
		const static int deltaKecepatan_BurungUnta = 2;
		/**
		 * A static constant value of Burung Unta's DNA
		 */
		const static char DNA_BurungUnta = 'u';
};
