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

	/**
 	*  	A member procedure that take one arguments
 	* 	put in a MakhlukHidup in the monitored list
 	*  	@param a MakhlukHidup, an input Makhluk Hidup that want to be inserted
 	*/
	void fill(MakhlukHidup*);//memasukkan makhluk ke dalam daftar
	/**
 	*  	put out a MakhlukHidup in the monitored list with certain pointer
 	* 	@param A MakhlukHidup pointer, the address of MakhlukHidup
 	*/	
	void pluck(MakhlukHidup*);//mengeluarkan makhluk dari daftar berdasarkan indeks
	/**
 	*  	put out a MakhlukHidup in the monitored list with certain index
 	* 	@param an integer
 	*/		
	void pluck(int);
	/**
	*  A member procedure
 	*  create a thread to monitor each pair of MakhlukHidup
 	*/	
	void sinyal();
	/**
 	*  create a thread to monitor a MakhlukHidup to rest of it's peers
 	*  @param an integer
 	*/	
	void sinyal(int);
	/**
 	*  create a thread to monitor a MakhlukHidup with another
 	*  @param an integer, the index of the first organism
 	*  @param an integer, the index of the second organism
 	*/	
	void sinyal(int, int);
	/**
	 *  create a thread to monitor a newly created MakhlukHidup during runtime
	 * 	@param an integer
	 */
	void newSinyal(int);
	/**
	 *  display coordinate of all object within daftar
	 */
	void check();
	/**
 	*   return number of thread that monitors interaction between MakhlukHidup
 	* 	@return an integer
 	*/	
	int pemantau_count();
	/**
	 *  search the index of daftar which contains specific pointer of MakhlukHidup
	 * 	@return an integer
	 */
	int searchDaftar(MakhlukHidup*);

	//getter
	/**
	 *  returns the value of size
	 * 	@return an integer
	 */
	int get_size();
	/**
	 *  getter for count and returns the value of count
	 *  @return an integer
	 */
	int get_count();
	/**
	 *  returns the value daftar
	 *  @return the whole list
	 */
	MakhlukHidup** get_daftar();
	/**
	 *  returns the value daftar[i]
	 * 	@param an integer
	 * 	@return a Makhluk Hidup in a certain index
	 */
	MakhlukHidup* get_daftar(int i);
	/**
	 *  returns the value of pemantau[index][i]
	 * 	@param an integer for row index
	 * 	@param an integer for column index
	 * 	@return an address of the thread
	 */
	thread* get_pemantau(int index, int i);	

	/**
	 *  set the value of size with an input integer
	 *  @param an integer
	 */
	void set_size(int);
	/**
	 *  set the value of count
	 *  @param an integer
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
	MakhlukHidup *daftar[10];  		
	/**
	 *  Thread to control interaction between each pair of MakhlukHidup within daftar
	 */
	thread *pemantauObjek[10][10];  

	/**
	 *  initialize daftar with NULL
	 */
	void initDaftar();
};

#endif
