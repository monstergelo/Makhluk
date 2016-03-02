#include "MakhlukHidup.h"

MakhlukHidup::MakhlukHidup(int _umur, char _DNA, int _ulangtahun, Point P) : ukuran_predator(20), batas_umur(_umur), posisi(P.getAbsis(),P.getOrdinat()), PPosisi(P.getAbsis(),P.getOrdinat()) {
    DNA = _DNA;
    ulang_tahun = _ulangtahun;
}

MakhlukHidup::MakhlukHidup(const MakhlukHidup& M) : ukuran_predator(20), batas_umur(M.batas_umur){
    DNA = M.DNA;
    posisi  = M.posisi;
    PPosisi = M.PPosisi;
    ulang_tahun = M.ulang_tahun;
    if (predator != NULL){
        predator = new char[ukuran_predator];
        for (int i = 0; i < ukuran_predator; i++){
            predator[i] = M.predator[i];
        }
    }
}

virtual MakhlukHidup::~MakhlukHidup(){
    delete [] predator;
}

MakhlukHidup& MakhlukHidup::operator=(const MakhlukHidup& M){
    delete [] predator;
    DNA = M.DNA;
    ulang_tahun = M.ulang_tahun;
    predator = new char[ukuran_predator];
    for (int i = 0; i < ukuran_predator; i++){
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
