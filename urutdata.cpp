// Contoh pengurutan data string

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Pengurutan data nama hewan"
         << endl;
    cout << "--------------------------"
         << endl;

    const int JUM_HEWAN = 10;
    const int MAKS_ELEMEN = 15;
    char namaHewan[JUM_HEWAN][MAKS_ELEMEN] = {
        "Garuda",
        "Kuda",
        "Kanguru",
        "Barakuda",
        "Burung dara",
        "Unta",
        "Kedasih",
        "Badak",
        "Harimau",
        "Panda"
    };

    // Pengurutan data
    char sementara[MAKS_ELEMEN];
    for (int i = 0; i < JUM_HEWAN - 1; i++)
        for (int j = i + 1; j < JUM_HEWAN; j++)
            if (strcmp(namaHewan[i], namaHewan[j]) > 0) {
                // Penukaran dua data
                strcpy(sementara, namaHewan[i]);
                strcpy(namaHewan[i], namaHewan[j]);
                strcpy(namaHewan[j], sementara);
            }

    // Penampilan hasil pengurutan
    for (int i = 0; i < JUM_HEWAN; i++)
        cout << namaHewan[i] << endl;

    return 0;
}
