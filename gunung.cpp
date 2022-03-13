// Contoh penyajian data gunung

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    struct tipeGunung {
        string nama;
        int tinggi;
        string letak;
    };

    // Inisialisasi larik gunung
    tipeGunung daftarGunung[15] = {
        {"Cartenzs Pyramid", 4884, "Papua"},
        {"Puncak Mandala", 4760, "Papua"},
        {"Puncak Trikora", 4750, "Papua"},
        {"Ngga Pilimsit", 4717,	"Papua"},
        {"Yamin", 4595,	"Papua"},
        {"Kerinci",	3805, "Sumatera"},
        {"Rinjani", 3726, "Lombok"},
        {"Semeru", 3676, "Jawa"},
        {"Sanggar", 3564, "Lombok"},
        {"Latimojong", 3478, "Sulawesi"},
        {"Slamet", 3428, "Jawa"},
        {"Sumbing", 3371, "Jawa"},
        {"Raung", 3344, "Jawa"},
        {"Lawu", 3265, "Jawa"},
        {"Merbabu", 3145, "Jawa"}
    };

    // Penyajian isi larik struktur
    cout << "--------------------------------"
         << "-------------" << endl;
    cout << "| Nama Gunung       |   Tinggi | "
         << "Lokasi     |" << endl;
    cout << "--------------------------------"
         << "-------------" << endl;

    for (int j = 0; j < 15; j++) {
        cout << "| ";
        cout << setiosflags(ios::left);
        cout << setw(18) << daftarGunung[j].nama;
        cout << "| ";
        cout << resetiosflags(ios::left);
        cout << setw(8) << daftarGunung[j].tinggi;
        cout << " | ";
        cout << setiosflags(ios::left);
        cout << setw(10) << daftarGunung[j].letak;
        cout << resetiosflags(ios::left);
        cout << " |";
        cout << endl;
    }

    cout << "--------------------------------"
         << "-------------" << endl;

    return 0;
}

