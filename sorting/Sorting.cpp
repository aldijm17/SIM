#include "Sorting.h"
#include <algorithm>

using namespace std;

//
// Bubble Sort Berdasarkan IPK (Descending)
//
void bubbleSortByIPK(vector<Mahasiswa>& data)
{
    int n = data.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (data[j].getIpk() < data[j + 1].getIpk())
            {
                swap(data[j], data[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

//
// Partition Quick Sort Berdasarkan IPK (Descending)
//
int partitionByIPK(vector<Mahasiswa>& data, int low, int high)
{
    float pivot = data[high].getIpk();

    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (data[j].getIpk() >= pivot)
        {
            i++;
            swap(data[i], data[j]);
        }
    }

    swap(data[i + 1], data[high]);

    return i + 1;
}

//
// Quick Sort Berdasarkan IPK (Descending)
//
void quickSortByIPK(vector<Mahasiswa>& data, int low, int high)
{
    if (low < high)
    {
        int pi = partitionByIPK(data, low, high);

        quickSortByIPK(data, low, pi - 1);
        quickSortByIPK(data, pi + 1, high);
    }
}

//
// Partition Quick Sort Berdasarkan NIM (Ascending)
//
int partitionByNIM(vector<Mahasiswa>& data, int low, int high)
{
    string pivot = data[high].getNim();

    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (data[j].getNim() <= pivot)
        {
            i++;
            swap(data[i], data[j]);
        }
    }

    swap(data[i + 1], data[high]);

    return i + 1;
}

//
// Quick Sort Berdasarkan NIM (Ascending)
//
void quickSortByNIM(vector<Mahasiswa>& data, int low, int high)
{
    if (low < high)
    {
        int pi = partitionByNIM(data, low, high);

        quickSortByNIM(data, low, pi - 1);
        quickSortByNIM(data, pi + 1, high);
    }
}