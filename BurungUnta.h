#include "Herbivora.h"

/**
 *  A BurungUnta class.
 */

class BurungUnta : public Herbivora {
public:
  /**
   *  A constructor.
   */
  BurungUnta(Point);
  /**
   *  A destructor.
   */
  ~BurungUnta();
  /**
   *  A copy constructor.
   */
  BurungUnta(const BurungUnta&);
  /**
   *  An operator =
   */
  BurungUnta& operator=(const BurungUnta&);

  /**
   *  A Reaction Procedure of BurungUnta.
   *  @param MakhlukHidup A first parameter used for analyzing DNA of MakhlukHidup and Position around BurungUnta.
   */
  void Reaction(MakhlukHidup&);
private:
  const static int batasumur_BurungUnta = 10;
  const static int ulangtahun_BurungUnta = 2;
  const static int maksimum_tingkat_kekenyangan_BurungUnta = 9;
  const static int kecepatan_BurungUnta = 5;
  const static int deltaKecepatan_BurungUnta = 2;
  const static char DNA_BurungUnta = 'u';
};
