// Perhitungan luas segitiga

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c; // Sisi a, b, dan c

    cout << "Perhitungan luas segitiga" << endl;
    cout << "-------------------------" << endl;

    cout << "Sisi pertama = ";
    cin >> a;

    cout << "Sisi kedua   = ";
    cin >> b;

    cout << "Sisi ketiga  = ";
    cin >> c;

    // Perhitungan luas segitiga
    double s = (a + b + c) / 2;
    double luas = sqrt(s * (s - a) * (s - b) * (s - c));

    // Tampilkan hasilnya
    cout << "Luas = " << luas << endl;

    return(0);
}
