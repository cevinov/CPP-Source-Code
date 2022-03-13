// Contoh efek parameter-melalui-referensi

#include <iostream>
#include <string>

using namespace std;

void ubahArgumen(string &warna) {
    cout << "Warna semula di ubahArgumen() = "
         << warna << endl;

    warna = "Merah";
    cout << "Warna kini di ubahArgumen()   = "
         << warna << endl;
}

int main() {
    string warnaKesukaan = "Biru";
    cout << "Warna = " << warnaKesukaan << endl;

    ubahArgumen(warnaKesukaan);
    cout << "Warna = " << warnaKesukaan << endl;

    return 0;
}

