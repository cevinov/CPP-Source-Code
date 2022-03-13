// Perhitungan jumlah digit

#include <iostream>

using namespace std;

int main() {
    int bilangan;

    cout << "Perhitungan jumlah digit" << endl;
    cout << "------------------------" << endl;

    cout << "Bilangan = ";
    cin >> bilangan;

    int jumDigit = 0;

    do {
        jumDigit++;

        bilangan = bilangan / 10;
    } while (bilangan != 0);

    cout << "Jumlah digit = " << jumDigit << endl;

    return 0;
}
