// Penentuan palindrom

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Penentuan string palindrom" << endl;
    cout << "--------------------------" << endl;

    string teks;
    string hasil;

    cout << "Masukkan string: ";
    getline(cin, teks);

    // Proses pembalikan string
    for (int j = teks.length() - 1; j >= 0; j--) {
        hasil = hasil + teks[j];
    }

    // Penentuan palindrom
    if (teks.compare(hasil) == 0)
        cout << teks << " adalah string palindrom"
             << endl;
    else
        cout << teks << " bukan string palindrom"
             << endl;

    return 0;
}
