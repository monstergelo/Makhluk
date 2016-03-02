
//class untuk mengatur kehidupan makhluk hidup
class KonduktorMakhlukHidup: public AdministratorMakhlukHidup
{
public:
	//ctor, dtor, cctor
	KonduktorMakhlukHidup();
	KonduktorMakhlukHidup(const ModeratorMakhlukHidup&);
	~KonduktorMakhlukHidup();

	//method
	void hidup();//menghidupkan semua makhluk hidup
	void hidup(int); //menghidupkan makhluk hidup pada indeks


private:
	
}