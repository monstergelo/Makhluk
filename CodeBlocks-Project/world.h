#include "Point.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <conio.h>
#include <windows.h>
#include <string>
#include <thread>
#include <chrono>
#include <mutex>
#include <stdio.h>
#include "konduktorMakhlukHidup.h"
#include "administratorMakhlukHidup.h"

using namespace std;
/**
 *  A World is a singleton that 
 *	contains information of all object within it and capable to display them.
 */
//menggambarkan tampilan makhluk hidup dan dunia
class World: public KonduktorMakhlukHidup, public AdministratorMakhlukHidup
{
public:
	World();
	/**
	 *  Draw an empty world (all dot)
	 */
	void initDisplay();								//bikin are awal
	/**
	 *  Draw all current object within world
	 */
	void updateDisplay();							//pindah posisi makhluk
	void updateMakhluk(int i);
	/**
	 *  Draw display at Pc and remove the previous drawing at Px
	 */
	void draw(Point Px, Point Pc, char display);	//menggeser gambar pada point Px ke point Pc
	/**
	 *  Draw display at Pc and without removing the drawing at Px
	 */
	void draw(Point Pc, char display);				//menggambar display pada point Pc
	/**
	 *  Alternate version of above that display integer instead of char
	 */
	void draw(Point Pc, int display);
	/**
	 *  Draw Makhlukhidup at it's current position and remove it's previous drawing
	 */
	void draw(MakhlukHidup&);
	/**
	 * Alternate version of "void draw(MakhlukHidup&)" that use pointer
	 */
	void draw(MakhlukHidup*);						//menggambarkan posisi makhluk sekarang pada layar
	/**
	 *  Draw Makhlukhidup for when it first drawn
	 */
	void initDraw(MakhlukHidup&);					//menggambar saat makhluk hidup
	/**
	 *  Draw Makhlukhidup for when it's dead status
	 */
	void endDraw(MakhlukHidup&);					//menggambar saat makhluk mati
	/**
	 *  Check wether game-over condition is met
	 */
	bool isGameOver();					 		    //cek apakah sudah tidak ada makhluk di dalam area
	/**
	 *  Save current world in txt format
	 */
	void tangkapLayar();
	/**
 	*  create a new MakhlukHidup and put it in monitored list
 	*/	
	void creation(Point, char);//memilih makhluk dan memasukkannya dalam daftar
	void activate();
	void killAll();
	mutex d;

	int getPanjang();
	int getLebar();

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
