// Contoh larik berdimensi tiga

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Contoh larik berdimensi tiga" << endl;
    cout << "----------------------------" << endl;

    int sel[3][4][2];

    // Pengisian data baris pertama lapis pertama
    sel[0][0][0] = 1;
    sel[0][1][0] = 2;
    sel[0][2][0] = 3;
    sel[0][3][0] = 4;

    // Pengisian data baris kedua lapis pertama
    sel[1][0][0] = 5;
    sel[1][1][0] = 6;
    sel[1][2][0] = 7;
    sel[1][3][0] = 8;

    // Pengisian data baris ketiga lapis pertama
    sel[2][0][0] = 9;
    sel[2][1][0] = 10;
    sel[2][2][0] = 11;
    sel[2][3][0] = 12;

    // Pengisian data baris pertama lapis kedua
    sel[0][0][1] = 71;
    sel[0][1][1] = 72;
    sel[0][2][1] = 73;
    sel[0][3][1] = 74;

    // Pengisian data baris kedua lapis kedua
    sel[1][0][1] = 75;
    sel[1][1][1] = 76;
    sel[1][2][1] = 77;
    sel[1][3][1] = 78;

    // Pengisian data baris ketiga lapis kedua
    sel[2][0][1] = 79;
    sel[2][1][1] = 80;
    sel[2][2][1] = 81;
    sel[2][3][1] = 82;

    // Penyajian data
    cout << endl;
    cout << "Data pada larik sel:"
         << endl;

    for (int lapis = 0; lapis < 2; lapis++) {
        cout << "Lapis ke-" << lapis + 1 << ":"
             << endl;
        for (int baris = 0; baris < 3; baris++) {
            for (int kolom = 0; kolom < 4; kolom++)
                cout << setw(4)
                     << sel[baris][kolom][lapis];

            cout << endl; // Pindah baris
        }

        cout << endl; // Pindah baris
    }

    return 0;
}
