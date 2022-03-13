// Pengujian jenis karakter
//    Versi 2

#include <iostream>

using namespace std;

int main() {
    cout << "Pengujian jenis karakter" << endl;
    cout << "------------------------" << endl;

    bool hurufKapital, hurufKecil, angka;
    char karakter;

    cout << "Karakter = ";
    cin >> karakter;

    hurufKapital = isupper(karakter);
    hurufKecil = islower(karakter);
    angka = isdigit(karakter);

    cout << "Huruf kapital? " << hurufKapital << endl;
    cout << "Huruf kecil?   " << hurufKecil << endl;
    cout << "Angka?         " << angka << endl;

    return(0);
}
