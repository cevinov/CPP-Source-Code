// Larik pointer

#include <iostream>
#include <string>

using namespace std;

int main() {
    const int JUM_ORANG = 5;
    string daftarNama[JUM_ORANG] = {
        "Cintya Bela", "Bastian Prakosa",
        "Anum Pradana", "Endah Widyasari",
        "Dian Hardianto"
    };

    // Tampilkan daftarNama
    cout << "Urutan semula:" << endl;

    for (int j = 0; j < JUM_ORANG; j++)
        cout << daftarNama[j] << endl;

    // Larik pointer
    string *ptrNama[JUM_ORANG];

    // Penugasan ke larik pointer
    ptrNama[0] = &daftarNama[2];
    ptrNama[1] = &daftarNama[1];
    ptrNama[2] = &daftarNama[0];
    ptrNama[3] = &daftarNama[4];
    ptrNama[4] = &daftarNama[3];

    // Tampilkan data nama melalui pointer
    cout << endl;
    cout << "Urutan melalui larik pointer:" << endl;

    for (int j = 0; j < JUM_ORANG; j++)
        cout << *ptrNama[j] << endl;

    return 0;
}

