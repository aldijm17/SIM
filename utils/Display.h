#ifndef DISPLAY_H
#define DISPLAY_H

#include <vector>
#include "../models/Mahasiswa.h"

class Display
{
public:
    static void printMahasiswa(const std::vector<Mahasiswa>& data, int limit);
};

#endif