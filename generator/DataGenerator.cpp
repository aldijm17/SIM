#include "DataGenerator.h"

#include <cstdlib>
#include <ctime>

vector<Mahasiswa> generateDataMahasiswa(int jumlah)
{
    vector<Mahasiswa> data;

    srand(time(NULL));

    for(int i = 1; i <= jumlah; i++)
    {
        string nim = "251108" + to_string(1000 + i);

        string nama = "Mahasiswa_" + to_string(i);

        float ipk = 2.00 + (rand() % 201) / 100.0f;

        int sks = 100 + rand() % 45;

        Mahasiswa m(nim, nama, ipk, sks);

        data.push_back(m);
    }

    return data;
}