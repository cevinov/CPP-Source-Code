// Pointer yang menunjuk string-C

#include <iostream>

using namespace std;

int main() {
    char teks[] = "Sukses selalu!";

    char *ptrString;

    // Pointer menunjuk ke string
    ptrString = teks;  // Tidak ada &

    // Mengakses elemen larik via ptrString
    while (*ptrString) {
        cout << *ptrString << endl;
        ptrString++;
    }

    // Akses langsung via cout
    ptrString = teks; // Atur kembali agar ptrString
                      //     menunjuk teks
    cout << ptrString << endl;
    return 0;
}

