// Penentuan bilangan genap atau ganjil
//    menggunakan if-else

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan bilangan genap/ganjil" << endl;
    cout << "-------------------------------" << endl;

    int bilangan;

    cout << "Bilangan = ";
    cin >> bilangan;

    // Penentuan bilangan genap atau ganjil
    if (bilangan % 2 == 0)
        cout << "Bilangan " << bilangan
             << " merupakan bilangan genap" << endl;
    else
        cout << "Bilangan " << bilangan
             << " merupakan bilangan genap" << endl;

    return(0);
}
