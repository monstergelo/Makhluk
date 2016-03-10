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

	//creation();
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

void AdministratorMakhlukHidup::creation()
{
	/*
	cout << "masuk creation" << endl;
	char opsi;
	while((count < size) && (opsi != '0'))
	{
		cout << "count sekarang " << get_count() << endl;
		cin >> opsi;
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
				MakhlukHidup *m = new Herbivora;
				Point P(4,6);
				m->setPosisi(P);
				fill(m);
				break;
			} 

			case '2' :
			{
				cout << "wewe" << endl;
				MakhlukHidup *m = new Herbivora;
				Point P(2,2);
				m->setPosisi(P);
				fill(m);
				break;
			} 

			case '3' :
			{
				cout << "wowo" << endl;
				MakhlukHidup *m = new Herbivora;
				Point P(9,8);
				m->setPosisi(P);
				fill(m);
				break;
			} 
			
		}
		//break;
	}	*/
}

void AdministratorMakhlukHidup::sinyal()
{
	typedef void (AdministratorMakhlukHidup::*my_sinyal)(int);
	for(int index=0; index<size; ++index)
	{
		sinyal(index);
	}
}

void AdministratorMakhlukHidup::sinyal(int index)
{
	typedef void (AdministratorMakhlukHidup::*my_sinyal)(MakhlukHidup&, MakhlukHidup&);
	if((daftar[index]) != NULL)
	{
		for(int i=0; i<size; ++i)
		{
			if((daftar[i]) != NULL)
			{
				pemantauObjek[index][i] = new thread((my_sinyal)(&AdministratorMakhlukHidup::sinyal), 
							   this, ref(*daftar[index]), ref(*daftar[i]));
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

void AdministratorMakhlukHidup::sinyal(MakhlukHidup &m1, MakhlukHidup &m2)
{
	bool end = false;
	while(!end)
	{
		if((&m2!=NULL) && (&m1!=NULL))
		{
			if(&m2 != &m1)
			{
				m1.Reaction(m2);
			}
		}

		//cek kematian
		if((m1.isMati()) || (&m1!=NULL))
		{
			end = true;
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

void AdministratorMakhlukHidup::wa()
{
	
}