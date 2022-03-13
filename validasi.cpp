// Validasi pemasukan data

#include <iostream>

using namespace std;

int main() {
    cout << "Validasi pemasukan data" << endl;
    cout << "-----------------------" << endl;

    int bilangan;

    cout << "Bilangan bulat = ";
    cin >> bilangan;

    if (!cin)
        cout << "Anda tidak memasukkan bilangan bulat"
             << endl;
    else
        cout << "Trims. Anda telah memasukkan bilangan bulat"
             << endl;

    return(0);
}
