#include "Tumbuhan.h"

class Pohon : public Tumbuhan {
public:
	Pohon(Point=PAwal);
	~Pohon();
	Pohon(const Pohon&);
	Pohon& operator=(const Pohon&);
	void Reaction(MakhlukHidup&);
private:
	const static int batasumur_Pohon = 10;
    const static int ulangtahun_Pohon = 2;
    const static int DNA_Pohon = '!';
};