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

void AdministratorMakhlukHidup::sinyal()
{
    for(int i1=0; i1 < get_size(); ++i1){
        for(int i2=0; i2 < get_size(); ++i2)
        {
            if(((daftar[i1]!=NULL) && (daftar[i2]!=NULL)) && (i1 != i2))
            {
                    daftar[i1]->Reaction(*daftar[i2]);
            }
        }
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
