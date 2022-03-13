// Fungsi untuk memperoleh nama bulan

#include <iostream>

using namespace std;

// Prototipe fungsi
string namaBulan(int kodeBulan);

int main() {
    cout << namaBulan(1) << endl;
    cout << namaBulan(2) << endl;
    cout << namaBulan(12) << endl;
    cout << namaBulan(13) << endl;

    return(0);
}

string namaBulan(int kodeBulan) {
    string daftarBulan[] = {
        "Kode bulan tidak valid",
        "Januari",
        "Februari",
        "Maret",
        "April",
        "Mei",
        "Juni",
        "Juli",
        "Agustus",
        "September",
        "Oktober",
        "November",
        "Desember"
    };

    if (kodeBulan >= 1 && kodeBulan <= 12)
        return daftarBulan[kodeBulan];
    else
        return daftarBulan[0];
}
