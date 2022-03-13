// Nilai rata-rata 10 data

#include <iostream>

using namespace std;

int main() {
    const int JUM_DATA = 10;
    int data[JUM_DATA];

    cout << "Masukkan 10 data bilangan bulat"
         << endl;

    int total = 0;
    for (int indeks = 0; indeks < JUM_DATA;
         indeks++) {
        cin >> data[indeks];
        total += data[indeks];
    }

    float rerata = total / 10.0;
    cout << "Rata-rata = " << rerata << endl;

    // Tampilkan semua nilai di atas rata-rata
    cout << endl;
    cout << "Daftar nilai di atas rata-rata"
         << endl;

    for (int indeks = 0; indeks < JUM_DATA;
         indeks++)
        if (data[indeks] > rerata)
            cout << data[indeks] << endl;

    return(0);
}
