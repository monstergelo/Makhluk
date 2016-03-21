#include "MakhlukHidup.h"
#include <iostream>
using namespace std;
main(){
    Point P1(1,0);
    MakhlukHidup M1(10,'a',9,P1);
    MakhlukHidup M;
    char k = M.get_DNA();
    cout << k << endl;
    cout << M.get_umur() << endl;
    cout << M.get_batas_umur() << endl;
    M = M1;
    k = M.get_DNA();
    cout << k << endl;
    cout << M1.get_umur() << endl;
    cout << M1.get_batas_umur() << endl;
}
