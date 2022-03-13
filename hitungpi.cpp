// Perhitungan nilai phi

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;

    cout << "Perhitungan nilai phi" << endl;
    cout << "---------------------" << endl;

    cout << "n = ";
    cin >> n;

    double jumlah = 1;

    for (int suku = 2; suku <= n; suku++) {
        jumlah = jumlah + 1.0 / (suku * suku);
    }

    double phi = sqrt(6 * jumlah);

    cout << "Phi = " << phi << endl;

    return(0);
}
