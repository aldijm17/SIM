#include "Searching.h"

using namespace std;

int sequentialSearch(
    const vector<Mahasiswa>& data,
    const string& nim)
{
    for(int i=0;i<data.size();i++)
    {
        if(data[i].getNim()==nim)
            return i;
    }

    return -1;
}

int binarySearch(
    const vector<Mahasiswa>& data,
    const string& nim)
{
    int kiri=0;
    int kanan=data.size()-1;

    while(kiri<=kanan)
    {
        int tengah=(kiri+kanan)/2;

        if(data[tengah].getNim()==nim)
            return tengah;

        if(data[tengah].getNim()<nim)
            kiri=tengah+1;
        else
            kanan=tengah-1;
    }

    return -1;
}