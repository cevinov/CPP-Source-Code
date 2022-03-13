// Penggunaan strncpy()

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Penyalinan string dengan strncpy()" << endl;
    cout << "----------------------------------" << endl;

    char teks[80];
    char daftarKota[] = "Solo Tokyo Lima";

    strncpy(teks, daftarKota, 4);
    teks[4] = '\0'; // Karakter NULL

    cout << "Isi teks: " << teks << endl;

    strncpy(teks, daftarKota + 5, 10);
    teks[10] = '\0'; // Karakter NULL

    cout << "Isi teks: " << teks << endl;


    return 0;
}
