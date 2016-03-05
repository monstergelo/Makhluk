#include "administratorMakhlukHidup.h"

//ctor,  dtor
AdministratorMakhlukHidup::AdministratorMakhlukHidup()
{
	size = 10;
	//daftar = new MakhlukHidup[size];
	initDaftar();
	count = 0;

	creation();
}

AdministratorMakhlukHidup::~AdministratorMakhlukHidup()
{
	//delete daftar;
}

void AdministratorMakhlukHidup::fill(MakhlukHidup* n)
{
	for(int i=0; i<size; ++i)
	{
		if(daftar[i] == NULL)
		{
			daftar[i] = n;
			count++;
			break;
		}
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

void AdministratorMakhlukHidup::creation()
{
	cout << "masuk creation" << endl;
	char opsi;
	while(count < size)
	{
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
				Manusia m1;
				fill(&m1);
			} 

		}
		break;
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