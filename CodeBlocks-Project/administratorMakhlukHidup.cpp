#include "administratorMakhlukHidup.h"

#include <iostream>
#include <thread>
using namespace std;

//ctor,  dtor
AdministratorMakhlukHidup::AdministratorMakhlukHidup()
{
	size = 10;
	//daftar = new MakhlukHidup[size];
	initDaftar();
	count = 0;

}

AdministratorMakhlukHidup::~AdministratorMakhlukHidup()
{
	for(int i=0; i<10; ++i)
	{
		delete daftar[i];
	}
}

void AdministratorMakhlukHidup::fill(MakhlukHidup* n)
{
	int i = 0;
	while(i<size)
	{
		if(daftar[i] == NULL)
		{
			cout << "sup" << endl;
			daftar[i] = n;
			count++;
			break;
		}
		++i;
	}
}

void AdministratorMakhlukHidup::pluck(MakhlukHidup* n)
{
	for(int i=0; i<size; ++i)
	{
		if(daftar[i] == n)
		{
			daftar[i] = NULL;
			count--;
			break;
		}
	}
}

void AdministratorMakhlukHidup::pluck(int i)
{
	daftar[i] = NULL;
	count--;
}

void AdministratorMakhlukHidup::creation(Point P, char opsi)
{
	if((count < size) && (opsi != '0'))
	{
		switch (opsi)
		{
			case '0' :
			{
				cout << "wawa" << endl;
				break;
			}

			case '1' :
			{
				cout << "wiwi" << endl;
				MakhlukHidup *m = new Polisi(P);
				fill(m);
				break;
			} 
/*
			case '2' :
			{
				cout << "wewe" << endl;
				MakhlukHidup *m = new Herbivora;
				m->setPosisi(P);
				fill(m);
				break;
			} 

			case '3' :
			{
				cout << "wowo" << endl;
				MakhlukHidup *m = new Herbivora;
				m->setPosisi(P);
				fill(m);
				break;
			} 
*/			
		}
	}	
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
				pemantauObjek[index][i] = NULL;
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

void AdministratorMakhlukHidup::initDaftar()
{
	for(int i=0; i<size; ++i)
	{
		daftar[i] = NULL;
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

MakhlukHidup** AdministratorMakhlukHidup::get_daftar()
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
