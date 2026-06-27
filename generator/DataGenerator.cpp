#include "DataGenerator.h"

#include <string>
#include <cstdlib>
#include <sstream>
#include <iomanip>

using namespace std;

static const string daftarNama[] =
{
    "Aldi", "Budi", "Citra", "Dimas", "Eka",
    "Farhan", "Gita", "Hana", "Indra", "Joko",
    "Kevin", "Laila", "Maya", "Nanda", "Olivia",
    "Putra", "Qori", "Rina", "Sinta", "Taufik",
    "Umar", "Vina", "Wahyu", "Yusuf", "Zahra"
};

static const string daftarProdi[] =
{
    "Informatika",
    "Sistem Informasi",
    "Teknik Komputer",
    "Teknik Elektro",
    "Manajemen",
    "Akuntansi"
};

string generateNIM(int nomor)
{
    stringstream ss;

    // Format:
    // 251100001
    ss << "2511"
       << setw(5)
       << setfill('0')
       << nomor;

    return ss.str();
}

string generateNama()
{
    int index = rand() % 25;

    return daftarNama[index];
}

string generateProdi()
{
    int index = rand() % 6;

    return daftarProdi[index];
}

int generateSemester()
{
    return (rand() % 8) + 1;
}

float generateIPK()
{
    // IPK antara 2.00 - 4.00

    int nilai = 200 + rand() % 201;

    return nilai / 100.0f;
}

vector<Mahasiswa> generateDataMahasiswa(int jumlahData)
{
    vector<Mahasiswa> data;

    data.reserve(jumlahData);

    for(int i = 1; i <= jumlahData; i++)
    {
        Mahasiswa m(
            generateNIM(i),
            generateNama(),
            generateProdi(),
            generateSemester(),
            generateIPK()
        );

        data.push_back(m);
    }

    return data;
}