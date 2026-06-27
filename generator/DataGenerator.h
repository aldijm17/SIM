#ifndef DATAGENERATOR_H
#define DATAGENERATOR_H

#include <vector>
#include "../models/Mahasiswa.h"

using namespace std;

// Membuat sejumlah data mahasiswa secara otomatis
vector<Mahasiswa> generateDataMahasiswa(int jumlah);

#endif