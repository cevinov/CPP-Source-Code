// Penyajian angka 5 hingga 1
//    menggunakan do-while

#include <iostream>

using namespace std;

int main() {
    int bilangan;

    bilangan = 5;
    do {
        cout << bilangan << endl;

        bilangan = bilangan - 1;
    } while (bilangan >= 1);

    return 0;
}
