#include "MakhlukHidup.h"

MakhlukHidup::MakhlukHidup(int _umur, char *_predator, char _DNA, int _ulangtahun, Point P) : batas_umur(_umur){
    DNA = _DNA;
    posisi =  P;
    PPosisi = P;
    ulang_tahun = _ulangtahun;
    predator = new char[20];
    for (int i = 0; i < 20; i++){
        predator[i] = _predator[i];
    }
}

MakhlukHidup::MakhlukHidup(const MakhlukHidup& M) : batas_umur(M.batas_umur){
    DNA = M.DNA;
    posisi  = M.posisi;
    PPosisi = M.PPosisi;
    ulang_tahun = M.ulang_tahun;
    predator = new char[20];
    for (int i = 0; i < 20; i++){
        predator[i] = M.predator[i];
    }
}

MakhlukHidup::~MakhlukHidup(){
    delete [] predator;
}

MakhlukHidup& MakhlukHidup::operator=(const MakhlukHidup& M){
    delete [] predator;
    DNA = M.DNA;
    ulang_tahun = M.ulang_tahun;
    predator = new char[20];
    for (int i = 0; i < 20; i++){
        predator[i] = M.predator[i];
    }
    return *this;
}


    //getter
    int MakhlukHidup::get_umur()
    {
    	return umur;
    }

    int MakhlukHidup::get_ulang_tahun()
    {
    	return ulang_tahun;
    }

    char MakhlukHidup::get_DNA()
    {
    	return DNA;
    }

    int MakhlukHidup::get_batas_umur()
    {
    	return batas_umur;
    }

    Point MakhlukHidup::getPosisi(){
        return posisi;
    }

    //setter
    void MakhlukHidup::get_umur(int i)
    {
    	umur = i;
    }

    void MakhlukHidup::get_ulang_tahun(int i)
    {
    	ulang_tahun = i;
    }

    void MakhlukHidup::get_DNA(char i)
    {
    	DNA = i;
    }

    void MakhlukHidup::setPosisi(Point P){
        posisi = P;
    }
