// Penyajian deret n bilangan ganjil
//    menggunakan for

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Deret N bilangan ganjil" << endl;
    cout << "=======================" << endl;

    cout << "N = ";
    cin >> n;

    for (int hitungan = 1; hitungan <= n; hitungan++)
        cout << 2 * hitungan - 1 << " ";

    cout << endl; // Pindah baris

    return 0;
}
