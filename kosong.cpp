// Pemeriksaan string kosong

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Pemeriksaan string kosong" << endl;
    cout << "-------------------------" << endl;

    string teks;

    cout << "Kosongkah? " << teks.empty() << endl;

    teks = "ABC";
    cout << "Kosongkah? " << teks.empty() << endl;

    teks.clear();
    cout << "Kosongkah? " << teks.empty() << endl;

    return 0;
}
