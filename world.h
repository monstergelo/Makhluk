using namespace std;
#include "Point.h"
#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>
#include <string>
#include <thread>
#include <chrono>   
#include <mutex>
#include "moderatorMakhlukHidup.h"
#include "konduktorMakhlukHidup.h"


//menggambarkan tampilan makhluk hidup dan dunia
class World: public ModeratorMakhlukHidup, public KonduktorMakhlukHidup, public AdministratorMakhlukHidup
{
public:
	void initDisplay();								//bikin are awal
	void updateDisplay();							//pindah posisi makhluk
	void draw(Point Px, Point Pc, char display);	//menggeser gambar pada point Px ke point Pc
	void draw(Point Pc, char display);				//menggambar display pada point Pc
	void draw(MakhlukHidup&);						//menggambarkan posisi makhluk sekarang pada layar
	bool gameOver();								//cek apakah sudah tidak ada makhluk di dalam area



private:
	//atribut
	int panjang;
	int lebar;


	//method pembantu
	void resetCursor();
	void moveCursor(int, int);
	void cursorSwitch(bool b);
	void clear();
};