#include "Burung_Unta.h"

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
