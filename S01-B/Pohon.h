#include "Tumbuhan.h"

class Pohon : public Tumbuhan {
public:
	Pohon(Point=PAwal);
	~Pohon();
	Pohon(const Pohon&);
	Pohon& operator=(const Pohon&);
	void Reaction(MakhlukHidup&);
private:
	const static int batasumur_Pohon = 73;
    const static int ulangtahun_Pohon = 1;
    const static int DNA_Pohon = '!';
};
