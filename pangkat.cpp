// Contoh penyelesaian x pangkat n
//     menggunakan pendekatan rekursif

#include <iostream>

using namespace std;

unsigned int pangkat(int x, unsigned int n);

int main() {
    cout << "5^2 = " << pangkat(5, 2) << endl;
    cout << "2^8 = " << pangkat(2, 8) << endl;

    return 0;
}

unsigned int pangkat(int x, unsigned int n) {
   if (n == 1)
       return x;
   else
       return x * pangkat(x, n - 1);
}
