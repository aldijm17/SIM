#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "models/Mahasiswa.h"
#include "generator/DataGenerator.h"
#include "benchmark/Benchmark.h"

using namespace std;

int main()
{
    srand(time(nullptr));

    vector<Mahasiswa> dataMahasiswa;

    int pilihan;
    int jumlahData;

    do
    {
        cout << "\n=========================================\n";
        cout << "   ANALISIS KOMPLEKSITAS ALGORITMA\n";
        cout << "   SISTEM INFORMASI MAHASISWA\n";
        cout << "=========================================\n";
        cout << "1. Generate Data Mahasiswa\n";
        cout << "2. Jalankan Benchmark\n";
        cout << "0. Keluar\n";
        cout << "=========================================\n";
        cout << "Pilihan : ";
        cin >> pilihan;

        switch (pilihan)
        {
            case 1:
            {
                cout << "\nMasukkan jumlah data : ";
                cin >> jumlahData;

                dataMahasiswa = generateDataMahasiswa(jumlahData);

                cout << "\nBerhasil membuat "
                     << dataMahasiswa.size()
                     << " data mahasiswa.\n";

                break;
            }

            case 2:
            {
                if(dataMahasiswa.empty())
                {
                    cout << "\nSilakan generate data terlebih dahulu.\n";
                }
                else
                {
                    runBenchmark();
                }

                break;
            }

            case 0:
            {
                cout << "\nTerima kasih.\n";
                break;
            }

            default:
            {
                cout << "\nPilihan tidak tersedia.\n";
            }
        }

    } while (pilihan != 0);

    return 0;
}