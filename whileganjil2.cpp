// Penyajian deret n bilangan ganjil
//    menggunakan while
//    Versi 2

#include <iostream>

using namespace std;

int main() {
    int bilangan;
    int n;

    cout << "Deret N bilangan ganjil" << endl;
    cout << "=======================" << endl;

    cout << "N = ";
    cin >> n;

    bilangan = 1;
    while (bilangan <= 2 * n - 1) {
        cout << bilangan << " ";

        bilangan = bilangan + 2;
    }

    cout << endl; // Pindah baris

    return 0;
}
