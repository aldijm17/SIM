#include "Benchmark.h"
#include <iostream>
#include <iomanip>
#include <vector>

#include "../searching/Searching.h"
#include "../sorting/Sorting.h"
#include "../utils/Timer.h"
using namespace std;

void runBenchmark(const vector<Mahasiswa>& dataUtama)
{
    cout << "\n===============================================================\n";
    cout << "HASIL PENGUJIAN KOMPLEKSITAS ALGORITMA (MILLISECONDS)\n";
    cout << "===============================================================\n";
    cout << left << setw(12) << "Data" << setw(15) << "Sequential" 
         << setw(15) << "Binary" << setw(15) << "Bubble Sort" 
         << setw(15) << "Quick Sort" << endl;
    cout << "---------------------------------------------------------------\n";

    int jumlah = dataUtama.size();
    string target = dataUtama.back().getNim(); 

    // Gunakan HANYA SATU vektor cadangan untuk menghemat RAM
    vector<Mahasiswa> dataUji;

    // --- SEQUENTIAL SEARCH ---
    Timer timerSequential;
    timerSequential.start();
    sequentialSearch(dataUtama, target);
    timerSequential.stop();

    // --- BINARY SEARCH ---
    dataUji = dataUtama; 
    quickSortByNIM(dataUji, 0, dataUji.size() - 1);
    Timer timerBinary;
    timerBinary.start();
    binarySearch(dataUji, target);
    timerBinary.stop();

    // --- BUBBLE SORT ---
    long long waktuBubble = -1; 
    if (jumlah <= 10000) { // PROTEKSI MUTLAK AGAR TIDAK FREEZE
        dataUji = dataUtama;
        Timer timerBubble;
        timerBubble.start();
        bubbleSortByIPK(dataUji);
        timerBubble.stop();
        waktuBubble = timerBubble.getMilliseconds();
    }

    // --- QUICK SORT ---
    dataUji = dataUtama;
    Timer timerQuick;
    timerQuick.start();
    quickSortByIPK(dataUji, 0, dataUji.size() - 1);
    timerQuick.stop();

    // --- CETAK LAYAR ---
    cout << left << setw(12) << jumlah
         << setw(15) << timerSequential.getMilliseconds()
         << setw(15) << timerBinary.getMilliseconds();
         
    if (waktuBubble == -1) cout << setw(15) << "Timeout/Skip";
    else cout << setw(15) << waktuBubble;
    
    cout << setw(15) << timerQuick.getMilliseconds() << endl;
    cout << "===============================================================\n";
}
