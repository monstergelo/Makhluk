#include "Herbivora.h"

class Gajah : public Herbivora {
public :
  //4 sekawan
  Gajah();
  ~Gajah();
  Gajah(const Gajah&);
  Gajah& operator= (const Gajah&);
  
  void berlari();
}
