#include "Tumbuhan.h"

class Rumput : public Tumbuhan {
public:
	Rumput(Point P);
	~Rumput();
	Rumput(const Rumput&);
	Rumput& operator=(const Rumput&);
	void Reaction(MakhlukHidup&);
private:
	const static int batasumur_Rumput = 10;
    const static int ulangtahun_Rumput = 2;
    const static int DNA_Rumput = '^';
};