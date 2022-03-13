// Perhitungan akar menggunakan metode biseksi

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double bilangan;

    cout << "Penentuan akar bilangan"
         << endl;
    cout << "Bilangan = ";
    cin >> bilangan;

    double a = 1;
    double b = bilangan;
    const double EPSILON = 1e-10;
    while (b - a > EPSILON) {
        double x = (a + b) / 2;
        if (x * x > bilangan)
            b = x;
        else
            a = x;
    }

    double akar = a;
    cout << "Akar " << bilangan
         << " = " << akar << endl;
    cout << "sqrt(" << bilangan
         << ") = " << sqrt(bilangan) << endl;


    return(0);
}
