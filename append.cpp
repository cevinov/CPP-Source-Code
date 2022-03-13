// Penambahan string pada akhir string lainnya

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Penambahan string" << endl;
    cout << "-----------------" << endl;

    string teks;
    string daftarKota = "Solo Tokyo Lima";

    teks = "Paris "; // Penugasan string
    cout << "Isi teks semula: " << teks << endl;

    teks.append(daftarKota);
    cout << "Isi teks kini  : " << teks << endl;

    return 0;
}
