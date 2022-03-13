// Pembalikan string

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Pembalikan string" << endl;
    cout << "-----------------" << endl;

    string teks;
    string hasil;

    cout << "Masukkan string: ";
    getline(cin, teks);

    // Proses pembalikan string
    for (int j = teks.length() - 1; j >= 0; j--) {
        hasil = hasil + teks[j];
    }

    cout << "hasil = " << hasil << endl;

    return 0;
}
