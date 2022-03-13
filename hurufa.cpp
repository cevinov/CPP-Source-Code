// Pembuatan huruf A

#include <iostream>
#include <cmath>    // Diperlukan oleh pow()

using namespace std;

int main() {
    char huruf[] = {
        0x3C, 0x24, 0x24, 0x7E,
        0x62, 0x62, 0x62, 0x00
    };

    for (int baris = 0; baris < 8; baris++) {
       int data = huruf[baris];
       for (int posBit = 7; posBit >= 0; posBit--) {
           int pembagi = pow(2, posBit);
           int bit = data / pembagi;
           if (bit == 1)
               data = data - pembagi;

           if (bit == 1)
               cout << (char) 219;
           else
               cout << (char) 32;
       }

       cout << endl;
    }

    return(0);
}
