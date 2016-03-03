#include "HuntingSkill.h"
#include <iostream>

using namespace std;

int main() {
    char tar[5];
    tar[0] = 'a';
    tar[1] = 'b';
    tar[2] = 'c';
    tar[3] = 'd';
    tar[4] = 'f';
    HuntingSkill H(tar, true);
    cout << "UJI CTOR ";
    for (int i = 0; i < 5; i++)
        cout << H.getTarget()[i] << " ";
    cout << endl;
    HuntingSkill K;
    cout << "UJI CTOR "<< (K.getTarget() == NULL) << endl;

    HuntingSkill A = H;
    for (int i = 0; i < 5; i++)
        cout << H.getTarget()[i] << "|";
    cout << endl;

    cout << A.getMemburu() << endl;

    return 0;
}
