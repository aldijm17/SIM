#include "Mahasiswa.h"

using namespace std;

// Constructor default
Mahasiswa::Mahasiswa()
{
    nim = "";
    nama = "";
    prodi = "";
    semester = 1;
    ipk = 0.0f;
}

// Constructor dengan parameter
Mahasiswa::Mahasiswa(
    string nim,
    string nama,
    string prodi,
    int semester,
    float ipk)
{
    this->nim = nim;
    this->nama = nama;
    this->prodi = prodi;
    this->semester = semester;
    this->ipk = ipk;
}

// Getter
string Mahasiswa::getNim() const
{
    return nim;
}

string Mahasiswa::getNama() const
{
    return nama;
}

string Mahasiswa::getProdi() const
{
    return prodi;
}

int Mahasiswa::getSemester() const
{
    return semester;
}

float Mahasiswa::getIpk() const
{
    return ipk;
}

// Setter
void Mahasiswa::setNim(const string& nim)
{
    this->nim = nim;
}

void Mahasiswa::setNama(const string& nama)
{
    this->nama = nama;
}

void Mahasiswa::setProdi(const string& prodi)
{
    this->prodi = prodi;
}

void Mahasiswa::setSemester(int semester)
{
    this->semester = semester;
}

void Mahasiswa::setIpk(float ipk)
{
    this->ipk = ipk;
}