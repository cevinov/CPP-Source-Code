// Contoh struktur bersarang

#include <iostream>
#include <string>

using namespace std;

int main() {
    struct tipeTanggal {
        short int tanggal, bulan, tahun;
    };

    struct tipePesertaLomba {
        int noUrut;
        string nama;
        tipeTanggal tglLahir;
    };

    // Inisialisasi struktur
    tipePesertaLomba peserta {
        1, "Dadang Damhudi", {28, 2, 2000}
    };

    // Penyajian isi struktur
    cout << "Nomor urut    : " << peserta.noUrut << endl;
    cout << "Nama          : " << peserta.nama << endl;
    cout << "Tanggal lahir : "
         << peserta.tglLahir.tanggal << "/"
         << peserta.tglLahir.bulan << "/"
         << peserta.tglLahir.tahun << endl;

    return 0;
}

