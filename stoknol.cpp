// Daftar stok yang kosong

#include <iostream>
#include <string>

using namespace std;

int main() {
    const int JUM_BARIS = 9;
    string kodeBarang[JUM_BARIS] = {
        "TV-001", "TV-002", "TV-003",
        "RD-001", "RD-002",
        "CD-001", "CD-002", "CD-003", "CD-004"
    };

    int jumStok[JUM_BARIS] = {
        0, 5, 12, 3, 0, 8, 0, 5, 7
    };

    cout << "Daftar stok kosong:" << endl;

    for (int indeks = 0; indeks < JUM_BARIS; indeks++) {
        if (jumStok[indeks] == 0) {
            cout << kodeBarang[indeks] << endl;
        }
    }

    return 0;
}
