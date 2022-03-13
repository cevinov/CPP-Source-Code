// Pointer yang menunjuk pointer

#include <iostream>
#include <string>

using namespace std;

int main() {
    string teks = "Alpha";

    string *ptrB;
    string **ptrA;

    // Pengaturan untaian
    ptrB = &teks;
    ptrA = &ptrB;

    // Pengaksesan string via pointer
    cout << "*ptrB = " << *ptrB << endl;
    cout << "**ptrA = " << *(*ptrA) << endl;

    // Pengubahan string via ptrA
    **ptrA = "Bravo";
    cout << "Isi teks diubah via ptrA" << endl;

    cout << "Isi teks sekarang = " << teks
         << endl;

    return 0;
}

