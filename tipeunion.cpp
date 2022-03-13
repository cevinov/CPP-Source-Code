// Contoh untuk menunjukkan efek tipe union

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Tipe union" << endl;
    cout << "==========" << endl;

    union tipeDuaByte {
        char karakter[2];
        short int bilBulat;
    };

    tipeDuaByte var;
    var.bilBulat = 0x4567;

    cout << hex;
    cout << setiosflags(ios::showbase);

    cout << endl;
    cout << "bilBulat    = " << var.bilBulat
         << endl;
    cout << "karakter[1] = " << (int) var.karakter[1]
         << endl;
    cout << "karakter[0] = " << (int) var.karakter[0]
         << endl;

    // Perubahan pada karakter[0]
    var.karakter[0] = 0x12;

    cout << endl;
    cout << "Setelah karakter[0] diubah:" << endl;

    cout << endl;
    cout << "bilBulat    = " << var.bilBulat
         << endl;
    cout << "karakter[1] = " << (int) var.karakter[1]
         << endl;
    cout << "karakter[0] = " << (int) var.karakter[0]
         << endl;

    return 0;
}
