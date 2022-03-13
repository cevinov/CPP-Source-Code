// Contoh inisialisasi struktur

#include <iostream>
#include <string>

using namespace std;

int main() {
    struct tipeBarang {
        string kode;    // Kode barang
        string nama;    // Nama barang
        int jumlah;     // Jumlah barang
        int harga;      // Harga jual
    };

    // Inisialisasi struktur
    tipeBarang barang = {
        "BK-001", "Buku Tulis Kartika 30", 5, 21000
    };

    // Penyajian isi struktur
    cout << "Kode barang   : " << barang.kode << endl;
    cout << "Nama barang   : " << barang.nama << endl;
    cout << "Jumlah barang : " << barang.jumlah << endl;
    cout << "Harga barang  : " << barang.harga << endl;

    return 0;
}

