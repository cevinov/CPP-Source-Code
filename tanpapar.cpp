// Contoh fungsi tanpa parameter dan
//     tanpa nilai balik

#include <iostream>

using namespace std;

void tampilkanPemisah() {
    for (int j = 0; j < 20; j++)
        cout << "=";

    cout << endl; // Pindah baris
}

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
