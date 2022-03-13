// Pemasukan data ke matriks melalui keyboard

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Contoh pemasukan data ke matriks" << endl;
    cout << "--------------------------------" << endl;

    int matriks[3][4];

    // Pengisian data
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 4; kolom++) {
           cout << "Data baris ke-" << baris + 1
                << ", kolom ke-" << kolom + 1
                << " = ";
           cin >> matriks[baris][kolom];
        }
    }

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
