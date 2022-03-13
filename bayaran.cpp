// Bayaran untuk karyawan

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    union tipeSumberPembayaran {
        short int totalJam;
        long int totalPenjualan;
    };

    enum tipeKaryawan {BASIS_JAM, BASIS_PENJUALAN};

    struct tipeDataKaryawan {
        int nomorInduk;
        tipeKaryawan kategori;
        tipeSumberPembayaran sumber;
    };

    tipeDataKaryawan data[5];

    data[0].nomorInduk = 201;
    data[0].kategori = BASIS_JAM;
    data[0].sumber.totalJam = 160;

    data[1].nomorInduk = 202;
    data[1].kategori = BASIS_PENJUALAN;
    data[1].sumber.totalPenjualan = 45000000L;

    data[2].nomorInduk = 203;
    data[2].kategori = BASIS_JAM;
    data[2].sumber.totalJam = 150;

    data[3].nomorInduk = 204;
    data[3].kategori = BASIS_JAM;
    data[3].sumber.totalJam = 172;

    data[4].nomorInduk = 205;
    data[4].kategori = BASIS_PENJUALAN;
    data[4].sumber.totalPenjualan = 125500000L;

    long int bayaran;
    for (int j = 0; j < 5; j++) {
        if (data[j].kategori == BASIS_JAM)
            bayaran = 15000 *  data[j].sumber.totalJam;
        else
            bayaran = 500000 +
                0.05* data[j].sumber.totalPenjualan;

        cout << "Bayaran untuk "
             << data[j].nomorInduk
             << " = " << bayaran << endl;
    }

    return 0;
}
