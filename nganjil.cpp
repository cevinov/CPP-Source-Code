// Penyajian deret n bilangan ganjil
//    menggunakan do-while

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
    do {
        cout << 2 * hitungan - 1 << " ";

        hitungan = hitungan + 1;
    } while (hitungan <= n);

    cout << endl; // Pindah baris

    return 0;
}
