// Contoh inisialisasi string

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char daftarPilihan[] = "KPTAS";
    char menu[5][20] = {
        "[K] Soto Kudus",
        "[P] Nasi Pindang",
        "[T] Tahu Lentok",
        "[A] Ayam Kalasan",
        "[S] Selesai"
    };

    char pilihan;
    char *ptrKarakter;

    cout << "M E N U" << endl;
    for (int indeks = 0; indeks < 5; indeks++)
        cout << menu[indeks] << endl;

    do {
        cout << endl;
        cout << "Pilihan: ";

        pilihan = cin.get();
        pilihan = toupper(pilihan);

        cin.ignore();

        if (ptrKarakter=strchr(daftarPilihan, pilihan)) {
            int indeks = ptrKarakter - daftarPilihan;

            if (indeks != 4)
                cout << "OK. Anda memilih "
                     << menu[indeks] + 4 << endl;
        }
        else
            cout << "Pilihan yang valid: K/P/T/A/S"
                 << endl;
    } while (pilihan != 'S');

    cout << "*** Selesai" << endl;

    return 0;
}
