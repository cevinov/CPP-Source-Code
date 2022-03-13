// Pemasukan data ke larik melalui keyboard

#include <iostream>

using namespace std;

int main() {
    cout << "Contoh pemasukan data ke larik" << endl;
    cout << "------------------------------" << endl;

    int data[5];

    // Pengisian data
    for (int indeks = 0; indeks < 5; indeks++) {
        cout << "Data ke-" << indeks + 1 << " = ";
        cin >> data[indeks];
    }

    // Penyajian data
    cout << endl;
    cout << "Data pada larik:" << endl;

    for (int indeks = 0; indeks < 5; indeks++)
        cout << data[indeks] << endl;

    return 0;
}
