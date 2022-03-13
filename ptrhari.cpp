// Nilai balik berupa pointer

#include <iostream>

using namespace std;

char* namaHari(int kodeHari);

int main() {
    cout << "Kode hari 0 -> " << namaHari(0)
         << endl;
    cout << "Kode hari 2 -> " << namaHari(2)
         << endl;
    cout << "Kode hari 8 -> " << namaHari(8)
         << endl;

    return 0;
}

char* namaHari(int kodeHari) {
    static char hari[8][20] = {
        "Minggu",
        "Senin",
        "Selasa",
        "Rabu",
        "Kamis",
        "Jumat",
        "Sabtu",
        "Kode hari salah"
    };

    char* ptr;

    if (kodeHari >= 0 && kodeHari <= 6)
        ptr = hari[kodeHari];
    else
        ptr = hari[7];

    return ptr;
}
