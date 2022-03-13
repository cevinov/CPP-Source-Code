// Pengontrolan 8 lampu

#include <iostream>

using namespace std;

struct tipeBit {
    unsigned bit0: 1;
    unsigned bit1: 1;
    unsigned bit2: 1;
    unsigned bit3: 1;
    unsigned bit4: 1;
    unsigned bit5: 1;
    unsigned bit6: 1;
    unsigned bit7: 1;
};

union tipeData8Bit {
    unsigned char data;
    tipeBit delapanBit;
};

// Prototipe fungsi
void tampilkan8Bit(tipeData8Bit b);

int main() {
    tipeData8Bit lampu8;
    lampu8.data = 255;

    int posisiBit;

    do {
        tampilkan8Bit(lampu8);

        char pilihan;

        do {
            cout << "Anda ingin mengubah keadaan lampu (Y/T)? ";
            pilihan = cin.get();
            pilihan = toupper(pilihan); // Ubah ke huruf kapital
            cin.ignore(); // Abaikan sisa data dari papan-ketik
        } while (!(pilihan == 'Y' || pilihan == 'T'));

        if (pilihan == 'T')
            break; // Keluar dari do-while

        // Baca posisi bit
        cout << "Bit: ";

        cin >> posisiBit;
        cin.ignore(); // Abaikan sisa data dari papan-ketik

        if (posisiBit < 0 || posisiBit > 7) {
            cout << "Posisi bit salah!" << endl << endl;
            continue; // kembali ke awal do-while
        }

        // Baca bit
        int nilaiBit;

        switch (posisiBit) {
            case 0:
                nilaiBit = lampu8.delapanBit.bit0;
                break;
            case 1:
                nilaiBit = lampu8.delapanBit.bit1;
                break;
            case 2:
                nilaiBit = lampu8.delapanBit.bit2;
                break;
            case 3:
                nilaiBit = lampu8.delapanBit.bit3;
                break;
            case 4:
                nilaiBit = lampu8.delapanBit.bit4;
                break;
            case 5:
                nilaiBit = lampu8.delapanBit.bit5;
                break;
            case 6:
                nilaiBit = lampu8.delapanBit.bit6;
                break;
            case 7:
                nilaiBit = lampu8.delapanBit.bit7;
                break;
        }

        string onOff;
        if (nilaiBit == 0)
            onOff = "ON";
        else
            onOff = "OFF";

        // Konfirmasi
        char tanggapan;
        do {
            cout << "Diubah ke " << onOff << " (Y, T)? ";
            tanggapan = cin.get();
            cin.ignore(); // Abaikan sisa data dari papan-ketik
            tanggapan = toupper(tanggapan);
        } while (!(tanggapan == 'Y' || tanggapan == 'T'));

        if (tanggapan != 'Y') {
            tampilkan8Bit(lampu8);
            continue; // Kembali ke awal do-while
        }

        // Ubah bit
        int kebalikan = !nilaiBit;
        switch (posisiBit) {
            case 0:
                lampu8.delapanBit.bit0 = kebalikan;
                break;
            case 1:
                lampu8.delapanBit.bit1 = kebalikan;
                break;
            case 2:
                lampu8.delapanBit.bit2 = kebalikan;
                break;
            case 3:
                lampu8.delapanBit.bit3 = kebalikan;
                break;
            case 4:
                lampu8.delapanBit.bit4 = kebalikan;
                break;
            case 5:
                lampu8.delapanBit.bit5 = kebalikan;
                break;
            case 6:
                lampu8.delapanBit.bit6 = kebalikan;
                break;
            case 7:
                lampu8.delapanBit.bit7 = kebalikan;
                break;
        }
    } while (true);

    cout << endl << "Selesai!" << endl;

    return 0;
}

void tampilkan8Bit(tipeData8Bit b) {
    cout << "Lampu: ";

    cout << b.delapanBit.bit7 << ' ';
    cout << b.delapanBit.bit6 << ' ';
    cout << b.delapanBit.bit5 << ' ';
    cout << b.delapanBit.bit4 << ' ';
    cout << b.delapanBit.bit3 << ' ';
    cout << b.delapanBit.bit2 << ' ';
    cout << b.delapanBit.bit1 << ' ';
    cout << b.delapanBit.bit0 << endl << endl;
}
