// Perhitungan pajak

#include <iostream>

using namespace std;

int main() {
    cout << "Perhitungan pajak" << endl;
    cout << "-----------------" << endl;

    unsigned long penghasilan, pajak;

    cout << "Penghasilan kena pajak = ";
    cin >> penghasilan;

    // Tentukan pajak
    if (penghasilan > 500000000L)
        pajak = 2500000L + 15000000L + 87500000L +
                (penghasilan - 500000000L) * 30 / 100;
    else
       if (penghasilan > 150000000L)
           pajak = 2500000L + 15000000L +
                   (penghasilan - 150000000L) * 25 / 100;
       else
       if (penghasilan > 50000000L)
           pajak = 2500000L +
                   (penghasilan - 50000000L) * 15 / 100 ;
       else
           pajak = penghasilan * 5 / 100;

    // Tampilkan hasilnya
    cout << "Pajak = " << pajak << endl;

    return(0);
}
