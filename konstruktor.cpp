// Contoh pembuatan kelas dan objek

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Pembuatan kelas
    class Mobil {
        private:
            string noPolisi;
            string model;
            int tahunProduksi;
        public:
            // Konstruktor
            Mobil(string noPolisi, string model,
                  int tahunProduksi) {
                Mobil::noPolisi = noPolisi;
                Mobil::model = model;
                Mobil::tahunProduksi = tahunProduksi;
            }

            // Untuk mengubah nomor polisi
            void aturNoPolisi(string noPolisi) {
                Mobil::noPolisi = noPolisi;
            }

            // Untuk mendapatkan nomor polisi
            string perolehNoPolisi() {
                return noPolisi;
            }

            // Untuk mengubah model
            void aturModel(string model) {
                Mobil::model = model;
            }

            // Untuk mendapatkan model
            string perolehModel() {
                return model;
            }

            // Untuk mengubah tahun produksi
            void aturTahunProduksi(int tahunProduksi) {
                Mobil::tahunProduksi = tahunProduksi;
            }

            // Untuk mendapatkan tahun produksi
            int perolehTahunProduksi() {
                return tahunProduksi;
            }

            // Untuk menampilkan informasi mobil
            void info() {
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
    };

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

