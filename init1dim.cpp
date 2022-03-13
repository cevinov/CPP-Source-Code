// Inisialisasi larik berdimensi satu

#include <iostream>

using namespace std;

int main() {
    cout << "Inisialisasi larik berdimensi satu" << endl;
    cout << "----------------------------------" << endl;

    int data[5] = {50, 77, 30, 1, 22};

    // Penyajian data
    cout << endl;
    cout << "Data pada larik:" << endl;

    for (int indeks = 0; indeks < 5; indeks++)
        cout << data[indeks] << endl;

    return 0;
}
