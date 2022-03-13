// Contoh penggunaan pointer

#include <iostream>

using namespace std;

int main() {
    void *ptrVoid;
    int bilangan = 1001;
    float pi = 3.14;

    // Penugasan pointer untuk menunjuk bilangan
    ptrVoid = &bilangan;

    // Penyajian isi vartiabel bilangan
    cout << "*ptrVoid = " << *(int *)ptrVoid
         << endl;

    // Penugasan pointer untuk menunjuk pi
    ptrVoid = &pi;

    // Penyajian isi vartiabel bilangan
    cout << "*ptrVoid = " << *(float *)ptrVoid
         << endl;
    return 0;
}
