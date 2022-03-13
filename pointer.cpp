#include <iostream>

using namespace std;

int main() {
    int *ptrBilangan;
    int bilangan = 1001;

    // Penugasan pointer
    ptrBilangan = &bilangan;

    // Penyajian isi bilangan via ptrBilangan
    cout << "*ptrBilangan = "
         << *ptrBilangan << endl;

    // Pengubahan isi bilangan via ptrBilangan
    *ptrBilangan = 77;
    cout << "Isi bilangan diubah via ptrBilangan"
         << endl;

    cout << "Isi bilangan sekarang = "
         << bilangan << endl;

    return 0;
}
