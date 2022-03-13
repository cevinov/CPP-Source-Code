// Penentuan bilangan terkecil
//    di antara tiga bilangan
//    Versi 1

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan bilangan terkecil" << endl;
    cout << "di antara tiga bilangan" << endl;
    cout << "---------------------------" << endl;

    int bilX, bilY, bilZ, terkecil;

    cout << "Bilangan pertama = ";
    cin >> bilX;

    cout << "Bilangan kedua   = ";
    cin >> bilY;

    cout << "Bilangan ketiga  = ";
    cin >> bilZ;

    // Penentuan bilangan terkecil
    terkecil = bilX;
    if (bilY < terkecil)
        terkecil = bilY;

    if (bilZ < terkecil)
        terkecil = bilZ;

    // Tampilkan hasilnya
    cout << "Bilangan terkecil = " << terkecil << endl;

    return(0);
}
