#include "Herbivora.h"

class Gajah : public Herbivora {
public :
  //4 sekawan
  Gajah();
  ~Gajah();
  Gajah(const Gajah&);
  Gajah& operator= (const Gajah&);
  
  //services
  void menua() 
  //menambah umur dari makhluk hidup
  void gerak()
  //mengbah posisi makhluk hidup sesuai arah dan kecepatan
  bool mati()
  //mengembalikan nilai true jika umur makhluk hidup sudah mencapai batas umur atau kondisi tertentu;
  void display()
  //menampilkan makhluk hidup ke layar
  
  void berlari();
}
