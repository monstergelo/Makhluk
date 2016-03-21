#include "konduktorMakhlukHidup.h"
#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

KonduktorMakhlukHidup::KonduktorMakhlukHidup()
{
	lifeState = 1;
	Count = 0;
}

KonduktorMakhlukHidup::~KonduktorMakhlukHidup()
{

}

void KonduktorMakhlukHidup::aging(MakhlukHidup& m1)
{
    if((lifeState == 1) && (Count%10 == 0))
    {
        m1.menua();
    }
}

void KonduktorMakhlukHidup::pause()
{
	lifeState = 0;
}

void KonduktorMakhlukHidup::resume()
{
	lifeState = 1;
}

void KonduktorMakhlukHidup::setCount(int c)
{
    Count = c;
}

int KonduktorMakhlukHidup::getCount()
{
    return Count;
}

void KonduktorMakhlukHidup::hidup(MakhlukHidup& m1){
    Manusia* m2 = dynamic_cast <Manusia*> (&m1);
    Karnivora* m3 = dynamic_cast <Karnivora*> (&m1);
    Herbivora* m4 = dynamic_cast <Herbivora*> (&m1);
    Omnivora* m5 = dynamic_cast <Omnivora*> (&m1);
    Herbivora* m6 = dynamic_cast <Herbivora*> (&m1);
    Tumbuhan* m7 = dynamic_cast <Tumbuhan*> (&m1);
    if (m2!=0){
        hidup(*m2);
    } else if (m3!=0){
        hidup(*m3);
    } else if (m4!=0){
        hidup(*m4);
    } else if (m5!=0){
        hidup(*m5);
    } else if (m6!=0){
        hidup(*m6);
    } else{
        hidup(*m7);
    }
}

void KonduktorMakhlukHidup::hidup(Manusia& m1)
{
    if(lifeState == 1) //cek pause atau tidak
    {
        if(m1.get_Kecepatan() != 0)
        {
            if (Count%(10-m1.get_Kecepatan()) == 0){
                if(m1.getPosisi() == Point(29,29))//ujung kanan-bawah
                {
                    m1.set_Arah(8);

                    m1.Manusia::gerak_berarah();
                }
                else if(m1.getPosisi() == Point(0,29))//kiri-bawah
                {
                    m1.set_Arah(2);

                    m1.Manusia::gerak_berarah();
                }
                else if(m1.getPosisi() == Point(29,0))//kanan-atas
                {
                    m1.set_Arah(6);

                    m1.Manusia::gerak_berarah();
                }
                else if(m1.getPosisi() == Point(0,0))//kiri-atas
                {
                    m1.set_Arah(4);

                    m1.Manusia::gerak_berarah();
                }
                else if(m1.getPosisi().getAbsis() >= 29)//kanan
                {
                    m1.set_Arah(7);

                    m1.Manusia::gerak_berarah();
                }
                else if(m1.getPosisi().getAbsis() == 0)//kiri
                {
                    m1.set_Arah(3);

                    m1.Manusia::gerak_berarah();
                }
                else if(m1.getPosisi().getOrdinat() >= 29)
                {
                    m1.set_Arah(1);

                    m1.Manusia::gerak_berarah();
                }
                else if(m1.getPosisi().getOrdinat() == 0)
                {
                    m1.set_Arah(5);

                    m1.Manusia::gerak_berarah();
                }
                else
                {
                    m1.Manusia::gerak_berarah();
                }

                m1.setSedangMemburu(false);
            }
        }
    }
    else if(lifeState == 0)
    {

    }
}

void KonduktorMakhlukHidup::hidup(Herbivora& m1)
{
    if(lifeState == 1) //cek pause atau tidak
    {
        if(m1.get_Kecepatan() != 0)
        {
            if (Count%(10-m1.get_Kecepatan()) == 0){
                if(m1.getPosisi() == Point(29,29))//ujung kanan-bawah
                {
                    m1.set_Arah(8);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi() == Point(0,29))//kiri-bawah
                {
                    m1.set_Arah(2);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi() == Point(29,0))//kanan-atas
                {
                    m1.set_Arah(6);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi() == Point(0,0))//kiri-atas
                {
                    m1.set_Arah(4);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi().getAbsis() >= 29)//kanan
                {
                    m1.set_Arah(7);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi().getAbsis() == 0)//kiri
                {
                    m1.set_Arah(3);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi().getOrdinat() >= 29)
                {
                    m1.set_Arah(1);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi().getOrdinat() == 0)
                {
                    m1.set_Arah(5);

                    m1.Hewan::gerak_berarah();
                }
                else
                {
                    m1.Hewan::gerak_berarah();
                }
            }
        }
    }
    else if(lifeState == 0)
    {

    }
}

void KonduktorMakhlukHidup::hidup(Karnivora& m1) {
    if (Count%(10-m1.get_Kecepatan()) == 0){
        if(lifeState == 1) //cek pause atau tidak
        {
            if(m1.get_Kecepatan() != 0)
            {
                if(m1.getPosisi() == Point(29,29))//ujung kanan-bawah
                {
                    m1.set_Arah(8);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi() == Point(0,29))//kiri-bawah
                {
                    m1.set_Arah(2);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi() == Point(29,0))//kanan-atas
                {
                    m1.set_Arah(6);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi() == Point(0,0))//kiri-atas
                {
                    m1.set_Arah(4);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi().getAbsis() >= 29)//kanan
                {
                    m1.set_Arah(7);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi().getAbsis() == 0)//kiri
                {
                    m1.set_Arah(3);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi().getOrdinat() >= 29)
                {
                    m1.set_Arah(1);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi().getOrdinat() == 0)
                {
                    m1.set_Arah(5);

                    m1.Hewan::gerak_berarah();
                }
                else
                {
                    m1.Hewan::gerak_berarah();
                }
            }
        }
    }
    else if(lifeState == 0)
    {

    }
}

void KonduktorMakhlukHidup::hidup(Omnivora& m1){
    if(lifeState == 1) //cek pause atau tidak
    {
        if (Count%(10-m1.get_Kecepatan()) == 0){
            if(m1.get_Kecepatan() != 0)
            {
                if(m1.getPosisi() == Point(29,29))//ujung kanan-bawah
                {
                    m1.set_Arah(8);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi() == Point(0,29))//kiri-bawah
                {
                    m1.set_Arah(2);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi() == Point(29,0))//kanan-atas
                {
                    m1.set_Arah(6);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi() == Point(0,0))//kiri-atas
                {
                    m1.set_Arah(4);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi().getAbsis() >= 29)//kanan
                {
                    m1.set_Arah(7);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi().getAbsis() == 0)//kiri
                {
                    m1.set_Arah(3);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi().getOrdinat() >= 29)
                {
                    m1.set_Arah(1);

                    m1.Hewan::gerak_berarah();
                }
                else if(m1.getPosisi().getOrdinat() == 0)
                {
                    m1.set_Arah(5);

                    m1.Hewan::gerak_berarah();
                }
                else
                {
                    m1.Hewan::gerak_berarah();
                }
            }
        }
    }
    else if(lifeState == 0)
    {

    }
}


void KonduktorMakhlukHidup::hidup(Tumbuhan& t1) {
}
