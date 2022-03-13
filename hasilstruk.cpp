// Contoh fungsi dengan nilai balik berupa struktur

#include <iostream>
#include <string>

using namespace std;

struct tipeBarang {
    string kode;    // Kode barang
    string nama;    // Nama barang
    int jumlah;     // Jumlah barang
    int harga;      // Harga jual
};

// Prototipe fungsi
tipeBarang cariBarang(string kodeBarang);

int main() {
    cout << "Pencarian barang" << endl;
    cout << "================" << endl;

    string kodeBarang;

    cout << "Kode barang: ";
    getline(cin, kodeBarang);

    tipeBarang barang = cariBarang(kodeBarang);

    // Penyajian isi larik struktur
    if (barang.kode != "") {
        cout << endl;
        cout << "Nama barang   : "
             << barang.nama << endl;
        cout << "Jumlah barang : "
             << barang.jumlah << endl;
        cout << "Harga barang  : "
             << barang.harga << endl;
        cout << endl;
    }
    else
        cout << "Data barang tidak ditemukan" << endl;

    return 0;
}

tipeBarang cariBarang(string kodeBarang) {
    tipeBarang hasil;

    // Inisialisasi larik struktur
    tipeBarang stok[5] = {
        {"BK-001", "Buku Tulis Kartika 30", 5, 21000},
        {"BK-002", "Buku Tulis Cakra 30-L", 5, 21000},
        {"BK-003", "Buku Tulis Cakra 50-L", 3, 38000},
        {"BP-001", "Pena Royball PG3", 12, 2300},
        {"BP-002", "Buku Royball PG5", 2, 24000}
    };

    int indeks = -1; // Berarti tidak ditemukan
    for (int j = 0; j < 5; j++) {
        if (stok[j].kode == kodeBarang) {
            indeks = j;
            break;
        }
    }

    if (indeks == -1) {
        // Menyatakan data tidak dijumpai
        hasil.kode = "";
    }
    else {
        hasil = stok[indeks];
    }

    return hasil;
}
