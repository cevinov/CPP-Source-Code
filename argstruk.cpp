// Argumen berupa struktur

#include <iostream>
#include <string>

using namespace std;

struct tipeBarang {
    string kode;    // Kode barang
    string nama;    // Nama barang
    int jumlah;     // Jumlah barang
    int harga;      // Harga jual
};

void tampilkanData(tipeBarang barang);

int main() {
    // Inisialisasi struktur
    tipeBarang barangA = {
        "BK-001", "Buku Tulis Kartika 30", 5, 21000
    };

    tipeBarang barangB = {
        "BP-002", "Buku Royball PG5", 2, 24000
    };

    // Tampilkan isi kedua variabel struktur
    tampilkanData(barangA);
    tampilkanData(barangB);

    return 0;
}

void tampilkanData(tipeBarang barang) {
    // Penyajian isi struktur barang
    cout << "Kode barang   : " << barang.kode << endl;
    cout << "Nama barang   : " << barang.nama << endl;
    cout << "Jumlah barang : " << barang.jumlah << endl;
    cout << "Harga barang  : " << barang.harga << endl;
    cout << endl;
}

