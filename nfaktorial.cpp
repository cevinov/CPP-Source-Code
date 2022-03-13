// Pembuatan fungsi untuk menghitung n!

#include <iostream>

using namespace std;

// Prototipe fungsi
unsigned int faktorial(unsigned int n);

int main() {
    cout << "4! = " << faktorial(4) << endl;
    cout << "6! = " << faktorial(6) << endl;

    return(0);
}

unsigned int faktorial(unsigned int n) {
    int hasil = 1;
    for (int bil = 1; bil <= n; bil++)
        hasil = hasil * bil;

    return hasil;
}
