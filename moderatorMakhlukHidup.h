#include <thread>
#include "AdministratorMakhlukHidup.h"

//class untuk memantau parameter makhluk dan memberi sinyal jika parameter memiliki nilai tertentu
class ModeratorMakhlukHidup: public AdministratorMakhlukHidup
{
public:
	//ctor, dtor
	ModeratorMakhlukHidup();
	~ModeratorMakhlukHidup();

	//methods
	void signalPosition(); //memberi sinyal kepada makhluk jika ada makhluk di dekatnya

private:
}