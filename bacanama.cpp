// Pemasukan data string dari papan-ketik
//     dan diberikan ke objek berkelas string

#include <iostream>

using namespace std;

int main() {
    cout << "Pemasukan string dari papan-ketik" << endl;
    cout << "---------------------------------" << endl;

    string nama;

    cout << "Nama Anda: ";
    getline(cin, nama);

    cout << "Hai, " << nama
         << ". Trims, ya!" << endl;

    return 0;
}
