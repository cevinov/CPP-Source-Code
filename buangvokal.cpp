// Penghapusan huruf vokal

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Penghapusan huruf vokal" << endl;
    cout << "-----------------------" << endl;

    string teks;
    string hasil;
    string strKarakter = "X";
    string strVokal = "aeiouAEIOU";

    cout << "Masukkan string: ";
    getline(cin, teks);

    // Proses penghapusan huruf vokal
    for (int j = 0; j < teks.length(); j++) {
        char kar = teks[j];
        if (strVokal.find(kar) == -1) {
            hasil = hasil + kar;
        }
    }

    cout << "hasil = " << hasil << endl;

    return 0;
}
