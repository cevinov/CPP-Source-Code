// Contoh anggota struktur berupa larik

#include <iostream>
#include <string>

using namespace std;

int main() {
    struct tipeHasilUjian {
        string nomorMhs;
        int nilaiEvaluasi[4];
    };

    // Inisialisasi struktur
    tipeHasilUjian hasil {
        "180127", {70, 65, 82, 90}
    };

    // Penyajian isi struktur
    cout << "Nomor Mahasiswa   : "
         << hasil.nomorMhs << endl;
    cout << "Hasil: " << endl;
    cout << "Ujian tengah semester : "
         << hasil.nilaiEvaluasi[0] << endl;
    cout << "Ujian akhir semester  : "
         << hasil.nilaiEvaluasi[1] << endl;
    cout << "Rata-rata praktikum   : "
         << hasil.nilaiEvaluasi[2] << endl;
    cout << "Tugas akhir kuliah    : "
         << hasil.nilaiEvaluasi[3] << endl;

    return 0;
}

