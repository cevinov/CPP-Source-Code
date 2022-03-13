// Contoh pengurutan data berkelas string
//     menggunakan compare() untuk pembandingan

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Pengurutan data nama hewan"
         << endl;
    cout << "--------------------------"
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

    // Pengurutan data
    string sementara;
    for (int i = 0; i < JUM_HEWAN - 1; i++)
        for (int j = i + 1; j < JUM_HEWAN; j++)
            if (namaHewan[i].compare(namaHewan[j]) > 0) {
                // Penukaran dua data
                sementara = namaHewan[i];
                namaHewan[i] = namaHewan[j];
                namaHewan[j] = sementara;
            }

    // Penampilan hasil pengurutan
    for (int i = 0; i < JUM_HEWAN; i++)
        cout << namaHewan[i] << endl;

    return 0;
}
