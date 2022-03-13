// Jarak dua posisi di bumi

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double RADIAN = 0.017453277; // pi / 180
    const double RBUMI  = 6371.0;     // KM

    double lintang1, bujur1, lintang2, bujur2;

    cout << "Perhitungan jarak di bumi" << endl;
    cout << "-------------------------" << endl;

    cout << "Lintang 1 = ";
    cin >> lintang1;

    cout << "Bujur 1   = ";
    cin >> bujur1;

    cout << "Lintang 2 = ";
    cin >> lintang2;

    cout << "Bujur 2   = ";
    cin >> bujur2;

    // Ubah ke radian
    lintang1 *= RADIAN;
    lintang2 *= RADIAN;

    bujur1 *= RADIAN;
    bujur2 *= RADIAN;

    // Hitung jarak dua posisi
    double jarak = RBUMI *
        acos((sin(lintang1) * sin(lintang2)) +
        (cos(lintang1) * cos(lintang2)*
        cos(bujur1 - bujur2)));

    // Tampilkan hasilnya
    cout << "Jarak dalam KM = " << jarak << endl;

    return(0);
}
