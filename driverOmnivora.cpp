#include "Omnivora.h"
#include <iostream>
using namespace std;

int main(){
    Point P(1,0);
    Omnivora K1(99,'h',20,P,23,25,NULL,false,99,8);
    printf("arah : %d, kecepatan : %d\n", K1.get_Arah(), K1.get_Kecepatan());
    int umurK1 = K1.get_batas_umur();
    char DNAK1 = K1.get_DNA();
    Point P1 = K1.getPosisi();
    int kenyangK1 = K1.get_tingkat_kekenyangan();
    int maksK1 = K1.get_maks_tingkat_kekenyangan();
    int arahK1 = K1.get_Arah();
    int kecepatanK1 = K1.get_Kecepatan();
    printf("umur : %d, DNA : %c, Posisi : %d %d, tingkat kekenyangan : %d, maksimum tingkat kekenyangan : %d ",umurK1,DNAK1,
           P1.getOrdinat(),P1.getAbsis(),kenyangK1,maksK1);
    printf("kecepatan : %d, arah : %d\n", K1.get_Kecepatan(), K1.get_Arah());
    for (int i = 1; i <= 5; i++){
        K1.gerak_berarah(U);
        P1 = K1.getPosisi();
        printf("%d %d ", P1.getAbsis(), P1.getOrdinat());
    }

    K1.set_umur(10);
    int umurAwal = K1.get_umur();
    cout << "Reaction :" << endl;
    MakhlukHidup M(10,'t',9,P1);
    K1.Reaction(M);
    printf("umur sekarang (umur sebelumnya %d) : %d", umurAwal, K1.get_umur());
}
