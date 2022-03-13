// Pointer yang menunjuk larik

#include <iostream>

using namespace std;

int main() {
    const int JUM_DATA = 12;
    int daftarBil[JUM_DATA] = {
        3, 78, 99, 23, 2, 7, 45, 12, 34, 51, 7, 81
    };

    int *ptrLarik;

    // Pointer menunjuk ke larik
    ptrLarik = daftarBil;  // Tidak ada &

    // Mengakses elemen larik via ptrLarik
    while (ptrLarik - daftarBil < JUM_DATA) {
        cout << *ptrLarik << endl;
        ptrLarik++;
    }

    return 0;
}

