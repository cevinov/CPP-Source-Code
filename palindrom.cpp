// Penentuan palindrom

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Penentuan string palindrom" << endl;
    cout << "--------------------------" << endl;

    const int MAKS_KARAKTER = 254;

    char teks[MAKS_KARAKTER + 1];
    char hasil[MAKS_KARAKTER + 1] = "";

    char strKarakter[2] = "X";

    cout << "Masukkan string: ";
    cin.getline(teks, MAKS_KARAKTER + 1);

    // Proses pembalikan string
    for (int j = strlen(teks) - 1; j >= 0; j--) {
        strKarakter[0] = teks[j];
        strcat(hasil, strKarakter);
    }

    // Penentuan palindrom
    if (strcmp(teks, hasil) == 0)
        cout << teks << " adalah string palindrom"
             << endl;
    else
        cout << teks << " bukan string palindrom"
             << endl;

    return 0;
}
