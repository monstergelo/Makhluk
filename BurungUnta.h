#include "Herbivora.h"

class BurungUnta : public Herbivora {
public:
    BurungUnta(Point);
    ~BurungUnta();
    BurungUnta(const BurungUnta&);
    BurungUnta& operator=(const BurungUnta&);

    //services
    void Reaction(MakhlukHidup&);
private:
  const static int batasumur_BurungUnta = 10;
  const static int ulangtahun_BurungUnta = 2;
  const static int maksimum_tingkat_kekenyangan_BurungUnta = 9;
  const static int kecepatan_BurungUnta = 5;
  const static int deltaKecepatan_BurungUnta = 2;
  const static char DNA_BurungUnta = 'u';
};
