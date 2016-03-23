#include "Tumbuhan.h"
/**
 *  Class for constructing a plant called Pohon /*
 */
class Pohon : public Tumbuhan {
	public:
		/**
		*  	ctor that take one argument to set the position of the Pohon
		* 	@param A Point
		*/
		Pohon(Point=PAwal);
		/**
		 * A destructor
		 */
		~Pohon();
		/**
		 *  a copy construktor
		 */
		Pohon(const Pohon&);
		/**
		 * An operator=
		 */
		Pohon& operator=(const Pohon&);
		/**
		 * A procedure that make the pohon react to the other MakhlukHidup
		 * @param MakhlukHidup
		 */
		void Reaction(MakhlukHidup&);
	private:
		/**
		 * A static constant value of Pohon age limit
		 */
		const static int batasumur_Pohon = 73;
		/**
		 * A static constant value of Pohon birthday
		 */
		const static int ulangtahun_Pohon = 1;
		/**
		 * A static constant value of Pohon's DNA
		 */
		const static int DNA_Pohon = '!';
};
