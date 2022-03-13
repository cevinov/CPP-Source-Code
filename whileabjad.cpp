// Penyajian huruf A hingga Z
//    menggunakan while

#include <iostream>

using namespace std;

int main() {
    char huruf;

    huruf = 'A';
    while (huruf <= 'Z') {
        cout << huruf << " ";

        huruf = huruf + 1;
    }

    cout << endl; // Pindah baris

    return 0;
}
