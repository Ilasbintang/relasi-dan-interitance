#include <iostream>
#include <vector>
using namespace std;

class dokter; 


class pasin{
    public:
    string nama;
    vector<dokter*> daftar dokter;
    pasien(string pNama) : nama(pNama) {
        cout << "pasien \"" << nama << "\" ada\n";
    }
    ~pasien () {
        cout <<"pasien \"" << nama
        << "\" tidak ada\n";
    }
    void tambahDokter(dokter);
    void cetakDokter();

};

class dokter {
    public:
        string nama;
        vector<pasien*> daftar_pasien;

        dokter(string pNama): nama(pNama) {
            cout << "Dokter \"" << nama << "\" ada\n";
        }
        ~dokter() {
            cout << "Dokter \"" << nama
            << "\" tidak ada\n";
        }
        void tambahPasien(pasien*);
        void cetakPasien();
};

void pasien:tambahDokter(dokter* pDokter) {
    daftar_dokter.push_back(pDokter);
}

void pasien:cetakDokter() {
    cout << "Daftar dokter yang menangani pasien \""
    << this->nama << "\":\n";
    //auto di gunakan dalam perulangan
    for (auto& a : daftar_dokter) {
        cout << a->nama << "\n";
    }
    cout << endl;
}