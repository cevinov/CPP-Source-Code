// Penentuan bilangan genap atau ganjil

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan bilangan genap/ganjil" << endl;
    cout << "-------------------------------" << endl;

    int bilangan;
    string kategori;

    cout << "Bilangan = ";
    cin >> bilangan;

    // Penentuan bilangan genap atau ganjil
    kategori = "bilangan ganjil";
    if (bilangan % 2 == 0)
        kategori = "bilangan genap";

    // Tampilkan hasilnya
    cout << "Bilangan " << bilangan
         << " merupakan " << kategori << endl;

    return(0);
}
