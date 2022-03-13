// Fungsi untuk membentuk segitiga angka

#include <iostream>

using namespace std;

// Prototipe fungsi
void segitiga(int n);

int main() {
    int n;
    cout << "Masukkan angka antara 2 dan 9: ";
    cin >> n;

    segitiga(n);

    return(0);
}

void segitiga(int n) {
    if (n < 2 || n > 9) {
        cout << "Angka harus antara 2 dan 9"
             << endl;
        return;
    }

    for (int baris = 1; baris < 2 * n; baris++) {
        int jumAngka;
        if (baris <= n)
            jumAngka = baris;
        else
            jumAngka = 2 * n - baris;

        for (int j = 0; j < jumAngka; j++)
            cout << n;

        cout << endl;
    }
}
