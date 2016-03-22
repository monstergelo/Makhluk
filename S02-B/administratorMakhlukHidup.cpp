#include "administratorMakhlukHidup.h"

#include <iostream>
#include <thread>
using namespace std;

//ctor,  dtor
AdministratorMakhlukHidup::AdministratorMakhlukHidup()
{
	size = 10;
	//daftar = new MakhlukHidup[size];
	count = 0;

}

AdministratorMakhlukHidup::~AdministratorMakhlukHidup()
{
	daftar.clear();
}

void AdministratorMakhlukHidup::fillDaftar(MakhlukHidup* n)
{
	daftar.push_back(n);
	count++;
}

void AdministratorMakhlukHidup::pluck(MakhlukHidup* n)
{
	for(int i=0; i<get_count(); i++)
	{
		if(get_daftar(i) == n)
		{
			daftar.erase(daftar.begin()+i);
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
    for(int i1=0; i1 < get_count(); i1++){
        for(int i2=0; i2 < get_count(); i2++)
        {
            if(i1 != i2)
            {
                    get_daftar(i1)->Reaction(*get_daftar(i2));
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
	return daftar.size();
}

vector<MakhlukHidup*> AdministratorMakhlukHidup::get_daftar()
{
	return daftar;
}

MakhlukHidup* AdministratorMakhlukHidup::get_daftar(int i)
{
	return daftar.at(i);
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
