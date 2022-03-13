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

    // Pembuatan objek
    Mobil mobilA, mobilB;

    // Pengisian data untuk mobilA
    mobilA.aturNoPolisi("B3LIA");
    mobilA.aturModel("Avanza Veloz");
    mobilA.aturTahunProduksi(2011);

    // Pengisian data untuk mobilB
    mobilB.aturNoPolisi("AB461L");
    mobilB.aturModel("Terra");
    mobilB.aturTahunProduksi(2018);

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

