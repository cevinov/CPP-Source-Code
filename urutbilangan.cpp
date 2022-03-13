// Contoh pengurutan data bilangan

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Pengurutan data bilangan"
         << endl;
    cout << "------------------------"
         << endl;

    const int JUM_BILANGAN = 10;
    int daftarBil[JUM_BILANGAN];

    // Pemasukan data
    cout << "Masukkan 10 bilangan bulat:" << endl;
    for (int i = 0; i < JUM_BILANGAN; i++)
        cin >> daftarBil[i];

    // Pengurutan data
    int sementara;
    for (int i = 0; i < JUM_BILANGAN - 1; i++)
        for (int j = i + 1; j < JUM_BILANGAN; j++)
            if (daftarBil[i] > daftarBil[j]) {
                // Penukaran dua data
                sementara = daftarBil[i];
                daftarBil[i] = daftarBil[j];
                daftarBil[j] = sementara;
            }

    // Penampilan hasil pengurutan
    for (int i = 0; i < JUM_BILANGAN; i++)
        cout << daftarBil[i] << " ";

    cout << endl;

    return 0;
}
