// Perhitungan cacah bilangan ganjil dari
//    10 bilangan bulat yang dihasilkan
//    secara acak

#include <iostream>
#include <cstdlib>   // Diperlukan oleh srand()
#include <ctime>     // Diperlukan oleh time()

using namespace std;

int main() {
    const int JUM_DATA = 10;
    int data[JUM_DATA];

    // Buat 10 bilangan acak antara 0 dan 100
    srand(time(NULL));

    for (int indeks = 0; indeks < JUM_DATA;
         indeks++)
        data[indeks] = rand() % (100 + 1);

    // Hitung cacah bilangan ganjil pada larik
    int cacah = 0;
    for (int indeks = 0; indeks < JUM_DATA;
         indeks++)
        if (data[indeks] % 2 == 1)
            cacah++;

    // Tampilkan larik dan cacah bilangan ganjil
    cout << "Daftar nilai acak: "
         << endl;

    for (int indeks = 0; indeks < JUM_DATA;
         indeks++)
        cout << data[indeks] << " ";

    cout << endl;
    cout << "Cacah bilangan ganjil = "
         << cacah << endl;

    return(0);
}
