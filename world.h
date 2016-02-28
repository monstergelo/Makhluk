using namespace std;

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
	int *Area; //matrix untuk menyimpan pointer objek, index menggambarkan posisi
	int panjang;
	int lebar;
	list<int> daftarMakhluk; //ganti jadi list Makhluk ntar
	list<int> threadMakhluk; //ganti jadi list thread ntar
}