// Contoh pembuatan piramida terbalik

#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Pembuatan piramida terbalik" << endl;
    cout << "---------------------------" << endl;

    cout << "n = ";
    cin >> n;

    for (int baris = 1; baris <= n; baris++) {
        // Tampilkan karakter spasi
        for (int kolom = 1; kolom <= baris - 1; kolom++)
            cout << " "; // Karakter spasi

        // Tampilkan *
        for (int indeks = 1; indeks <= 2 * (n - baris) + 1; indeks++)
            cout << "*"; // Simbol *

        cout << endl;
    }

    return(0);
}



