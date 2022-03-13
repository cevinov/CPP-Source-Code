// Pengujian bilangan sebagai genap atau ganjil
//     dinyatakan dengan nilai logika

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int bilangan;

    cout << "Penentuan bilangan ganjil atau bukan"
         << endl;
    cout << "Bilangan bulat = ";
    cin >> bilangan;

    bool ganjil = bilangan % 2 == 1;
    cout << "Ganjil? " << ganjil << endl;

    return(0);
}
