#include "world.h"


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
            cout << ".";
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
				if(get_daftar(i)->isMati())
				{
					endDraw(*get_daftar(i));
					pluck(i);
				}
				else
				{
					draw(get_daftar(i));
					Sleep(100);
				}
			}
			else 
			{
				if(isGameOver()) end = true;
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

	moveCursor(ex_X, ex_Y);
	cout << '.';

	moveCursor(x,y);
	cout << display;
}

void World::draw(Point Pc, char display)
{
	int x = Pc.getAbsis();
	int y = Pc.getOrdinat();

	moveCursor(x,y);
	cout << display;
}

void World::draw(MakhlukHidup &m1)
{
	Point P = m1.getPosisi();
	draw(m1.getPrecPosisi(), P, m1.get_DNA());

	m1.setPrecPosisi(P);
}

void World::draw(MakhlukHidup *m1)
{
	if(m1 != NULL)
	{
		Point P = m1->getPosisi();
		draw(m1->getPrecPosisi(), P, m1->get_DNA());

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
}

bool World::isGameOver()
{

	if(get_count() <= 0) return true;
	else				 return false;
	
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