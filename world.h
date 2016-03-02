using namespace std;

//menggambarkan tampilan makhluk hidup dan dunia
class World: public AdministratorMakhlukHidup, public ModeratorMakhlukHidup, public KonduktorMakhlukHidup
{
public:
	void initDisplay();		//bikin are awal
	void updateDisplay();	//pindah posisi makhluk
	bool gameOver();		//cek apakah sudah tidak ada makhluk di dalam area



private:
	//atribut
	int panjang;
	int lebar;


	//method pembantu
	void resetCursor();
	void moveCursor(int, int);
	void cursorSwitch(bool b);
	void clear();
}