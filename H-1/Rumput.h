#include "Tumbuhan.h"
/**
 *  Class for constructing a plant called Pohon /*
 */
class Rumput : public Tumbuhan {
	public:
		/**
		*  	ctor that take one argument to set the position of the Pohon
		* 	@param A Point
		*/
		Rumput(Point P);
		/**
		 * A destructor
		 */
		~Rumput();
		/**
		 *  a copy construktor
		 */
		Rumput(const Rumput&);
		/**
		 * An operator=
		 */
		Rumput& operator=(const Rumput&);
		/**
		 * A procedure that make the pohon react to the other MakhlukHidup
		 * @param MakhlukHidup
		 */
		void Reaction(MakhlukHidup&);
	private:
		/**
		 * A static constant value of Pohon age limit
		 */
		const static int batasumur_Rumput = 10;
		/**
		 * A static constant value of Pohon birthday
		 */
		const static int ulangtahun_Rumput = 2;
		/**
		 * A static constant value of Pohon's DNA
		 */
		const static int DNA_Rumput = '^';
};
