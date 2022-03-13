// Inisialisi larik berdimensi satu

#include <iostream>

using namespace std;

int main() {
    cout << "Inisialisasi larik berdimensi satu" << endl;
    cout << "----------------------------------" << endl;

    int data[5] = {50, 77, 30, 1, 22};
    int fokusPerhatian = 45;

    cout << "Isi fokusPerhatian mula-mula = "
         << fokusPerhatian << endl;

    // Pengubahan yang salah indeks
    data[5] = 61;

    cout << "Isi fokusPerhatian sekarang  = "
         << fokusPerhatian << endl;

    return 0;
}
