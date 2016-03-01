#include "Herbivora.h"

class Burung_Unta : public Herbivora {
public :
  Burung_Unta();
  ~Burung_Unta();
  Burung_Unta(const Burung_Unta&);
  Burung_Unta& operator= (const Burung_Unta&);
  
    //services
  void menua();
  //menambah umur dari makhluk hidup
  void gerak();
  //mengbah posisi makhluk hidup sesuai arah dan kecepatan
  bool mati();
  //mengembalikan nilai true jika umur makhluk hidup sudah mencapai batas umur atau kondisi tertentu;
  void display();
  //menampilkan makhluk hidup ke layar
  bool Lapar();
  bool memburu();

}
