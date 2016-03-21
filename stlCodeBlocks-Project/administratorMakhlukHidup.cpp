#include "administratorMakhlukHidup.h"

#include <iostream>
#include <thread>
using namespace std;

//ctor,  dtor
AdministratorMakhlukHidup::AdministratorMakhlukHidup()
{
	size = 0;
	//daftar = new MakhlukHidup[size];
	count = 0;

}

AdministratorMakhlukHidup::~AdministratorMakhlukHidup()
{
	daftar.clear();
	pemantauObjek.clear();
}

void AdministratorMakhlukHidup::fillDaftar(MakhlukHidup* n)
{
	daftar.push_back(n);
	count++;
}

void AdministratorMakhlukHidup::pluck(MakhlukHidup* n)
{
	for(int i=0; i<size; ++i)
	{
		if(daftar[i] == n)
		{
			daftar.erase(daftar.begin()+i);
			count--;
			break;
		}
	}
}

void AdministratorMakhlukHidup::pluck(int i)
{
	daftar.erase(daftar.begin()+i);
	count--;
}

void AdministratorMakhlukHidup::sinyal()
{
	for(int index=0; index<size; ++index)
	{
		sinyal(index);
	}
}

void AdministratorMakhlukHidup::sinyal(int index)
{
	typedef void (AdministratorMakhlukHidup::*my_sinyal)(int, int);
	if((daftar[index]) != NULL)
	{
		for(int i=0; i<size; ++i)
		{
			if(((daftar[i]) != NULL) && (i != index)) 
			{
				pemantauObjek[index][i] = new thread((my_sinyal)(&AdministratorMakhlukHidup::sinyal), 
							   this, index, i);
			}
			else
			{
				//pemantauObjek[index][i] = NULL;
			}
		}
	}
	else
	{
		for(int i=0; i<size; ++i)
		{
			//pemantauObjek[index][i] = NULL;
		}
	}
}

void AdministratorMakhlukHidup::sinyal(int i1, int i2)
{
	bool end = false;
	while(!end)
	{
		if((daftar[i1]!=NULL) && (daftar[i2]!=NULL))
		{
				daftar[i1]->Reaction(*daftar[i2]);
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
	if((daftar[index]) != NULL)
	{
		for(int i=0; i<size; ++i)
		{
			if(((daftar[i]) != NULL) && (i != index)) 
			{
				pemantauObjek[index][i] = new thread((my_sinyal)(&AdministratorMakhlukHidup::sinyal), 
							   this, index, i);
				pemantauObjek[i][index] = new thread((my_sinyal)(&AdministratorMakhlukHidup::sinyal), 
							   this, i, index);
			}
			else
			{
				//pemantauObjek[index][i] = NULL;
				//pemantauObjek[i][index] = NULL;
			}
		}
	}
	else
	{
		for(int i=0; i<size; ++i)
		{
				//pemantauObjek[index][i] = NULL;
		}
	}
}
void AdministratorMakhlukHidup::activate()
{
	
}

void AdministratorMakhlukHidup::check()
{
	for(int i=0; i<count; ++i)
	{
		if(daftar[i]!=NULL)
			cout << i << " " << daftar[i]->getPosisi().getAbsis() << " " << daftar[i]->getPosisi().getOrdinat	() << endl; 
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

vector<MakhlukHidup*> AdministratorMakhlukHidup::get_daftar()
{
	return daftar;
}

MakhlukHidup* AdministratorMakhlukHidup::get_daftar(int i)
{
	return daftar[i];
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
		if(m1 == get_daftar(i))
		{
			return i;
		}
	}

	return 999;
}
