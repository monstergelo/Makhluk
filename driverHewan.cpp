#include "Hewan.h"
#include <iostream>
using namespace std;

int main(){
    Hewan A;
    cout << A.get_tingkat_kekenyangan() << endl;
    cout << A.get_maks_tingkat_kekenyangan() << endl;
    Point P1(1,0);
    Hewan M1(10,'a',9,P1,7,8,NULL,5,U);
    char k = M1.get_DNA();
    cout << k << endl;
    cout << M1.get_umur() << endl;
    cout << M1.get_batas_umur() << endl;
    cout << M1.get_ulang_tahun() << endl;
    cout << M1.get_tingkat_kekenyangan() << endl;
    cout << M1.get_maks_tingkat_kekenyangan() << endl;
    return 0;
}
