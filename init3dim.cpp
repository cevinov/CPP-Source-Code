// Contoh inisialisasi larik berdimensi dua

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Inisialisasi larik berdimensi tiga" << endl;
    cout << "----------------------------------" << endl;

    int sel[3][4][2] = {
        {{ 1, 71}, {2, 72}, {3, 73}, {4, 74}},
        {{ 5, 75}, {6, 76}, {7, 77}, {8, 78}},
        {{ 9, 79}, {10, 80}, {11, 81}, {12, 82}}
    };

    // Penyajian data
    cout << endl;
    cout << "Data pada larik sel:" << endl;

    for (int lapis = 0; lapis < 2; lapis++) {
        cout << "Lapis ke-" << lapis + 1 << ":" << endl;
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
