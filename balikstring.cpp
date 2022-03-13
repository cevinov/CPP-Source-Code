// Pembalikan string

#include <iostream>
#include <cstring>

using namespace std;

void balikString(char *str);

int main() {
    cout << "Pembalikan string" << endl;
    cout << "-----------------" << endl;

    const int MAKS_KARAKTER = 254;

    char teks[MAKS_KARAKTER + 1];

    cout << "Masukkan string: ";
    cin.getline(teks, MAKS_KARAKTER + 1);

    balikString(teks);

    cout << "Kebalikannya: " << teks << endl;

    return 0;
}

void balikString(char *str) {
    char tmp;
    int panjangStr = strlen(str);
    int indeks;

    // Proses pembalikan string
    for (int j = 0; j < panjangStr / 2; j++) {
        indeks = panjangStr - 1 - j;

        // Penukaran karakter di dua posisi
        tmp = str[indeks];
        str[indeks] = str[j];
        str[j] = tmp;
    }
}
