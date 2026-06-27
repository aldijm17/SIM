#ifndef CSVEXPORTER_H
#define CSVEXPORTER_H

#include <string>

class CSVExporter
{
public:
    static void initFile(const std::string& filename);
    static void writeRow(const std::string& filename,
                         const std::string& row);
};

#endif