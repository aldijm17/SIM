#include "Display.h"
#include <iostream>

using namespace std;

void Display::printMahasiswa(const vector<Mahasiswa>& data, int limit)
{
    cout << "=================================================\n";
    cout << "NIM\t\tNAMA\t\tIPK\n";
    cout << "=================================================\n";

    int n = (limit < data.size()) ? limit : data.size();

    for(int i = 0; i < n; i++)
    {
        cout << data[i].getNim() << "\t"
             << data[i].getNama() << "\t"
             << data[i].getIpk() << "\n";
    }

    cout << "=================================================\n";
}