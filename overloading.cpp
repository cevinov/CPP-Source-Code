// Perhitungan faktorial secara rekursif

#include <iostream>

using namespace std;

unsigned int faktorial(unsigned int n);

int main() {
    cout << "5! = " << faktorial(5) << endl;
    cout << "6! = " << faktorial(6) << endl;

    return 0;
}

unsigned int faktorial(unsigned int n) {
    if (n == 0)
        return 1;
    else
        return n * faktorial(n - 1);
}
