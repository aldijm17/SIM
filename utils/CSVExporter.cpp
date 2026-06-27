#include "CSVExporter.h"
#include <fstream>

void CSVExporter::initFile(const std::string& filename)
{
    std::ofstream file(filename.c_str());
    file << "Data,Sequential,Binary,Bubble,Quick\n";
    file.close();
}

void CSVExporter::writeRow(const std::string& filename,
                           const std::string& row)
{
    std::ofstream file(filename.c_str(), std::ios::app);
    file << row << "\n";
    file.close();
}