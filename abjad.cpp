// Penyajian huruf A hingga Z
//    menggunakan do-while

#include <iostream>

using namespace std;

int main() {
    char huruf;

    huruf = 'A';
    do {
        cout << huruf << " ";

        huruf = huruf + 1;
    } while (huruf <= 'Z');

    cout << endl; // Pindah baris

    return 0;
}
