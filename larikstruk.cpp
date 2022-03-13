// Contoh larik struktur

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

    // Inisialisasi larik struktur
    tipeBarang stok[5] = {
        {"BK-001", "Buku Tulis Kartika 30", 5, 21000},
        {"BK-002", "Buku Tulis Cakra 30-L", 5, 21000},
        {"BK-003", "Buku Tulis Cakra 50-L", 3, 38000},
        {"BP-001", "Pena Royball PG3", 12, 2300},
        {"BP-002", "Buku Royball PG5", 2, 24000}
    };

    // Penyajian isi larik struktur
    for (int indeks = 0; indeks < 5; indeks++) {
        cout << "Kode barang   : "
             << stok[indeks].kode << endl;
        cout << "Nama barang   : "
             << stok[indeks].nama << endl;
        cout << "Jumlah barang : "
             << stok[indeks].jumlah << endl;
        cout << "Harga barang  : "
             << stok[indeks].harga << endl;
        cout << endl;
    }

    return 0;
}

