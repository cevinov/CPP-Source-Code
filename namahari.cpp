// Cara memeroleh nama hari
//    menggunakan algoritma Zeller

#include <iostream>

using namespace std;

int main()
{
    int tanggal, bulan, tahun;

    cout << "Penentuan nama hari" << endl;
    cout << "-------------------" << endl;

    cout << "Tanggal (1..31): ";
    cin >> tanggal;

    cout << "Bulan (1..12): ";
    cin >> bulan;

    cout << "Tahun: ";
    cin >> tahun;

    // Konversi bulan dan tahun untuk bulan 1 atau 2
    if (bulan == 1) {
        bulan = 13;
        tahun = tahun - 1;
    }
    else if (bulan ==  2) {
        bulan = 14;
        tahun = tahun - 1;
    }

    // Peroleh kode hari
    int tahunDalamAbad = tahun % 100;
    int abad = tahun / 100;

    int kodeHari = (tanggal + (26 * (bulan + 1) / 10) +
                    tahunDalamAbad +
                    tahunDalamAbad / 4 +
                    abad / 4 + 5 * abad) % 7;

    cout << "kode hari = " << kodeHari << endl;

    switch (kodeHari) {
        case 0:
           cout << "Sabtu" << endl;
           break;
        case 1:
           cout << "Minggu" << endl;
           break;
        case 2:
           cout << "Senin" << endl;
           break;
        case 3:
           cout << "Selasa" << endl;
           break;
        case 4:
           cout << "Rabu" << endl;
           break;
        case 5:
           cout << "Kamis" << endl;
           break;
        case 6:
           cout << "Jumat" << endl;
           break;
    }

    return 0;
}
