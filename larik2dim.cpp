// Contoh larik berdimensi dua

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Contoh larik berdimensi dua" << endl;
    cout << "---------------------------" << endl;

    int matriks[3][4];

    // Pengisian data baris pertama
    matriks[0][0] = 1;
    matriks[0][1] = 2;
    matriks[0][2] = 3;
    matriks[0][3] = 4;

    // Pengisian data baris kedua
    matriks[1][0] = 5;
    matriks[1][1] = 6;
    matriks[1][2] = 7;
    matriks[1][3] = 8;

    // Pengisian data baris ketiga
    matriks[2][0] = 9;
    matriks[2][1] = 10;
    matriks[2][2] = 11;
    matriks[2][3] = 12;

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
