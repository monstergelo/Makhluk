

//class untuk memantau parameter makhluk dan memberi sinyal jika parameter memiliki nilai tertentu
class ModeratorMakhlukHidup: public AdministratorMakhlukHidup
{
public:
	//ctor, dtor, cctor
	ModeratorMakhlukHidup();
	ModeratorMakhlukHidup(const ModeratorMakhlukHidup&);
	~ModeratorMakhlukHidup();

	//methods
	void signalPositoin(); //memberi sinyal kepada makhluk jika ada makhluk di dekatnya

private:
}