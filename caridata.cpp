// Contoh pencarian data

#include <iostream>

using namespace std;

int main() {

    const int JUM_DATA = 10;
    int data[JUM_DATA] = {
        77, 48, 2, 23, 33, 45, 56, 0, 86, 71
    };

    int dicari;
    cout << "Pencarian data" << endl;
    cout << "==============" << endl;
    cout << "Data yang dicari: ";
    cin >> dicari;

    // Pencarian data
    int posisi = -1;
    for (int indeks = 0; indeks < JUM_DATA;
         indeks++) {
        if (data[indeks] == dicari) {
            posisi = indeks;
            break;
        }
    }

    // Penyajian informasi
    if (posisi == -1)
        cout << "Data tidak ditemukan" << endl;
    else
        cout << "Data ditemukan. Posisi pada indeks "
             << posisi << endl;

    return(0);
}
