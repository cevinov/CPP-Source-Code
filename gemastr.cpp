// Penampilan string secara berulang
//    dengan setiap iterasi berikutnya
//    berkurang satu karakter

#include <iostream>
#include <string>

using namespace std;

int main() {
    string teks;

    cout << "Masukkan string: ";
    getline(cin, teks);

    // Proses penghitungan huruf kecil dan kapital
    for (int indeks = 0; indeks < teks.length();
        indeks++) {
        cout << teks.substr(indeks) << endl;
    }

    return 0;
}
