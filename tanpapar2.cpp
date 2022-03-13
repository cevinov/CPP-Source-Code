// Contoh fungsi tanpa parameter dan
//     tanpa nilai balik
//     Versi 2

#include <iostream>

using namespace std;

void tampilkanPemisah();

int main() {
    tampilkanPemisah();

    cout << "Ayam" << endl << "Itik" << endl
         << "Kambing" << endl;

    tampilkanPemisah();

    cout << "Televisi" << endl << "Radio" << endl
         << "Kipas Angin" << endl;

    tampilkanPemisah();

    return 0;
}

void tampilkanPemisah() {
    for (int j = 0; j < 20; j++)
        cout << "=";

    cout << endl; // Pindah baris
}
