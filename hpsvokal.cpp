// Penghausan huruf vokal

#include <iostream>
#include <cstring>

using namespace std;

int main() {

    const int MAKS_KARAKTER = 254;
    char teks[MAKS_KARAKTER + 1];
    char hasil[MAKS_KARAKTER + 1] = "";
    char strKarakter[2] = "X";

    cout << "Masukkan string: ";
    cin.getline(teks, MAKS_KARAKTER + 1);

    // Proses penghapusan huruf vokal
    for (int j = 0; j < strlen(teks); j++) {
        char kar = teks[j];
        if (!strchr("aeiouAEIOU", kar)) {
            strKarakter[0] = kar;
            strcat(hasil, strKarakter);
        }
    }

    cout << "hasil = " << hasil << endl;

    return 0;
}
