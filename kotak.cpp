// Contoh pembuatan kotak

#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Pembuatan kotak" << endl;
    cout << "---------------" << endl;

    cout << "n (lebih besar daripada 2) = ";
    cin >> n;

    // Tampilkan 2 n simbol *
    for (int kolom = 1; kolom <= 2 * n; kolom++)
        cout << "*";

    cout << endl; // Pindah baris

    // Tampilkan satu simbol *
    //    diikuti dengan sejumlah spasi
    //    dan satu simbol *
    for (int indeks = 1; indeks <= n - 2; indeks++) {
        cout << "*";

        for (int kolom = 1; kolom < 2 * n - 1; kolom++)
            cout << " "; // Karakter spasi

        cout << "*" << endl;
    }

    // Tampilkan 2 n simbol *
    for (int kolom = 1; kolom <= 2 * n; kolom++)
        cout << "*";

    cout << endl; // Pindah baris

    return(0);
}
