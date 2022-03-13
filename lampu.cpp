// Contoh tipe enumerasi

#include <iostream>

using namespace std;

int main() {
    cout << "Tipe enumerasi" << endl;
    cout << "==============" << endl;

    enum tipeWarnaLampu {MERAH, KUNING, HIJAU};

    tipeWarnaLampu warnaLampu;

    warnaLampu = KUNING;
    cout << "Lampu dalam keadaan "
         << warnaLampu << endl;

    warnaLampu = MERAH;
    cout << "Sekarang berubah menjadi "
         << warnaLampu << endl;

    warnaLampu = HIJAU;
    cout << "Yak, sekarang menjadi "
         << warnaLampu << endl;

    return 0;
}
