#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H


#include "MakhlukHidup.h"
#include <iostream>
#include <thread>
#include <windows.h>
#include <vector>
#include "Gajah.h"
#include "Polisi.h"
#include "Hyena.h"
#include "Beruang.h"
#include "Pemburu.h"
#include "Rumput.h"
#include "Pohon.h"
#include "BurungUnta.h"
#include "Harimau.h"
#include "Mandril.h"

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
	/**
 	*  put in a MakhlukHidup in the monitored list
 	*/
	void fillDaftar(MakhlukHidup*);//memasukkan makhluk ke dalam daftar
	/**
 	*  put out a MakhlukHidup in the monitored list with certain pointer
 	*/	
	void pluck(MakhlukHidup*);//mengeluarkan makhluk dari daftar berdasarkan indeks
	/**
 	*  put out a MakhlukHidup in the monitored list with certain index
 	*/		
	void pluck(int);
	/**
 	*  create a thread to monitor each pair of MakhlukHidup
 	*/	
	void sinyal();
	/**
 	*  create a thread to monitor a MakhlukHidup to rest of it's peers
 	*/	
	//getter
	int get_size();
	int get_count();
	vector<MakhlukHidup*> get_daftar();
	MakhlukHidup* get_daftar(int i);	
	//setter
	void set_size(int);
	void set_count(int);

private:
	int size; //banyak makhluk maksimal
	int count; //banyak makhluk dalam daftar
	vector<MakhlukHidup *> daftar;  		//array pointer objek makhluk

	//helper
	void initDaftar();
};

#endif
