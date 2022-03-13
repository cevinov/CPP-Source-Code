// Penyisipan string

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Penyisipan string" << endl;
    cout << "-----------------" << endl;

    string teks = "Senyumnya merekah";

    cout << "Isi semula  : " << teks << endl;

    teks.insert(10, "indah ");
    cout << "Isi sekarang: " << teks << endl;

    return 0;
}
