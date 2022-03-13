// Penghilangan duplikasi data

#include <iostream>

using namespace std;

int main() {
    cout << "Penghilangan duplikasi data"
         << endl;
    cout << "---------------------------"
         << endl;

    const int JUM_BILANGAN = 10;
    int daftarBil[JUM_BILANGAN];
    int daftarUnik[JUM_BILANGAN];

    // Pemasukan data
    cout << "Masukkan 10 bilangan bulat:" << endl;
    for (int i = 0; i < JUM_BILANGAN; i++)
        cin >> daftarBil[i];

    // Penghilangan data yang kembar
    int jumTidakKembar = 0;
    for (int i = 0; i < JUM_BILANGAN; i++) {
        int posisi = -1;
        for (int j = 0; j < jumTidakKembar; j++) {
            if (daftarBil[i] == daftarUnik[j]) {
                posisi = j;
                break;
            }
        }
        if (posisi == -1) {
            daftarUnik[jumTidakKembar] = daftarBil[i];
            jumTidakKembar++;
        }
    }

    // Penampilan hasil tanpa duplikasi
    cout << "Hasil: ";
    for (int i = 0; i < jumTidakKembar; i++)
        cout << daftarUnik[i] << " ";

    cout << endl;

    return 0;
}
