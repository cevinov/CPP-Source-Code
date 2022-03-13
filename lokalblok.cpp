// Contoh deklarasi variabel lokal
//     pada suatu blok

#include <iostream>

using namespace std;

int main() {
    int x = 54;

    {
        // Semua deklarasi di blok ini
        //     bersifat lokal

        int x;
        x = 67;

        cout << "x di blok = " << x << endl;
    }

    cout << "x di main() = " << x << endl;

    return 0;
}

