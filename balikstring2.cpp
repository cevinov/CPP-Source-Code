// Pembalikan string - Versi 2

#include <iostream>
#include <cstring>

using namespace std;

const int MAKS_KARAKTER = 254;

char* balikString(char *str);

int main() {
    cout << "Pembalikan string" << endl;
    cout << "-----------------" << endl;

    char teks[MAKS_KARAKTER + 1];

    cout << "Masukkan string: ";
    cin.getline(teks, MAKS_KARAKTER + 1);

    cout << "Kebalikannya: "
         << balikString(teks) << endl;

    return 0;
}

char * balikString(char *str) {
    static char hasil[MAKS_KARAKTER + 1];

    strcpy(hasil, str); // Salin string

    char tmp;
    int panjangStr = strlen(hasil);
    int indeks;

    // Proses pembalikan string
    for (int j = 0; j < panjangStr / 2; j++) {
        indeks = panjangStr - 1 - j;

        // Penukaran karakter di dua posisi
        tmp = hasil[indeks];
        hasil[indeks] = hasil[j];
        hasil[j] = tmp;
    }

    return hasil;
}
