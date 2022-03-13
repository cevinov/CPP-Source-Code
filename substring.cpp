// Contoh penggunaan substr()

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Fungsi anggota substr()" << endl;
    cout << "-----------------------" << endl;

    string teks = "Sukses";
    for (int i = 0; i < teks.length(); i++)
        cout << teks.substr(i) << endl;

    return 0;
}
