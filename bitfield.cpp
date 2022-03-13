// Contoh penggunaan bitfield
//     untuk mengonversi bilangan desimal
//     ke bentuk biner

#include <iostream>

using namespace std;

int main() {
    struct tipeBit {
        unsigned int bit0: 1;
        unsigned int bit1: 1;
        unsigned int bit2: 1;
        unsigned int bit3: 1;
        unsigned int bit4: 1;
        unsigned int bit5: 1;
        unsigned int bit6: 1;
        unsigned int bit7: 1;
    };

    union tipeByte {
        unsigned char byte;
        tipeBit dataBit;
    };

    tipeByte var;
    int bilangan;

    cout << "Konversi bilangan byte ke biner" << endl;
    cout << "===============================" << endl;

    cout << "Masukkan bilangan bulat (0..255): ";
    cin >> bilangan;

    // Masukkan bilangan ke var.byte
    var.byte = bilangan;

    // Bentuk biner diperoleh via bit0 hingga bit7
    cout << "76543210 <--- Posisi bit" << endl;
    cout << var.dataBit.bit7
         << var.dataBit.bit6
         << var.dataBit.bit5
         << var.dataBit.bit4
         << var.dataBit.bit3
         << var.dataBit.bit2
         << var.dataBit.bit1
         << var.dataBit.bit0
         << endl;

    return 0;
}
