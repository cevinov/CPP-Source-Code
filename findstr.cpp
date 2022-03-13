// Contoh pencarian string
//     yang mengandung "da"

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Nama-nama hewan yang mengandung 'da'"
         << endl;
    cout << "------------------------------------"
         << endl;

    const int JUM_HEWAN = 10;
    string namaHewan[JUM_HEWAN] = {
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
        if (namaHewan[i].find("da") != -1)
            cout << namaHewan[i] << endl;

    return 0;
}
