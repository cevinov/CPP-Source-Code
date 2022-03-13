// Penghapusan sejumlah karakter dalam string

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Penghapusan sejumlah karakter" << endl;
    cout << "-----------------------------" << endl;

    string teks = "Tika tidak pergi";

    cout << "Isi semula  : " << teks << endl;

    teks.erase(5, 6);
    cout << "Isi sekarang: " << teks << endl;

    return 0;
}
