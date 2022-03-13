// Perhitungan angsuran

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double pokok, bungaPerTahun;
    int tempoDalamBulan;

    cout << "Perhitungan angsuran model flat" << endl;
    cout << "-------------------------------" << endl;

    cout << "Pokok pinjaman      = ";
    cin >> pokok;

    cout << "bunga per tahun (%) = ";
    cin >> bungaPerTahun;

    cout << "Tempo bulan         = ";
    cin >> tempoDalamBulan;

    // Perhitungan angsuran
    double angsuran = pokok * (1.0 / tempoDalamBulan +
                               bungaPerTahun / 1200);
    // Tampilkan hasilnya
    cout << "Angsuran per bulan = " << angsuran << endl;

    return(0);
}
