// Penampilan string secara berulang
//    dengan setiap iterasi berikutnya
//    berkurang satu karakter

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int MAKS_KARAKTER = 254;
    char teks[MAKS_KARAKTER + 1];

    cout << "Masukkan string: ";
    cin.getline(teks, MAKS_KARAKTER + 1);

    // Proses penghitungan huruf kecil dan kapital
    for (int indeks = 0; indeks < strlen(teks);
        indeks++) {
        cout << teks + indeks << endl;
    }

    return 0;
}
