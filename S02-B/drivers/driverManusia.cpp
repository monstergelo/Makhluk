#include "Manusia.h"
#include <iostream>

using namespace std;

int main () {
    Manusia M;
    Manusia K;
    Point P(5,6);
    K.setPosisi (P);
    cout << "Posisi ";
    cout << K.getPosisi().getAbsis() << ", " << K.getPosisi().getOrdinat() << endl;
    cout << "Prec Posisi ";
    cout << K.getPrecPosisi().getAbsis() << ", " << K.getPrecPosisi().getOrdinat() << endl;
    //get_kecepatan

    //Set Gerak Memburu
    cout << "TES MEMBURU " << endl;
    M.setMemburu(true);
    for (int i = 0; i < 9; i++){
        M.gerak_memburu(P);
        cout << "Posisi ";
        cout << M.getPosisi().getAbsis() << ", " << M.getPosisi().getOrdinat() << endl;
        cout << "Prec Posisi ";
        cout << M.getPrecPosisi().getAbsis() << ", " << M.getPrecPosisi().getOrdinat() << endl;
    }

    //Set Gerak Memburu
    cout << "TES MENGHINDAR " << endl;
    M.setMenghindar(true);
    for (int i = 0; i < 9; i++){
        M.gerak_menjauh(P);
        cout << "Posisi ";
        cout << M.getPosisi().getAbsis() << ", " << M.getPosisi().getOrdinat() << endl;
        cout << "Prec Posisi ";
        cout << M.getPrecPosisi().getAbsis() << ", " << M.getPrecPosisi().getOrdinat() << endl;
    }

    return 0;
}
