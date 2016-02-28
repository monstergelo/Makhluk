#include "Herbivora.h"

bool Gajah::berlari() {
    bool out_loop = false;
    bool bahaya = false;
    size_t x = strlen(predator);
    unsigned banyak_predator = x;
    int i=0;
    while (!out_loop && i <= banyak_predator) {
        point predator_pos = posisi.predator[i];
        if (/*Kondisi predator ada di sekitar Gajah*/) {
            bahaya = true;
            out_loop = true;
        } else {
            //do nothing
        }
        i++;
    }
    return bahaya;
}

bool Burung_Unta::berlari() {
    //sama dengan Gajah::berlari() (?)
}
