// Penentuan bilangan terbesar
//    di antara dua bilangan

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan bilangan terbesar" << endl;
    cout << "di antara dua bilangan" << endl;
    cout << "---------------------------" << endl;

    int bilanganX, bilanganY, terbesar;

    cout << "Bilangan pertama = ";
    cin >> bilanganX;

    cout << "Bilangan kedua   = ";
    cin >> bilanganY;

    // Penentuan bilangan terbesar
    terbesar = bilanganX;
    if (bilanganY > terbesar)
        terbesar = bilanganY;

    // Tampilkan hasilnya
    cout << "Bilangan terbesar = " << terbesar << endl;

    return(0);
}
