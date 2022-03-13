// Contoh struktur dinamis

#include <iostream>
#include <string>

using namespace std;

int main() {
    struct tipeMahasiswa {
        string nomorInduk; // Nomor mahasiswa
        string nama;       // Nama mahasiswa
        bool jender;       // true = pria, false = wanita
        int kodeProdi;     // Kode program studi
    };

    tipeMahasiswa *ptrMahasiswa;
    ptrMahasiswa = new tipeMahasiswa;

    // Penugasan ke anggota struktur
    ptrMahasiswa->nomorInduk = "182004";
    ptrMahasiswa->nama = "Rita Sonora";
    ptrMahasiswa->jender = false;
    ptrMahasiswa->kodeProdi = 23;

    // Tampilkan isi struktur dinamis
    cout << "Nomor induk       : "
         << ptrMahasiswa->nomorInduk << endl;

    cout << "Nama mahasiswa    : "
         << ptrMahasiswa->nama << endl;

    cout << "Jender            : ";
    if (ptrMahasiswa->jender)
        cout << "pria" << endl;
    else
        cout << "wanita" << endl;

    cout << "Kode Program Studi: "
         << ptrMahasiswa->kodeProdi << endl;

    // Variabel dinamis perlu dihapus
    //     sebelum program berakhir
    delete ptrMahasiswa;

    return 0;
}

