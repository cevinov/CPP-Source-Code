// Deteksi kesalahan konversi dengan strtof()

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    float bilPecahan; // Untuk menampung hasil konversi
    char *ptr;        // Diperlukan untuk mendeteksi
                      // kesalahan konversi
    char str[80];

    cout << "Konversi dengan strtof()" << endl;
    cout << "========================" << endl;

    cout << "Masukkan string yang akan dikonversi:"
         << endl;
    cin.getline(str, 80);

    bilPecahan = strtof(str, &ptr);
    if (!*ptr)
        cout << bilPecahan << " valid" << endl;
    else
        cout << "Konversi gagal";

    return 0;
}
