#include "Searching.h"

using namespace std;

int sequentialSearch(
    const vector<Mahasiswa>& data,
    const string& targetNIM)
{
    for (int i = 0; i < (int)data.size(); i++)
    {
        if (data[i].getNim() == targetNIM)
        {
            return i;
        }
    }

    return -1;
}

int binarySearch(
    const vector<Mahasiswa>& data,
    const string& targetNIM)
{
    int left = 0;
    int right = (int)data.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (data[mid].getNim() == targetNIM)
        {
            return mid;
        }

        if (data[mid].getNim() < targetNIM)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}