#include "MakhlukHidup.h"

MakhlukHidup::MakhlukHidup(int _umur, char _DNA, int _ulangtahun, Point P) : ukuran_predator(20), batas_umur(_umur), posisi(P.getAbsis(),P.getOrdinat()), PPosisi(P.getAbsis(),P.getOrdinat()) {
    umur = 0;
    DNA = _DNA;
    ulang_tahun = _ulangtahun;
    predator = new char[ukuran_predator];
    for (int i=0; i<ukuran_predator; i++)
        predator[i] = ' ';
    mati = false;
}

MakhlukHidup::MakhlukHidup(const MakhlukHidup& M) : ukuran_predator(M.ukuran_predator), batas_umur(M.batas_umur){
    umur = M.umur;
    ulang_tahun = M.ulang_tahun;
    DNA = M.DNA;
    posisi  = M.posisi;
    PPosisi = M.PPosisi;
    ulang_tahun = M.ulang_tahun;
    predator = new char[ukuran_predator];
    for (int i = 0; i < ukuran_predator; i++){
        predator[i] = M.predator[i];
    }
    mati = M.mati;
}

MakhlukHidup::~MakhlukHidup(){
    delete [] predator;
}

MakhlukHidup& MakhlukHidup::operator=(const MakhlukHidup& M){
    delete [] predator;
    umur = M.umur;
    DNA = M.DNA;
    ulang_tahun = M.ulang_tahun;
    predator = new char[ukuran_predator];
    for (int i = 0; i < ukuran_predator; i++){
        predator[i] = M.predator[i];
    }
    mati = M.mati;
    return *this;
}


void MakhlukHidup::menua()
//menambah umur dari makhluk hidup
{
    umur++;
    if (umur > batas_umur){
        mati = true;
    }
}

bool MakhlukHidup::isMati()
//mengembalikan nilai true jika umur makhluk hidup sudah mencapai batas umur atau kondisi tertentu
{
    return mati;
}

/* Tolong Isikan yang ini bimo */
void MakhlukHidup::display(){
}
//menampilkan makhluk hidup ke layar

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

Point MakhlukHidup::getPrecPosisi(){
    return PPosisi;
}

char MakhlukHidup::getPredator(int i){
    return predator[i];
}

int MakhlukHidup::getUkuranPredator(){
    return ukuran_predator;
}
//setter

void MakhlukHidup::set_umur(int i)
{
    umur = i;
}

void MakhlukHidup::set_ulang_tahun(int i)
{
    ulang_tahun = i;
}

void MakhlukHidup::set_DNA(char i)
{
    DNA = i;
}

void MakhlukHidup::setPosisi(Point P){
    PPosisi = posisi;
    posisi = P;
}

void MakhlukHidup::setPrecPosisi(Point P){
    PPosisi = P;
}

void MakhlukHidup::setPredator(int i, char _predator){
    predator[i] = _predator;
}

void MakhlukHidup::setMati(bool _mati){
    mati = _mati;
}

bool MakhlukHidup::isPredator(char DNA_predator){
    int i = 0;
    bool stopCheckingIsPredator = false;
    while (i < getUkuranPredator() && (!stopCheckingIsPredator) ) {
        if (getPredator(i) == DNA_predator) {
            stopCheckingIsPredator = true;
        } else {
            i++;
        }
    }
    return (i < getUkuranPredator());
}

bool MakhlukHidup::isRadius(int rad, Point p){
    int _x, _y;
    _x = posisi.getAbsis() - p.getAbsis();
    if (_x < 0)
        _x = 0 - _x;
    _y = posisi.getOrdinat() - p.getOrdinat();
    if (_y < 0)
        _y = 0 - _y;
    return ((_y <= rad) &&(_x <= rad));
}
