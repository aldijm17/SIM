#ifndef SORTING_H
#define SORTING_H

#include <vector>
#include "../models/Mahasiswa.h"

using namespace std;

// Sorting berdasarkan IPK
void bubbleSortByIPK(vector<Mahasiswa>& data);
void quickSortByIPK(vector<Mahasiswa>& data, int low, int high);

// Sorting berdasarkan NIM
void quickSortByNIM(vector<Mahasiswa>& data, int low, int high);

// Partition
int partitionByIPK(vector<Mahasiswa>& data, int low, int high);
int partitionByNIM(vector<Mahasiswa>& data, int low, int high);

#endif