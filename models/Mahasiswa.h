#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <string>

using namespace std;

class Mahasiswa
{
private:
    string nim;
    string nama;
    float ipk;
    int sks;

public:

    // Constructor
    Mahasiswa();

    Mahasiswa(string nim, string nama, float ipk, int sks);

    // Setter
    void setNim(string nim);
    void setNama(string nama);
    void setIpk(float ipk);
    void setSks(int sks);

    // Getter
    string getNim() const;
    string getNama() const;
    float getIpk() const;
    int getSks() const;
};

#endif