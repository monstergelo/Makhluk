#include "world.h"


//public
void World::initDisplay()
{
	   resetCursor();
    clear();
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout << ".";
        }
        cout << endl;
    }
}
//=======================================================================================
void World::updateDisplay()
{
	//belom jadi
	/*
	void falling()
	{
	    int x =0;
	    int y =0;
	    int ex_X = x;
	    int ex_Y = y;

	    while(1)
	    {
	        moveCursor(ex_X, ex_Y);
	        cout << ".";
	        moveCursor(x, y);
	        ex_X = x;
	        ex_Y = y;
	        if(( x < 100) || (y < 100))
	        {
	            cout << "5";
	            x++;
	            y++;
	            Sleep(300);
	        }
	        else
	        {
	            break;
	        }
	    }
	}
	*/
}

bool World::gameOver()
{

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