// Contoh penggunaan fungsi anggota c_str()

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    cout << "Konversi menggunakan c_str()" << endl;
    cout << "---------------------------" << endl;

    string namaPeserta = "Fiska Damayanti";

    char nama[45];

    // Salin dari objek string ke larik
    strcpy(nama, namaPeserta.c_str());

    cout << "nama = " << nama << endl;
    return 0;
}
