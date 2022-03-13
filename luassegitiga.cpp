// Perhitungan luas segitiga
//     dengan ketiga titik segitiga diketahui

#include <iostream>
#include <cmath>

using namespace std;

double hitungSisi(int x1, int y1, int x2, int y2);

int main() {
    double sisi1, sisi2, sisi3;
    int x1, y1, x2, y2, x3, y3;

    cout << "Perhitungan luas segitiga" << endl;
    cout << "-------------------------" << endl;

    cout << "Koordinat titik pertama = " << endl;
    cout << "X1 = ";
    cin >> x1;
    cout << "Y1 = ";
    cin >> y1;

    cout << "Koordinat titik kedua = " << endl;
    cout << "X2 = ";
    cin >> x2;
    cout << "Y2 = ";
    cin >> y2;

    cout << "Koordinat titik ketiga = " << endl;
    cout << "X3 = ";
    cin >> x3;
    cout << "Y3 = ";
    cin >> y3;

    // Perhitungan luas segitiga
    sisi1 = hitungSisi(x1, y1, x2, y2);
    sisi2 = hitungSisi(x2, y2, x3, y3);
    sisi3 = hitungSisi(x1, y1, x3, y3);

    double s = (sisi1 + sisi2 + sisi3) / 2;
    double luas = sqrt(s * (s - sisi1) *
                           (s - sisi2) * (s - sisi3));

    // Tampilkan hasilnya
    cout << "Luas = " << luas << endl;

    return(0);
}

double hitungSisi(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) +
                (y1 - y2) * (y1 - y2));
}
