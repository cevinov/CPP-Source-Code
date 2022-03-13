// Penentuan bilangan genap atau ganjil
//    menggunakan operator ?:

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan bilangan genap/ganjil" << endl;
    cout << "-------------------------------" << endl;

    int bilangan;

    cout << "Bilangan = ";
    cin >> bilangan;

    // Penentuan bilangan genap atau ganjil
    string kategori = bilangan % 2 == 0 ?
       "bilangan genap" : "bilangan ganjil";

    cout << "Bilangan " << bilangan
         << " merupakan " << kategori << endl;

    return(0);
}
