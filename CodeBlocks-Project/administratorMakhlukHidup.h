#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H


#include "MakhlukHidup.h"
#include <iostream>
#include <thread>
#include <windows.h>
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
	/**
	 *  ctor which set size to 10, count to 0, and initialize daftar
	 */
	AdministratorMakhlukHidup();
	/**
	 *  dtor which delete daftar
	 */
	~AdministratorMakhlukHidup();

	//method
	/**
 	*  put in a MakhlukHidup in the monitored list
 	*/
	void fill(MakhlukHidup*);//memasukkan makhluk ke dalam daftar
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
	void sinyal(int);
	/**
 	*  create a thread to monitor a MakhlukHidup with another
 	*/	
	void sinyal(int, int);
	/**
	 *  create a thread to monitor a newly created MakhlukHidup during runtime
	 */
	void newSinyal(int);
	/**
	 *  display coordinate of all object within daftar
	 */
	void check();
	/**
 	*  return number of thread that monitors interaction between MakhlukHidup
 	*/	
	int pemantau_count();
	/**
	 *  search the index of daftar which contains specific pointer of MakhlukHidup
	 */
	int searchDaftar(MakhlukHidup*);

	//getter
	/**
	 *  returns the value of size
	 */
	int get_size();
	/**
	 *  returns the value of count
	 */
	int get_count();
	/**
	 *  returns the value daftar
	 */
	MakhlukHidup** get_daftar();
	/**
	 *  returns the value daftar[i]
	 */
	MakhlukHidup* get_daftar(int i);
	/**
	 *  returns the value of pemantau[index][i]
	 */
	thread* get_pemantau(int index, int i);	

	//setter
	/**
	 *  set the value of size
	 */
	void set_size(int);
	/**
	 *  set the value of count
	 */
	void set_count(int);

private:
	/**
	 *  the maximum length of array daftar
	 */
	int size; //banyak makhluk maksimal
	/**
	 *  how much daftar is filled with non-NULL value
	 */
	int count; //banyak makhluk dalam daftar
	/**
	 *  Holds array of MakhlukHidup to be used in world
	 */
	MakhlukHidup *daftar[10];  		//array pointer objek makhluk
	/**
	 *  Thread to control interaction between each pair of MakhlukHidup within daftar
	 */
	thread *pemantauObjek[10][10];   //masing-masing memantau reaksi objek terhadap
									   //satu objek lainnya




	//helper
	/**
	 *  initialize daftar with NULL
	 */
	void initDaftar();
};

#endif