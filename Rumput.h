#include "Tumbuhan.h"

class Rumput : public Tumbuhan {
public:
	Rumput(int=0 , char='*' , int=0 , Point=PAwal ,char* predators=NULL);
	~Rumput();
	Rumput(const Rumput&);
	Rumput& operator=(const Rumput&);
	void Reaction(MakhlukHidup&);
private:

};