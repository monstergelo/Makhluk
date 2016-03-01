#include "Gajah.h"

Gajah::Gajah() {
  set_deltaKecepatan(2);
}

Gajah::~Gajah() {
  // delete var yang ...*
}

Gajah::Gajah(const Gajah& G) {
  
}

Gajah& Gajah::operator= (const Gajah& G) {
  
}

void Gajah::menua() {
  set_umur(get_umur());
}
void Gajah::gerak() {
  
}
bool Gajah::mati() {
  
}

void Gajah::display() {
  
}

bool Gajah::berlari() {
  
}
