// Pembandingan tanggal

#include <iostream>

using namespace std;

int main() {
    struct tipeTanggal {
        short int tanggal, bulan, tahun;
    };

    tipeTanggal tgA, tgB;
    int tanggalA, bulanA, tahunA,
        tanggalB, bulanB, tahunB;
    string pesanLebihKecil =
        "Tanggal pertama lebih kecil";
    string pesanLebihBesar =
        "Tanggal pertama lebih besar";
    string pesanSama = "Kedua tanggal sama";


    cout << "Pembandingan dua tanggal" << endl;
    cout << "========================" << endl;
    cout << "Masukkan tanggal bulan dan tahun "
         << "dengan pemisah spasi" << endl;
    cout << "Tanggal pertama: ";
    cin >> tanggalA >> bulanA >> tahunA;

    cout << "Tanggal pertama: ";
    cin >> tanggalB >> bulanB >> tahunB;

    // Pengisian data ke variabel struktur
    tgA.tanggal = tanggalA;
    tgA.bulan = bulanA;
    tgA.tahun = tahunA;

    tgB.tanggal = tanggalB;
    tgB.bulan = bulanB;
    tgB.tahun = tahunB;

    // Pembandingan kedua tanggal
    if (tgA.tahun == tgB.tahun &&
        tgA.bulan == tgB.bulan &&
        tgA.tanggal == tgB.tanggal)
        cout << pesanSama
             << endl;
    else
        if (tgA.tahun < tgB.tahun )
            cout << pesanLebihKecil
                 << endl;
        else
            if (tgA.tahun == tgB.tahun)
               if (tgA.bulan < tgB.bulan)
                   cout << pesanLebihKecil
                        << endl;
               else
                  if (tgA.bulan == tgB.bulan)
                      if (tgA.tanggal < tgB.tanggal)
                          cout << pesanLebihKecil
                               << endl;
                      else
                          cout << pesanLebihBesar
                               << endl;
                  else
                      cout << pesanLebihBesar
                           << endl;
            else
                cout << pesanLebihBesar
                     << endl;

    return 0;
}

