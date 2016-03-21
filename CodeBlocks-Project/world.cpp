#include "world.h"
#include <mutex>

//public
void World::initDisplay()
{
	cursorSwitch(false);
	resetCursor();
    clear();
    for(int i=0; i<30; ++i)
    {
        for(int j=0; j<30; ++j)
        {
            cout << '.';
        }
        cout << endl;
    }
}


//=======================================================================================
void World::updateDisplay()
{
	bool end = false;
	while(!end)
	{
		for(int i=0; i<get_size(); ++i)
		{
			if(get_daftar(i) != NULL)
			{
				if(!get_daftar(i)->isMati())
				{
					draw(get_daftar(i));
					Sleep(100);
				}
				else
				{
					endDraw(*get_daftar(i));
					Sleep(3000);
					pluck(i);
				}
			}
			
			if(isGameOver()) end = true;
		}
	}
}

void World::updateMakhluk(int i)
{
	bool end = false;
	while(!end)
	{
		if(get_daftar(i) != NULL)
		{
			if(!get_daftar(i)->isMati())
			{
				draw(get_daftar(i));
				Sleep(100);
			}
			else
			{
				endDraw(*get_daftar(i));
				Sleep(3000);
				pluck(i);
				end = true;
			}
		}		
	}
}

void World::draw(Point Px, Point Pc, char display)
{
	int ex_X = Px.getAbsis();
	int ex_Y = Px.getOrdinat();
	int x = Pc.getAbsis();
	int y = Pc.getOrdinat();

	d.lock();
	moveCursor(ex_X, ex_Y);
	cout << '.';

	moveCursor(x,y);
	cout << display;
	d.unlock();
}

void World::draw(Point Pc, char display)
{
	int x = Pc.getAbsis();
	int y = Pc.getOrdinat();

	d.lock();
	moveCursor(x,y);
	cout << display;
	d.unlock();
}

void World::draw(Point Pc, int display)
{
	int x = Pc.getAbsis();
	int y = Pc.getOrdinat();

	d.lock();
	moveCursor(x,y);
	cout << display;
	d.unlock();
}

void World::draw(MakhlukHidup &m1)
{
	Point P  = m1.getPosisi();
	Point PP = m1.getPrecPosisi();
	draw(PP, P, m1.get_DNA());

	m1.setPrecPosisi(P);
}

void World::draw(MakhlukHidup *m1)
{
	if(m1 != NULL)
	{
		Point P  = m1->getPosisi();
		Point PP = m1->getPrecPosisi();
		draw(PP, P, m1->get_DNA());

		m1->setPrecPosisi(P);
	}
}

void World::initDraw(MakhlukHidup& m1)
{
	Point P = m1.getPosisi();
	draw(P, m1.get_DNA());

	m1.setPrecPosisi(P);
}

void World::endDraw(MakhlukHidup& m1)
{
	draw(m1.getPrecPosisi(), '.');
	draw(m1.getPosisi(), '_');
}

bool World::isGameOver()
{

	if(get_count() <= 0) return true;
	else				 return false;

}

void World::tangkapLayar()
{
	bool found = false;
	ofstream out("out.txt");

	for(int i=0; i<30; ++i)
	{
		for(int j=0; j<30; ++j)
		{
			found = false;
			for(int k=0; k<get_size(); k++)
			{
				if((get_daftar(k) != NULL) && (get_daftar(k)->getPosisi().getAbsis()==j) && (get_daftar(k)->getPosisi().getOrdinat()==i))
				{
					out << get_daftar(k)->get_DNA();
					found = true;
					//break;
				}
			}
			if(!found) out << ".";
		}
		out << "\n";
	}
}

void World::creation(Point P, char opsi)
{
	if(get_count() < get_size())
	{
		switch (opsi)
		{
			case '1' :
			{
				Polisi *m = new Polisi(P);
				fill(m);
				int i = searchDaftar(m);
				typedef void (KonduktorMakhlukHidup::*myHidup)(Manusia&);
				typedef void (AdministratorMakhlukHidup::*mySinyal)(int);
				thread t((myHidup)(&KonduktorMakhlukHidup::hidup), this, ref(*m));
				thread t1(&World::updateMakhluk, this, i);
				thread t2((mySinyal)(&AdministratorMakhlukHidup::newSinyal), this, i);
				t.join();
				t1.join();
				t2.join();
				break;
			} 

			case '2' :
			{
				Gajah *m = new Gajah(P);
				fill(m);
				int i = searchDaftar(m);
				typedef void (KonduktorMakhlukHidup::*myHidup)(Herbivora&);
				typedef void (AdministratorMakhlukHidup::*mySinyal)(int);
				thread t((myHidup)(&KonduktorMakhlukHidup::hidup), this, ref(*m));
				thread t1(&World::updateMakhluk, this, i);
				thread t2((mySinyal)(&AdministratorMakhlukHidup::newSinyal), this, i);
				t.join();
				t1.join();
				t2.join();
				break;
			} 

			case '3' :
			{
				Hyena *m = new Hyena(P);
				fill(m);
				int i = searchDaftar(m);
				typedef void (KonduktorMakhlukHidup::*myHidup)(Karnivora&);
				typedef void (AdministratorMakhlukHidup::*mySinyal)(int);
				thread t((myHidup)(&KonduktorMakhlukHidup::hidup), this, ref(*m));
				thread t1(&World::updateMakhluk, this, i);
				thread t2((mySinyal)(&AdministratorMakhlukHidup::newSinyal), this, i);
				t.join();
				t1.join();
				t2.join();
				break;
			} 

			case '4' :
			{
				Beruang *m = new Beruang(P);
				fill(m);
				int i = searchDaftar(m);
				typedef void (KonduktorMakhlukHidup::*myHidup)(Omnivora&);
				typedef void (AdministratorMakhlukHidup::*mySinyal)(int);
				thread t((myHidup)(&KonduktorMakhlukHidup::hidup), this, ref(*m));
				thread t1(&World::updateMakhluk, this, i);
				thread t2((mySinyal)(&AdministratorMakhlukHidup::newSinyal), this, i);
				t.join();
				t1.join();
				t2.join();
				break;
			} 

			case '5' :
			{
				Pemburu *m = new Pemburu(P);
				fill(m);
				int i = searchDaftar(m);
				typedef void (KonduktorMakhlukHidup::*myHidup)(Manusia&);
				typedef void (AdministratorMakhlukHidup::*mySinyal)(int);
				thread t((myHidup)(&KonduktorMakhlukHidup::hidup), this, ref(*m));
				thread t1(&World::updateMakhluk, this, i);
				thread t2((mySinyal)(&AdministratorMakhlukHidup::newSinyal), this, i);
				t.join();
				t1.join();
				t2.join();
				break;
			} 

			case '6' :
			{
				Rumput *m = new Rumput(P);
				fill(m);
				int i = searchDaftar(m);
				typedef void (KonduktorMakhlukHidup::*myHidup)(Tumbuhan&);
				typedef void (AdministratorMakhlukHidup::*mySinyal)(int);
				thread t((myHidup)(&KonduktorMakhlukHidup::hidup), this, ref(*m));
				thread t1(&World::updateMakhluk, this, i);
				thread t2((mySinyal)(&AdministratorMakhlukHidup::newSinyal), this, i);
				t.join();
				t1.join();
				t2.join();
				break;
			} 

			case '7' :
			{
				Pohon *m = new Pohon(P);
				fill(m);
				int i = searchDaftar(m);
				typedef void (KonduktorMakhlukHidup::*myHidup)(Tumbuhan&);
				typedef void (AdministratorMakhlukHidup::*mySinyal)(int);
				thread t((myHidup)(&KonduktorMakhlukHidup::hidup), this, ref(*m));
				thread t1(&World::updateMakhluk, this, i);
				thread t2((mySinyal)(&AdministratorMakhlukHidup::newSinyal), this, i);
				t.join();
				t1.join();
				t2.join();
				break;
			} 

			case '8' :
			{
				BurungUnta *m = new BurungUnta(P);
				fill(m);
				int i = searchDaftar(m);
				typedef void (KonduktorMakhlukHidup::*myHidup)(Herbivora&);
				typedef void (AdministratorMakhlukHidup::*mySinyal)(int);
				thread t((myHidup)(&KonduktorMakhlukHidup::hidup), this, ref(*m));
				thread t1(&World::updateMakhluk, this, i);
				thread t2((mySinyal)(&AdministratorMakhlukHidup::newSinyal), this, i);
				t.join();
				t1.join();
				t2.join();
				break;
			} 

			case '9' :
			{
				Harimau *m = new Harimau(P);
				fill(m);
				int i = searchDaftar(m);
				typedef void (KonduktorMakhlukHidup::*myHidup)(Karnivora&);
				typedef void (AdministratorMakhlukHidup::*mySinyal)(int);
				thread t((myHidup)(&KonduktorMakhlukHidup::hidup), this, ref(*m));
				thread t1(&World::updateMakhluk, this, i);
				thread t2((mySinyal)(&AdministratorMakhlukHidup::newSinyal), this, i);
				t.join();
				t1.join();
				t2.join();
				break;
			} 

			case '0' :
			{
				Mandril *m = new Mandril(P);
				fill(m);
				int i = searchDaftar(m);
				typedef void (KonduktorMakhlukHidup::*myHidup)(Omnivora&);
				typedef void (AdministratorMakhlukHidup::*mySinyal)(int);
				thread t((myHidup)(&KonduktorMakhlukHidup::hidup), this, ref(*m));
				thread t1(&World::updateMakhluk, this, i);
				thread t2((mySinyal)(&AdministratorMakhlukHidup::newSinyal), this, i);
				t.join();
				t1.join();
				t2.join();
				break;
			} 
		}
	}	
}

void World::killAll()
{
	for(int i=0; i<get_size(); ++i)
	{
		if(get_daftar(i) != NULL)
		{
			get_daftar(i)->setMati(true);
		}
	}
}


//private//=======================================================================================
void World::resetCursor()
{
    COORD c;
    c.X = 0;
    c.Y = 0;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),c);
}
//=======================================================================================
void World::moveCursor(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),c);
}
//=======================================================================================
void World::cursorSwitch(bool b)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = b; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}

void World::clear()
{
	system("cls");
}

