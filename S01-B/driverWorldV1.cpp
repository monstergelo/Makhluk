#include "world.h"

char opsi = 'W';
char sbs = 'W';

void listenKey()
{
    while(1)
    {
        if((sbs != 'b') && (opsi != 'm'))
            opsi = getch();
    }
}

int main()
{
    thread l(listenKey);


    Point P1(5,18);
    Polisi m1(P1);
    Point P2(2,20);
    Hyena m2(P2);
    Point P5(20,18);
    Pemburu m3(P5);
    Point P4(15,29);
    Gajah m4(P4);
    Point P9(13,18);

    World W;
    W.fill(&m1);
    W.fill(&m3);
    W.fill(&m2);
    W.fill(&m4);

    Point P3(0,31);

    W.initDisplay();
    Sleep(2000);

    W.initDraw(m1);
    W.initDraw(m2);
    W.initDraw(m3);
    W.initDraw(m4);

    W.setCount(0);
    while(!W.isGameOver())
    {
        W.sinyal();
        for (int i = 0; i <W.get_size(); i++)
        {
            if(W.get_daftar(i) != NULL)
                W.hidup(*W.get_daftar(i));
        }
        for (int i = 0; i <W.get_size(); i++)
        {
            if(W.get_daftar(i) != NULL)
                W.aging(*W.get_daftar(i));
        }
        if((opsi >= '0') && (opsi <= '9'))
        {
            P9 = Point(30);
            W.creation(P9,opsi);
            opsi = 'W';
        }
        else if(opsi == 'c')
        {
            W.tangkapLayar();
            opsi = 'W';
        }
        else if(opsi == ' ')
        {
            W.resume();
            opsi = 'W';
        }
        else if(opsi == 'x')
        {
            W.killAll();
        }
        else if(opsi == 'm')
        {

            if(sbs == 'b'){
                 sbs = 'W';
                 W.resume();
                 opsi = 'W';
             }
            else if (sbs == 'W'){
                 sbs = 'b';
                 opsi = 'W';
             }
        }
        else if((opsi == 'p') || (sbs == 'b'))
        {
            W.pause();
            opsi = 'W';
        }
        W.updateDisplay();
        W.setCount(W.getCount()+1);
        W.draw(P3, sbs);

        if(sbs == 'b')
            opsi = getch();
        else
            Sleep(100);
    }

    W.draw(P3, '.');
    cout << "GameOver";
    l.detach();
    W.draw(P3, '.');
    cout << "Mati Semua";

    return 0;
}