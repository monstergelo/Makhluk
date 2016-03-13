#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H


#include "MakhlukHidup.h"
#include <iostream>
#include <thread>
#include <windows.h>
#include "Polisi.h"

using namespace std;

/**
 *  Class for monitoring interaction between object within the world
 */
//class untuk memasukkan/mendaftar makhluk dalam world serta mematikannya
class AdministratorMakhlukHidup
{
public:
	//ctor, dtor
	AdministratorMakhlukHidup();
	~AdministratorMakhlukHidup();

	//method
	void fill(MakhlukHidup*);//memasukkan makhluk ke dalam daftar
	void pluck(MakhlukHidup*);//mengeluarkan makhluk dari daftar berdasarkan indeks
	void pluck(int);
	void creation(Point, char);//memilih makhluk dan memasukkannya dalam daftar
	void sinyal();
	void sinyal(int);
	void sinyal(MakhlukHidup &, MakhlukHidup &);
	void activate();
	void check();
	int pemantau_count();

	//getter
	int get_size();
	int get_count();
	MakhlukHidup** get_daftar();
	MakhlukHidup* get_daftar(int i);
	thread* get_pemantau(int index, int i);	

	//setter
	void set_size(int);
	void set_count(int);

private:
	int size; //banyak makhluk maksimal
	int count; //banyak makhluk dalam daftar
	MakhlukHidup *daftar[10];  		//array pointer objek makhluk
	thread *pemantauObjek[10][10];   //masing-masing memantau reaksi objek terhadap
									   //satu objek lainnya




	//helper
	void initDaftar();
};

#endif