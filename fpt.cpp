// Faktor persekutuan terbesar

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int x, y, a, b, sisa;

    cout << "Faktor persekutuan terbesar" << endl;
    cout << "bilangan x dan y" << endl;
    cout << "---------------------------" << endl;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    // Peroleh bilangan terbesar dan terkecil
    if (x > y) {
        a = x;
        b = y;
    }
    else {
        a = y;
        b = x;
    }


    // Peroleh faktor persekutuan terbesar
    sisa = a % b;
    while (sisa != 0) {
        a = b;
        b = sisa;
        sisa = a % b;
    }

    cout << "FPT = " << b << endl;

    return(0);
}
