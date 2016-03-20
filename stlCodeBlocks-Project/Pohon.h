#include "Tumbuhan.h"

class Pohon : public Tumbuhan {
public:
	Pohon(int=0 , char='*' , int=0 , Point=PAwal ,char* predators=NULL);
	~Pohon();
	Pohon(const Pohon&);
	Pohon& operator=(const Pohon&);
	void Reaction(MakhlukHidup&);
private:

};