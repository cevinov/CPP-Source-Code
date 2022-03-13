// Contoh penggunaan replace()

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Fungsi anggota substr()" << endl;
    cout << "-----------------------" << endl;

    string teks = "ratatata taratara";

    cout << "Isi teks semula: " << teks << endl;

    // Penggantian "ra" dengan "di"
    int pos;
    while ((pos = teks.find("ra")) != -1)
        teks.replace(pos, 2, "di");

    cout << "ra diganti di  : " << teks << endl;

    // Hapus semua "ta"
    while ((pos = teks.find("ta")) != -1)
        teks.replace(pos, 2, "");

    cout << "Usai ta dihapu : " << teks << endl;

    return 0;
}
