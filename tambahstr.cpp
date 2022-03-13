// Penanmbahan string pada akhir string lainnya

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Penambahan string" << endl;
    cout << "-----------------" << endl;

    char teks[80];
    char daftarKota[] = "Solo Tokyo Lima";

    strcpy(teks, "Paris "); // Salin string
    cout << "Isi teks semula: " << teks << endl;

    strcat(teks, daftarKota);
    cout << "Hasil strcat() : " << teks << endl;

    strcpy(teks, "Paris "); // Salin string
    strncat(teks, daftarKota, 10);
    cout << "Hasil strncat(): " << teks << endl;

    return 0;
}
