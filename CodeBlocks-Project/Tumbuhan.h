#ifndef TUMBUHAN_H
#define TUMBUHAN_H

#include "MakhlukHidup.h"

class Tumbuhan : public MakhlukHidup {
public:
	Tumbuhan(int=0 , char='*' , int=0 , Point=PAwal ,char* predators=NULL);
	virtual ~Tumbuhan();
	Tumbuhan(const Tumbuhan&);
	Tumbuhan& operator=(const Tumbuhan&);
 
 	virtual void Reaction(MakhlukHidup&);
private:

};

#endif