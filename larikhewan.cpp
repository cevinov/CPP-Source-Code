// Contoh larik string

#include <iostream>

using namespace std;

int main() {
    cout << "Larik string" << endl;
    cout << "------------" << endl;

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

    // Penampilan isi larik
    for (int i = 0; i < JUM_HEWAN; i++)
        cout << namaHewan[i] << endl;

    return 0;
}
