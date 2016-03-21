#include "Polisi.h"
#include <iostream>

using namespace std;

int main () {
    Point posisi(3,6);
    Polisi P(posisi);
    Polisi K(posisi);
    MakhlukHidup* M = K;
    k = 10
    while (k >= 0) {
        P.Manusia::gerak_bebas();
        K.Manusia::gerak_bebas();
        cout << P.getPosisi().getAbsis() << endl;
        cout << K.getPosisi().getAbsis() << endl;
        k--;
    }
    P.Reaction(*K);
    return 0;
}
