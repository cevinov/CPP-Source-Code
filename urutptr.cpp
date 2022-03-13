// Contoh pengurutan data gunung
//     menggunakan pointer

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const int JUM_DATA = 15;
    struct tipeGunung {
        string nama;
        int tinggi;
        string letak;
    };

    // Inisialisasi larik gunung
    tipeGunung daftarGunung[JUM_DATA] = {
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

    // Pemberian nilai awal pada pointer
    tipeGunung *ptrGunung[JUM_DATA];

    for (int j = 0; j < JUM_DATA; j++)
        ptrGunung[j] = &daftarGunung[j];

    // Pengurutan data menggunakan pointer

    for (int i = 0; i < JUM_DATA - 1; i++)
        for (int j = i + 1; j < JUM_DATA; j++)
            if ((*ptrGunung[i]).nama >
                (*ptrGunung[j]).nama) {
                // Penukaran alamat
                tipeGunung *temp = ptrGunung[j];
                ptrGunung[j] = ptrGunung[i];
                ptrGunung[i] = temp;
            }

    // Penyajian isi larik struktur
    cout << "--------------------------------"
         << "-------------" << endl;
    cout << "| Nama Gunung       |   Tinggi | "
         << "Lokasi     |" << endl;
    cout << "--------------------------------"
         << "-------------" << endl;

    for (int j = 0; j < JUM_DATA; j++) {
        cout << "| ";
        cout << setiosflags(ios::left);
        cout << setw(18) << ptrGunung[j]->nama;
        cout << "| ";
        cout << resetiosflags(ios::left);
        cout << setw(8) << ptrGunung[j]->tinggi;
        cout << " | ";
        cout << setiosflags(ios::left);
        cout << setw(10) << ptrGunung[j]->letak;
        cout << resetiosflags(ios::left);
        cout << " |";
        cout << endl;
    }

    cout << "--------------------------------"
         << "-------------" << endl;

    return 0;
}

