// Contoh deklarasi variabel global
//    dan variabel lokal dengan nama sama

#include <iostream>

using namespace std;

int y = 40;

void bravo() {
    int y;
    y = 56;

    cout << "y di bravo() = " << y << endl;
    y++;
}

int main() {
    cout << "y di main()  = " << y << endl;

    bravo();

    cout << "y di main()  = " << y << endl;

    return 0;
}
