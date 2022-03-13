// Penyajian nama-nama kota di suatu negara

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int JUM_BARIS = 14;
    char tabel[JUM_BARIS][2][10] = {
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

    char namaNegara[10];
    char negara[10];

    cout << "Daftar kota di suatu negara" << endl;
    cout << "---------------------------" << endl;

    cout << "nama negara: ";
    cin.getline(namaNegara, 10);
    strupr(namaNegara);

    int jumKota = 0;
    for (int indeks = 0; indeks < JUM_BARIS; indeks++) {
        strcpy(negara, tabel[indeks][1]);
        strupr(negara);
        if (strcmp(negara, namaNegara) == 0) {
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
