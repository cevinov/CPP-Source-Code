// Perhitungan jarak antara dua titik

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "Jarak antara dua titik" << endl;
    cout << "----------------------" << endl;

    cout << "X1 = ";
    cin >> x1;

    cout << "Y1 = ";
    cin >> y1;

    cout << "X2 = ";
    cin >> x2;

    cout << "Y2 = ";
    cin >> y2;

    // Perhitungan jarak
    double jarak = sqrt((x2 - x1) * (x2 - x1) +
                        (y2 - y1) * (y2 - y1));

    // Tampilkan hasilnya
    cout << "Jarak = " << jarak << endl;

    return(0);
}
