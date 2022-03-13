// Penyalinan string dengan strcpy()
//    yang melibatkan ofset

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Penyalinan string dengan ofset" << endl;
    cout << "------------------------------" << endl;

    char teks[15];
    char kota[] = "pemalang";

    strcpy(teks, kota);
    cout << "Isi teks: " << teks << endl;

    strcpy(teks, kota + 2);
    cout << "Isi teks: " << teks << endl;

    return 0;
}
