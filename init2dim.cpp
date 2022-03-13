// Contoh inisialisasi larik berdimensi dua

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Inisialisasi larik berdimensi dua" << endl;
    cout << "---------------------------------" << endl;

    int matriks[3][4] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 }
    };

    // Penyajian data
    cout << endl;
    cout << "Data pada matriks:" << endl;

    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 4; kolom++)
            cout << setw(4) << matriks[baris][kolom];

        cout << endl; // Pindah baris
    }

    return 0;
}
