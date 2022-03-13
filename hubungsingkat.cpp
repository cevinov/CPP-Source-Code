// Contoh untuk memperlihatkan efek hubung singkat

#include <iostream>

using namespace std;

int main() {
    cout << "Efek hubung singkat" << endl;
    cout << "-------------------" << endl;

    int x = 5, y = 0;
    bool logika;

    logika = (x == 4) && (++y == 1);
    cout << "logika = " << logika << endl;
    cout << "y      = " << y << endl;

    cout << endl;

    logika = (x == 5) && (++y == 1);
    cout << "logika = " << logika << endl;
    cout << "y      = " << y << endl;


    return(0);
}
