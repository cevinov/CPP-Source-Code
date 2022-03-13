// Penghitungan huruf

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Penghitungan huruf" << endl;
    cout << "------------------" << endl;

    const int MAKS_KARAKTER = 254;
    char teks[MAKS_KARAKTER + 1];

    cout << "Masukkan string: ";
    cin.getline(teks, MAKS_KARAKTER + 1);

    int jumHurufKapital = 0;
    int jumHurufKecil = 0;

    // Proses penghitungan huruf kecil dan kapital
    for (int j = 0; j < strlen(teks); j++) {
        char kar = teks[j];
        if (isupper(kar))
            jumHurufKapital++;
        else
            if (islower(kar))
                jumHurufKecil++;
    }

    cout << "Jumlah huruf kapital = "
         << jumHurufKapital << endl;

    cout << "Jumlah huruf kecil = "
         << jumHurufKecil << endl;

    return 0;
}
