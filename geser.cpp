// Penggeseran nilai dalam larik

#include <iostream>

using namespace std;

int main() {
    const int JUM_DATA = 10;
    int data[JUM_DATA];

    // Baca sepuluh data integer
    cout << "Masukkan 10 data bilangan bulat:"
         << endl;

    for (int indeks = 0; indeks < JUM_DATA;
         indeks++)
        cin >> data[indeks];

    // Proses untuk menggeser data
    int sementara = data[JUM_DATA - 1];
    for (int indeks = JUM_DATA - 2; indeks >= 0;
         indeks--)
        data[indeks + 1] = data[indeks];

    data[0] = sementara;

    // Tampilkan isi larik
    for (int indeks = 0; indeks < JUM_DATA;
         indeks++)
        cout << data[indeks] << " ";

    cout << endl;

    return(0);
}
