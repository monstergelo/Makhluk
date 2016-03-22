#include "Herbivora.h"

class Gajah : public Herbivora {
public:
  //4 sekawan
  Gajah(Point P);
  ~Gajah();
  Gajah(const Gajah&);
  Gajah& operator= (const Gajah&);
  
  //services
  void Reaction(MakhlukHidup&);
private:
  const static int batasumur_Gajah = 80;
  const static int ulangtahun_Gajah = 2;
  const static int maksimum_tingkat_kekenyangan_Gajah = 200;
  const static int kecepatan_Gajah = 5;
  const static int deltaKecepatan_Gajah = 2;
  const static char DNA_Gajah = 'g';
};
