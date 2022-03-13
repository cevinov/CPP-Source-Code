// Contoh pembuatan referensi dan penggunaannya

#include <iostream>
#include <string>

using namespace std;

int main() {
    string mobil = "Honda CRV";

    cout << "mobil = " << mobil << endl;

    // Pembuatan referensi
    string &refMobil = mobil;

    // Ubah mobil melalui refMobil
    refMobil = "Toyota Rush";

    cout << "mobil = " << mobil << endl;

    return 0;
}

