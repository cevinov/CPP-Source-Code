// Bitfield untuk memampatkan data jam

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    struct tipeWaktu {
        unsigned short int jam: 5;
        unsigned short int menit: 6;
        unsigned short int detik: 5;
    };

    tipeWaktu dataWaktu;
    int jam, menit, detik;

    cout << "Masukkan data jam. ";
    cout << "Misal: 14 12 42" << endl;
    cout << ": ";
    cin >> jam >> menit >> detik;

    // Penugasan ke bitfield
    dataWaktu.jam = jam;
    dataWaktu.menit = menit;
    dataWaktu.detik = detik / 2;

    cout << "Waktu: "
         << setfill('0')
         << setw(2)
         << dataWaktu.jam << ":"
         << setw(2)
         << dataWaktu.menit << ":"
         << setw(2)
         << dataWaktu.detik * 2 << endl;

    return 0;
}
