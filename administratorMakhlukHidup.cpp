#include "administratorMakhlukHidup.h"

#include <iostream>
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

void AdministratorMakhlukHidup::signal()
{
	while(1)
	{
		for(int i=0; i<size; ++i)
		{
			for(int j=i+1; j<size; ++j)
			{
				if(daftar[i]!=NULL)
				{
					//daftar[i]->Reaction(*daftar[j]);
				}
			}
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

//setter
void AdministratorMakhlukHidup::set_size(int s)
{
	size = s;
}

void AdministratorMakhlukHidup::set_count(int c)
{
	count = c;
}