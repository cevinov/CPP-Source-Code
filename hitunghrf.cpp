// Penghitungan huruf

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Penghitungan huruf" << endl;
    cout << "------------------" << endl;

    string teks;

    cout << "Masukkan string: ";
    getline(cin, teks);

    int jumHurufKapital = 0;
    int jumHurufKecil = 0;

    // Proses penghitungan huruf kecil dan kapital
    for (int j = 0; j < teks.length(); j++) {
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
