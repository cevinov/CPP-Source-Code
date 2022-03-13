// Contoh pembuatan kelas Segitiga

#include <iostream>
#include <cmath>

using namespace std;

class Segitiga {
    private:
       double sisiA, sisiB, sisiC;
    public:
       Segitiga(double sisi1, double sisi2,
                double sisi3);
       Segitiga(int x1, int y1, int x2, int y2,
                int x3, int y3);
       double perolehLuas();
       double perolehKeliling();
};

Segitiga::Segitiga(double sisi1, double sisi2,
                   double sisi3) {
    sisiA = sisi1;
    sisiB = sisi2;
    sisiC = sisi3;
}

Segitiga::Segitiga(int x1, int y1, int x2, int y2,
                   int x3, int y3) {
    sisiA = sqrt( (x1 - x2) * (x1 - x2) +
                  (y1 - y2) * (y1 - y2) );

    sisiB = sqrt( (x2 - x3) * (x2 - x3) +
                  (y2 - y3) * (y2 - y3) );

    sisiC = sqrt( (x1 - x3) * (x1 - x3) +
                  (y1 - y3) * (y1 - y3) );
}

double Segitiga::perolehLuas() {
    double s = (sisiA + sisiB + sisiC) / 2;
    double luas = sqrt(s * (s - sisiA) *
                       (s - sisiB) * (s - sisiC));

    return luas;
}

double Segitiga::perolehKeliling() {
    return sisiA + sisiB + sisiC;
}

int main() {
   Segitiga segitigaX(50, 40, 30);
   cout << "Segitiga segitigaX(50, 40, 30)" << endl;
   cout << "Luas     = " << segitigaX.perolehLuas()
        << endl;
   cout << "Keliling = " << segitigaX.perolehKeliling()
        << endl;

   Segitiga segitigaY(0, 40, 0, 0, 30, 0);
   cout << endl;
   cout << "Segitiga segitigaY(0, 40, 0, 0, 30, 0)"
        << endl;
   cout << "Luas     = " << segitigaY.perolehLuas()
        << endl;
   cout << "Keliling = " << segitigaY.perolehKeliling()
        << endl;


   return 0;
}
