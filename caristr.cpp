// Contoh pencarian string
//     yang mengandung "da"

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Nama-nama hewan yang mengandung 'da'"
         << endl;
    cout << "------------------------------------"
         << endl;

    const int JUM_HEWAN = 10;
    char namaHewan[JUM_HEWAN][15] = {
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

    // Seleksi yang mengandung 'da'
    for (int i = 0; i < JUM_HEWAN; i++)
        if (strstr(namaHewan[i], "da"))
            cout << namaHewan[i] << endl;

    return 0;
}
