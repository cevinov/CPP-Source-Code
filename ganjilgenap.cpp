// Penyajian bilangan ganjil terlebih dahulu
//    dan kemudian diikuti dengan bilangan genap

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

    // Tampilkan khusus untuk bilangan ganjil
    for (int indeks = 0; indeks < JUM_DATA;
         indeks++)
        if (data[indeks] % 2 != 0)
            cout << data[indeks] << " ";

    // Tampilkan khusus untuk bilangan genap
    for (int indeks = 0; indeks < JUM_DATA;
         indeks++)
        if (data[indeks] % 2 == 0)
            cout << data[indeks] << " ";

    cout << endl;

    return(0);
}
