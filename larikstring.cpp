// Contoh larik string

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Larik string" << endl;
    cout << "------------" << endl;

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

    // Penampilan isi larik
    for (int i = 0; i < JUM_HEWAN; i++)
        cout << namaHewan[i] << endl;

    return 0;
}
