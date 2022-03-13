// Penyajian angka 1 hingga 5
//    menggunakan do-while

#include <iostream>

using namespace std;

int main() {
    int bilangan;

    bilangan = 1;
    do {
        cout << bilangan << endl;

        bilangan = bilangan + 1;
    } while (bilangan <= 5);

    return 0;
}
