// Perhitungan n faktorial

#include <iostream>

using namespace std;

int main() {
    unsigned int n;

    cout << "Perhitungan n!" << endl;
    cout << "--------------" << endl;

    cout << "n = ";
    cin >> n;

    int hasil = 1;

    for (int bil = 1; bil <= n; bil++)
        hasil = hasil * bil;

    cout << n << "! = " << hasil << endl;

    return 0;
}
