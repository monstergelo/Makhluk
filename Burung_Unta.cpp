#include "Burung_Unta.h"

Burung_Unta::Burung_Unta(){
  
}
Burung_Unta::~Burung_Unta(){
  
}
Burung_Unta::Burung_Unta(const Burung_Unta&){
  
}
Burung_Unta& Burung_Unta::operator= (const Burung_Unta&){
  
}
ifstream Burung_Unta::operator>> (istream&){
  
}
ofstream Burung_Unta::operator<< (ostream&){
  
}

//services
//menambah umur dari makhluk hidup
void Burung_Unta::gerak(){
  
}
//mengbah posisi makhluk hidup sesuai arah dan kecepatan
//mengembalikan nilai true jika umur makhluk hidup sudah mencapai batas umur atau kondisi tertentu;
//menampilkan makhluk hidup ke layar
bool Burung_Unta::Lapar(){
  
}
bool Burung_Unta::memburu(){
  
}

bool Burung_Unta::berlari() {
  //untuk cek petak-petak di sekitar hewan
  bool isExist = false;
  for (int delx = -1; delx < 2; delx++) {
    for (int del y = -1; dely < 2; dely++) {
      if (delx != 0 && dely != 0) { //tidak melakukan pemeriksaan terhadap petak tempat objek ini berada
        if (/*Getter posisi + x dan + y ada objek yang merupakan member dari char* predator*/) {
          isExist = true;
          break;
        } else {
          //checking
        }
      }
    }
  }
  return isExist;
}
