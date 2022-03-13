// Penyajian deret n bilangan ganjil
//    menggunakan for
//    Versi 2

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Deret N bilangan ganjil" << endl;
    cout << "=======================" << endl;

    cout << "N = ";
    cin >> n;

    for (int bilangan = 1; bilangan <= 2 * n - 1; bilangan += 2)
        cout << bilangan << " ";

    cout << endl; // Pindah baris

    return 0;
}
