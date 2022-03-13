// Argumen berupa larik

#include <iostream>
#include <string>

using namespace std;

void tampilkan(string peserta[], int jumPeserta);

int main() {
    const int JUM_PESERTA = 5;
    string daftarPeserta[JUM_PESERTA] = {
        "Rika Devi", "Dandi Wardoyo", "Tara Ranata",
        "Fiska Amelia", "Fahmi Ariyanto"
    };

    tampilkan(daftarPeserta, JUM_PESERTA);

    return 0;
}

void tampilkan(string peserta[], int jumPeserta) {
    for (int j = 0; j < jumPeserta; j++)
        cout << j + 1 << ". " << peserta[j] << endl;
}
