// Contoh penyalinan struktur

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

    tipeBarang buku;
    buku = barang;

    // Ubah buku
    buku.kode = "BK-002";
    buku.nama = "Buku Tulis Cakra 30-L";

    // Penyajian isi struktur barang
    cout << "Kode barang   : " << barang.kode << endl;
    cout << "Nama barang   : " << barang.nama << endl;
    cout << "Jumlah barang : " << barang.jumlah << endl;
    cout << "Harga barang  : " << barang.harga << endl;

    // Penyajian isi struktur buku
    cout << endl;
    cout << "Kode barang   : " << buku.kode << endl;
    cout << "Nama barang   : " << buku.nama << endl;
    cout << "Jumlah barang : " << buku.jumlah << endl;
    cout << "Harga barang  : " << buku.harga << endl;

    return 0;
}

