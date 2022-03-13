// Pemasukan data dari papan-ketik

#include <iostream>

using namespace std;

int main() {
    cout << "Pemasukan string dari papan-ketik" << endl;
    cout << "---------------------------------" << endl;

    const int MAKS_ELEMEN = 45;
    char nama[MAKS_ELEMEN];

    cout << "Nama Anda: ";
    cin.getline(nama, MAKS_ELEMEN);

    cout << "Hai, " << nama
         << ". Trims, ya!" << endl;

    return 0;
}
