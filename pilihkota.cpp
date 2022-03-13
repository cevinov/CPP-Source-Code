// Penyajian nama-nama kota di suatu negara

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    const int JUM_BARIS = 14;
    string tabel[JUM_BARIS][2] = {
        {"Baden",     "Austria"},
        {"Bandung",   "Indonesia"},
        {"Bogor",	  "Indonesia"},
        {"Graz",      "Austria"},
        {"Innsbruck", "Austria"},
        {"Kariya",	  "Jepang"},
        {"Kudus",	  "Indonesia"},
        {"Kyoto",	  "Jepang"},
        {"Linz",	  "Austria"},
        {"Nagoya",	  "Jepang"},
        {"Samarinda", "Indonesia"},
        {"Tokyo",	  "Jepang"},
        {"Toyokawa",  "Jepang"},
        {"Wina",	  "Austria"}
    };

    string namaNegara;
    string negara;

    cout << "Daftar kota di suatu negara" << endl;
    cout << "---------------------------" << endl;

    cout << "nama negara: ";
    getline(cin, namaNegara);

    int jumKota = 0;
    for (int indeks = 0; indeks < JUM_BARIS; indeks++) {
        if (stricmp(namaNegara.c_str(),
                    tabel[indeks][1].c_str()) == 0) {
            jumKota++;

            cout << tabel[indeks][0] << endl;
        }
    }

    if (jumKota == 0)
        cout << "Data tidak ditemukan" << endl;
    else
        cout << "Jumlah kota: " << jumKota << endl;

    return 0;
}
