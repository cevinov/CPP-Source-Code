// Penguraian karakter pada string
//     menggunakan fungsi anggota at()

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Penguraian karakter pada string" << endl;
    cout << "-------------------------------" << endl;

    string bunga = "Mawar"; // Inisialisasi string

    for (int indeks = 0; indeks < bunga.length();
        indeks++)
        cout << bunga.at(indeks) << endl;

    return 0;
}
