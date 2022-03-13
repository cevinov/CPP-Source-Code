// Penyajian deret n bilangan ganjil
//    menggunakan while

#include <iostream>

using namespace std;

int main() {
    int hitungan;
    int n;

    cout << "Deret N bilangan ganjil" << endl;
    cout << "=======================" << endl;

    cout << "N = ";
    cin >> n;

    hitungan = 1;
    while (hitungan <= n) {
        cout << 2 * hitungan - 1 << " ";

        hitungan = hitungan + 1;
    }

    cout << endl; // Pindah baris

    return 0;
}
