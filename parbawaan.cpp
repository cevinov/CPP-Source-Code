// Contoh parameter bawaan

#include <iostream>
#include <string>

using namespace std;

void pemisahBaris(string pemisah = "=", int n = 10);

int main() {
    cout << "Hasil pemisahBaris():" << endl;
    pemisahBaris();

    cout << "Hasil pemisahBaris(\"*\"):" << endl;
    pemisahBaris("*");

    cout << "Hasil pemisahBaris(\"*--\", 10):" << endl;
    pemisahBaris("*--", 10);

    return 0;
}

void pemisahBaris(string pemisah, int n) {

    for (int j = 0; j < n; j++)
        cout << pemisah;

    cout << endl; // Pindah baris
}
