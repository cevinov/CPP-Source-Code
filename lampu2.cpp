// Contoh tipe enumerasi
//     Versi 2

#include <iostream>

using namespace std;

enum tipeWarnaLampu {MERAH, KUNING, HIJAU};

// Prototipe fungsi
string enumKeString(tipeWarnaLampu warna);

int main() {
    cout << "Tipe enumerasi" << endl;
    cout << "==============" << endl;

    tipeWarnaLampu warnaLampu;

    warnaLampu = KUNING;
    cout << "Lampu dalam keadaan "
         << enumKeString(warnaLampu) << endl;

    warnaLampu = MERAH;
    cout << "Sekarang berubah menjadi "
         << enumKeString(warnaLampu) << endl;

    warnaLampu = HIJAU;
    cout << "Yak, sekarang menjadi "
         << enumKeString(warnaLampu) << endl;


    return 0;
}

string enumKeString(tipeWarnaLampu warna) {
    string namaWarna[] = {
        "merah", "kuning", "hijau"
    };

    return namaWarna[warna];
}
