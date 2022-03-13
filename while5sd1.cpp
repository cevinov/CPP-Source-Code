// Penyajian angka 1 hingga 5
//    menggunakan while

#include <iostream>

using namespace std;

int main() {
    int bilangan;

    bilangan = 5;
    while (bilangan >= 1) {
        cout << bilangan << endl;

        bilangan = bilangan - 1;
    }

    return 0;
}
