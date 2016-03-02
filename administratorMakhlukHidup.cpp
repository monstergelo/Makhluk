#include "administratorMakhlukHidup.h"

//ctor,  dtor
AdministratorMakhlukHidup::AdministratorMakhlukHidup()
{
	size = 10;
	daftar = new int[size];
	initDaftar();
	count = 0;

	creation();
}

AdministratorMakhlukHidup::~AdministratorMakhlukHidup()
{
	delete daftar;
}

void AdministratorMakhlukHidup::fill(int n)
{
	for(int i=0; i<size; ++i)
	{
		if(daftar[i] != 999)
		{
			daftar[i] = n;
			count++;
			break;
		}
	}
}

void AdministratorMakhlukHidup::pluck(int n)
{
	for(int i=0; i<size; ++i)
	{
		if(daftar[i] == n)
		{
			daftar[i] = 999;
			count--;
			break;
		}
	}
}

void AdministratorMakhlukHidup::creation()
{/*
	char opsi;
	while(count < size)
	{
		cin >> opsi;
		switch opsi
		{
			case
		}
	}
*/	cout << "masuk creation" << endl;
}

void AdministratorMakhlukHidup::initDaftar()
{
	for(int i=0; i<size; ++i)
	{
		daftar[i] = 999;
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

int* AdministratorMakhlukHidup::get_daftar()
{
	return daftar;
}

int AdministratorMakhlukHidup::get_daftar(int i)
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