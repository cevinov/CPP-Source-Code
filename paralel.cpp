// Resistor paralel

#include <iostream>

using namespace std;

int main() {
    int r, r1, r2, r3;

    cout << "R1 = ";
    cin >> r1;

    cout << "R2 = ";
    cin >> r2;

    cout << "R3 = ";
    cin >> r3;

    r = 1 / ( 1.0 / r1 + 1.0 / r2 + 1.0 / r3);

    cout << "R = " << r << endl;

    return(0);
}
