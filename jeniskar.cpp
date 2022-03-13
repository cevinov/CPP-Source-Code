// Penentuan jenis karakter

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan jenis karakter" << endl;
    cout << "------------------------" << endl;

    char karakter;

    cout << "Karakter = ";
    cin >> karakter;

    // Tentukan jenis karakter
    if (isupper(karakter))
        cout << karakter << " adalah huruf kapital"
             << endl;
    else
        if (islower(karakter))
            cout << karakter << " adalah huruf kecil"
                 << endl;
        else
            if (isdigit(karakter))
                cout << karakter << " adalah angka"
                     << endl;
            else
                cout << karakter
                     << " adalah bukan huruf "
                     << "maupun angka"
                     << endl;

    return(0);
}
