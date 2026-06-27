#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <string>

using namespace std;

class Mahasiswa
{
private:
    string nim;
    string nama;
    string prodi;
    int semester;
    float ipk;

public:
    // Constructor
    Mahasiswa();

    Mahasiswa(
        string nim,
        string nama,
        string prodi,
        int semester,
        float ipk
    );

    // Getter
    string getNim() const;
    string getNama() const;
    string getProdi() const;
    int getSemester() const;
    float getIpk() const;

    // Setter
    void setNim(const string& nim);
    void setNama(const string& nama);
    void setProdi(const string& prodi);
    void setSemester(int semester);
    void setIpk(float ipk);
};

#endif