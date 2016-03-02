using namespace std;
#include 

class World
{
public:
	void initDisplay();		//bikin are awal
	void updateDisplay();	//pindah posisi makhluk
	void hidup();			//masukkan makhluk dalam area
	void mati();			//keluarkan makhluk dari are
	bool cellCollide();		//cek apakah ada makhluk dalam posisi yang sama
	bool gameOver();		//cek apakah sudah tidak ada makhluk di dalam area



private:
	//atribut
	int *Area; //matrix untuk menyimpan pointer objek, index menggambarkan posisi
	int panjang;
	int lebar;
	list<int> daftarMakhluk; //ganti jadi list Makhluk ntar
	list<int> threadMakhluk; //ganti jadi list thread ntar


	//method pembantu
	void resetCursor();
	void moveCursor(int, int);
	void cursorSwitch(bool b);
	void clear();
}