// Contoh larik berdimensi satu

#include <iostream>

using namespace std;

int main() {
    cout << "Contoh larik berdimensi satu" << endl;
    cout << "----------------------------" << endl;

    int data[5];

    // Pengisian data
    data[0] = 50;
    data[1] = 77;
    data[2] = 30;
    data[3] = 1;
    data[4] = 22;

    // Penyajian data
    cout << endl;
    cout << "Data pada larik:" << endl;

    for (int indeks = 0; indeks < 5; indeks++)
        cout << data[indeks] << endl;

    return 0;
}
