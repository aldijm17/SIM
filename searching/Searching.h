#ifndef SEARCHING_H
#define SEARCHING_H

#include <vector>
#include <string>
#include "../models/Mahasiswa.h"

using namespace std;

// Sequential Search
int sequentialSearch(
    const vector<Mahasiswa>& data,
    const string& targetNIM
);

// Binary Search
int binarySearch(
    const vector<Mahasiswa>& data,
    const string& targetNIM
);

#endif