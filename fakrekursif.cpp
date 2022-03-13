// Pembuatan fungsi rekursif untuk menghitung n!

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
    if (n == 0)
        return 1;
    else
        return n * faktorial(n - 1);
}
