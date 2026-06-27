#include "Benchmark.h"

#include <iostream>
#include <iomanip>
#include <vector>

#include "../generator/DataGenerator.h"
#include "../searching/Searching.h"
#include "../sorting/Sorting.h"
#include "../utils/Timer.h"

using namespace std;

void runBenchmark()
{
    int ukuranData[] = {100,1000,10000,100000};

    cout << "\n===============================================================\n";
    cout << "HASIL PENGUJIAN KOMPLEKSITAS ALGORITMA\n";
    cout << "===============================================================\n";

    cout << left
         << setw(12) << "Data"
         << setw(18) << "Sequential"
         << setw(18) << "Binary"
         << setw(18) << "Bubble"
         << setw(18) << "Quick"
         << endl;

    cout << "---------------------------------------------------------------\n";

    for( int jumlah : ukuranData)
    {
        vector<Mahasiswa> data =
                generateDataMahasiswa(jumlah);

        string target =
                data.back().getNim();

        //----------------------------------------------------
        // Sequential Search
        //----------------------------------------------------

        Timer timerSequential;

        timerSequential.start();

        sequentialSearch(data,target);

        timerSequential.stop();

        //----------------------------------------------------
        // Binary Search
        //----------------------------------------------------

        vector<Mahasiswa> binaryData = data;

        quickSortByNIM(
            binaryData,
            0,
            binaryData.size()-1
        );

        Timer timerBinary;

        timerBinary.start();

        binarySearch(binaryData,target);

        timerBinary.stop();

        //----------------------------------------------------
        // Bubble Sort
        //----------------------------------------------------

        vector<Mahasiswa> bubbleData = data;

        Timer timerBubble;

        timerBubble.start();

        bubbleSortByIPK(bubbleData);

        timerBubble.stop();

        //----------------------------------------------------
        // Quick Sort
        //----------------------------------------------------

        vector<Mahasiswa> quickData = data;

        Timer timerQuick;

        timerQuick.start();

        quickSortByIPK(
            quickData,
            0,
            quickData.size()-1
        );

        timerQuick.stop();

        //----------------------------------------------------
        // CETAK
        //----------------------------------------------------

        cout
        << left
        << setw(12) << jumlah

        << setw(18)
        << timerSequential.getMicroseconds()

        << setw(18)
        << timerBinary.getMicroseconds()

        << setw(18)
        << timerBubble.getMicroseconds()

        << setw(18)
        << timerQuick.getMicroseconds()

        << endl;
    }

    cout << "===============================================================\n";
}