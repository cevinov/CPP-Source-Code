// Contoh pemisahan definisi fungsi anggota
//     dari definisi kelas

#include <iostream>
#include <string>

using namespace std;

// Pembuatan kelas
class Mobil {
    private:
        string noPolisi;
        string model;
        int tahunProduksi;
    public:
        Mobil(string noPolisi, string model,
              int tahunProduksi);
        void aturNoPolisi(string noPolisi);
        string perolehNoPolisi();
        void aturModel(string model);
        string perolehModel();
        void aturTahunProduksi(int tahunProduksi);
        int perolehTahunProduksi();
        void info();
};

Mobil::Mobil(string noPolisi, string model,
             int tahunProduksi) {
    Mobil::noPolisi = noPolisi;
    Mobil::model = model;
    Mobil::tahunProduksi = tahunProduksi;
}

void Mobil::aturNoPolisi(string noPolisi) {
    Mobil::noPolisi = noPolisi;
}

string Mobil::perolehNoPolisi() {
   return noPolisi;
}

void Mobil::aturModel(string model) {
    Mobil::model = model;
}

string Mobil::perolehModel() {
    return model;
}

void Mobil::aturTahunProduksi(int tahunProduksi) {
    Mobil::tahunProduksi = tahunProduksi;
}

int Mobil::perolehTahunProduksi() {
    return tahunProduksi;
}

void Mobil::info() {
    cout << endl;
    cout << "Nomor Polisi  : "
         << noPolisi << endl;
    cout << "Model mobil   : "
         << model << endl;
    cout << "Tahun produksi: "
         << tahunProduksi << endl;
         cout << "================================="
              << endl;
}

int main() {

    // Inisialisasi objek
    Mobil mobilA("B3LIA", "Avanza Veloz", 2011);
    Mobil mobilB("AB461L", "Terra", 2018);

    // Ambil data dari kedua objek
    cout << "Model mobilA: " << mobilA.perolehModel()
         << endl;

    cout << "Tahun mobilB: "
         << mobilB.perolehTahunProduksi() << endl;

    // Peroleh informasi via info()
    mobilA.info();
    mobilB.info();

    return 0;
}

