#include "Mahasiswa.h"

//
// Constructor
//

Mahasiswa::Mahasiswa()
{
    nim = "";
    nama = "";
    ipk = 0.0;
    sks = 0;
}

Mahasiswa::Mahasiswa(string nim, string nama, float ipk, int sks)
{
    this->nim = nim;
    this->nama = nama;
    this->ipk = ipk;
    this->sks = sks;
}

//
// Setter
//

void Mahasiswa::setNim(string nim)
{
    this->nim = nim;
}

void Mahasiswa::setNama(string nama)
{
    this->nama = nama;
}

void Mahasiswa::setIpk(float ipk)
{
    this->ipk = ipk;
}

void Mahasiswa::setSks(int sks)
{
    this->sks = sks;
}

//
// Getter
//

string Mahasiswa::getNim() const
{
    return nim;
}

string Mahasiswa::getNama() const
{
    return nama;
}

float Mahasiswa::getIpk() const
{
    return ipk;
}

int Mahasiswa::getSks() const
{
    return sks;
}