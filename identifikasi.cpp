// Pengujian jenis karakter

#include <iostream>

using namespace std;

int main() {
    cout << "Pengujian jenis karakter" << endl;
    cout << "------------------------" << endl;

    bool hurufKapital, hurufKecil, angka;
    char karakter;

    cout << "Karakter = ";
    cin >> karakter;

    hurufKapital = karakter >= 'A' && karakter <= 'Z';
    hurufKecil = karakter >= 'a' && karakter <= 'z';
    angka = karakter >= '0' && karakter <= '9';

    cout << "Huruf kapital? " << hurufKapital << endl;
    cout << "Huruf kecil?   " << hurufKecil << endl;
    cout << "Angka?         " << angka << endl;

    return(0);
}
