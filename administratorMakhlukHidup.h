  
//class untuk memasukkan/mendaftar makhluk dalam world serta mematikannya
class AdministratorMakhlukHidup
{
public:
	//ctor, dtor, cctor
	AdministratorMakhlukHidup();
	AdministratorMakhlukHidup(const ModeratorMakhlukHidup&);
	~AdministratorMakhlukHidup();

	//method
	void fill(int);//memasukkan pointer ke da;am daftar

private:
	int daftar[10]; //array pointer objek makhluk
}