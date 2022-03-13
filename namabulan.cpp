// Penyajian nama bulan

#include <iostream>

using namespace std;

int main() {
    char namaBulan[12][10] = {
        "Januari", "Februari", "Maret", "April",
        "Mei", "Juni", "Juli", "Agustus",
        "September", "Oktober", "November",
        "Desember"
    };

    int kodeBulan;

    cout << "Penentuan nama bulan" << endl;
    cout << "--------------------" << endl;

    cout << "Kode bulan (1..12): ";
    cin >> kodeBulan;

    if (kodeBulan < 1 || kodeBulan > 12)
        cout << "Kode bulan harus antara 1 dan 12"
             << endl;
    else
        cout << "Bulan " << namaBulan[kodeBulan - 1]
             << endl;

    return 0;
}
