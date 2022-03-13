// Contoh pembuatan kelas Tanggal

#include <iostream>

using namespace std;

class Tanggal {
    private:
       int tahun, bulan, tanggal;
    public:
       Tanggal(int tahun, int bulan, int tanggal);
       int perolehKodeHari();
       void tampilkanTanggal();
};

Tanggal::Tanggal(int tanggal, int bulan, int tahun) {
    Tanggal::tahun = tahun;
    Tanggal::bulan = bulan;
    Tanggal::tanggal = tanggal;
}

int Tanggal::perolehKodeHari() {
    // Menggunakan algoritma Zeller
    int t_tahun = tahun;
    int t_bulan = bulan;
    int t_tanggal = tanggal;

    // Ubah bulan and tahun untuk bulan = 1 and 2
    if (t_bulan == 1) {
        t_bulan = 13;
        t_tahun = t_tahun - 1;
    }

    if (t_bulan ==  2) {
        t_bulan = 14;
        t_tahun = t_tahun - 1;
    }

    // Hitung kode hari dalam satu minggu
    int tahunAbad = t_tahun % 100;
    int abad = t_tahun / 100;

    int kodeHari = (t_tanggal + (26 * (t_bulan + 1) / 10) +
                    tahunAbad +
                    tahunAbad / 4 +
                    abad / 4 + 5 * abad) % 7;

    return kodeHari;
}

void Tanggal::tampilkanTanggal() {
    static string namaHari[] = {
        "Sabtu", "Minggu", "Senin",
        "Selasa", "Rabu", "Kamis", "Jumat"
    };

    static string namaBulan[] = {
        "", "January", "Februari", "Maret", "April",
        "Mei", "Juni", "Juli", "Agustus",
        "September", "Oktober", "November", "Desember"
    };

    int kodeHari = perolehKodeHari();
    cout << namaHari[kodeHari]
         << ", " << tanggal << " "
         << namaBulan[bulan] << " "
         << tahun
         << endl;
}

int main() {
   Tanggal tglA(3, 2, 2019);
   tglA.tampilkanTanggal();

   Tanggal tglB(17, 8, 1945);
   tglB.tampilkanTanggal();

   return 0;
}
