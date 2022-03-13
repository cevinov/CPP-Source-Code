// Penentuan bilangan terkecil
//    di antara tiga bilangan
//    Versi 2

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan bilangan terbesar" << endl;
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
    if (bilX < bilY && bilX < bilZ)
        terkecil = bilX;
    else
        if (bilY < bilX && bilY < bilZ)
            terkecil = bilX;
        else
            terkecil = bilZ;

    // Tampilkan hasilnya
    cout << "Bilangan terkecil = " << terkecil << endl;

    return(0);
}
