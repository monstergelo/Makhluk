#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

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
	void fill(int);//memasukkan makhluk ke dalam daftar
	void pluck(int);//mengeluarkan makhluk dari daftar berdasarkan indeks
	void creation();//memilih makhluk dan memasukkannya dalam daftar

	//getter
	int get_size();
	int get_count();
	int* get_daftar();
	int get_daftar(int i);

	//setter
	void set_size(int);
	void set_count(int);

private:
	int size; //banyak makhluk maksimal
	int count; //banyak makhluk dalam daftar
	int *daftar;  //array pointer objek makhluk


	//helper
	void initDaftar();
};

#endif