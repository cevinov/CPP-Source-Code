// Penentuan diskon

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan diskon" << endl;
    cout << "----------------" << endl;

    long int besarPembelian, besarPembayaran, diskon;

    cout << "Nilai nominal pembelian = ";
    cin >> besarPembelian;

    // Penentuan doskon
    diskon = 0;
    if (besarPembelian >= 200000)
        diskon = 0.05 * besarPembelian;

    besarPembayaran = besarPembelian - diskon;

    // Tampilkan hasilnya
    cout << endl;
    cout << "Pembelian  = " << besarPembelian << endl;
    cout << "Diskon     = " << diskon << endl;
    cout << "Pembayaran = " << besarPembayaran << endl;

    return(0);
}
