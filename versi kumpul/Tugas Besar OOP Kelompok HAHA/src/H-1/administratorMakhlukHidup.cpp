#include "administratorMakhlukHidup.h"

#include <iostream>
#include <thread>
using namespace std;

//ctor,  dtor
AdministratorMakhlukHidup::AdministratorMakhlukHidup()
{
	size = 10;
	//daftar = new MakhlukHidup[size];
	// initDaftar();
	count = 0;

}

AdministratorMakhlukHidup::~AdministratorMakhlukHidup()
{
	for(int i=0; i<10; ++i)
	{
		//delete daftar[i];
	}
}

void AdministratorMakhlukHidup::fill(MakhlukHidup* n)
{
	daftar.AddLast(n);
	count++;	
}
void AdministratorMakhlukHidup::pluck(MakhlukHidup* n)
{
	int i = 0 ;
	linkedList list = daftar;
	if(list.GetCurr() == n)
	{
		list.Del(i);
	}
	else
	{
		if(list.GetNext() != NULL)
		{
			list = *list.GetNext();	
		}
	}
	count--;
}

void AdministratorMakhlukHidup::pluck(int i)
{
	daftar.Del(i);
	count--;
}

void AdministratorMakhlukHidup::sinyal()
{
	int index=0;
	linkedList list = daftar;
	while(list.GetCurr() != NULL)
	{
		sinyal(index);
		if(list.GetNext() != NULL)
			list = *list.GetNext();
		else
			break;
		index++;
	}
}

void AdministratorMakhlukHidup::sinyal(int index)
{
	typedef void (AdministratorMakhlukHidup::*my_sinyal)(int, int);
	if((daftar.retrieve(index)) != NULL)
	{
		for(int i=0; i<count; ++i)
		{
			if(((daftar.retrieve(i) != NULL) && (i != index))) 
			{
				pemantauObjek[index][i] = new thread((my_sinyal)(&AdministratorMakhlukHidup::sinyal), 
							   this, index, i);
			}
			else
			{
				pemantauObjek[index][i] = NULL;
			}
		}
	}
	else
	{
		for(int i=0; i<count; ++i)
		{
			pemantauObjek[index][i] = NULL;
		}
	}
}

void AdministratorMakhlukHidup::sinyal(int i1, int i2)
{
	bool end = false;
	while(!end)
	{
		if((daftar.retrieve(i1)!=NULL) && (daftar.retrieve(i2)!=NULL))
		{
				daftar.retrieve(i1)->Reaction(*daftar.retrieve(i2));
		}

		//cek kematian
		else
		{
			end = true;
		}
		Sleep(100);
	}
}

void AdministratorMakhlukHidup::newSinyal(int index)
{
	typedef void (AdministratorMakhlukHidup::*my_sinyal)(int, int);
	if((daftar.retrieve(index)) != NULL)
	{
		for(int i=0; i<count; ++i)
		{
			if((daftar.retrieve(index) != NULL) && (i != index)) 
			{
				pemantauObjek[index][i] = new thread((my_sinyal)(&AdministratorMakhlukHidup::sinyal), 
							   this, index, i);
				pemantauObjek[i][index] = new thread((my_sinyal)(&AdministratorMakhlukHidup::sinyal), 
							   this, i, index);
			}
			else
			{
				pemantauObjek[index][i] = NULL;
				pemantauObjek[i][index] = NULL;
			}
		}
	}
	else
	{
		for(int i=0; i<size; ++i)
		{
			pemantauObjek[index][i] = NULL;
		}
	}
}

void AdministratorMakhlukHidup::check()
{
	for(int i=0; i<count; ++i)
	{
		if((daftar.retrieve(i)!=NULL))
			cout << i << " " << daftar.retrieve(i)->getPosisi().getAbsis() << " " << daftar.retrieve(i)->getPosisi().getOrdinat() << endl; 
	}	
}

void AdministratorMakhlukHidup::initDaftar()
{
	for(int i=0; i<size; ++i)
	{
		//daftar[i] = NULL;
	}
}

int AdministratorMakhlukHidup::get_size()
{
	return size;
}

int AdministratorMakhlukHidup::get_count()
{
	return count;
}

linkedList AdministratorMakhlukHidup::get_daftar()
{
	return daftar;
}

MakhlukHidup* AdministratorMakhlukHidup::get_daftar(int i)
{
	return daftar.retrieve(i);
}

thread* AdministratorMakhlukHidup::get_pemantau(int index, int i)
{
	return pemantauObjek[index][i];
}

//setter
void AdministratorMakhlukHidup::set_size(int s)
{
	size = s;
}

void AdministratorMakhlukHidup::set_count(int c)
{
	count = c;
}

int AdministratorMakhlukHidup::pemantau_count()
{
	int t = 0;
	for(int i=0; i<size; ++i)
	{
		for(int j=0; j<size; ++j)
		{
			if(get_pemantau(i,j) != NULL) t++;
		}
	}

	return t;
}

int AdministratorMakhlukHidup::searchDaftar(MakhlukHidup* m1)
{
	for(int i=0; i<get_size(); i++)
	{
		if(m1 == daftar.retrieve(i))
		{
			return i;
		}
	}

	return 999;
}
