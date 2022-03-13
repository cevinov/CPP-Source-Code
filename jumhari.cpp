// Fungsi untuk menentukan jumlah hari
//    dalam suatu bulan

#include <iostream>

using namespace std;

// Prototipe fungsi
bool tahunKabisat(int tahun);
int jumlahHari(int bulan, int tahun);

int main() {
    cout << "Jumlah hari bulan Februari 2020 = "
         << jumlahHari(2, 2020) << endl;

    cout << "Jumlah hari bulan Februari 2021 = "
         << jumlahHari(2, 2021) << endl;

    cout << "Jumlah hari bulan Maret 2021 = "
         << jumlahHari(3, 2021) << endl;

    return(0);
}

bool tahunKabisat(int tahun) {
    if (tahun % 4 != 0)
        return false;
    else
        if ((tahun % 100 == 0) && (tahun % 400 != 0))
            return false;
        else
            return true;
}

int jumlahHari(int bulan, int tahun) {
    static int jumHariDalamBulan[] = {
        0, 31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    int jum = jumHariDalamBulan[bulan];
    if (bulan == 2)
        if (tahunKabisat(tahun))
            jum = 29;

    return jum;
}
