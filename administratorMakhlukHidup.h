#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "Manusia.h"
//#include "Herbivora.h"

#include "MakhlukHidup.h"
#include <iostream>

using namespace std;
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
	void creation();//memilih makhluk dan memasukkannya dalam daftar
	void signal();
	void activate();
	void check();

	//getter
	int get_size();
	int get_count();
	MakhlukHidup** get_daftar();
	MakhlukHidup* get_daftar(int i);

	//setter
	void set_size(int);
	void set_count(int);

private:
	int size; //banyak makhluk maksimal
	int count; //banyak makhluk dalam daftar
	MakhlukHidup *daftar[10];  //array pointer objek makhluk


	//helper
	void initDaftar();
};

#endif