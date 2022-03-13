// Inisialisasi larik dinamis
//     berdimensi satu

#include <iostream>
#include <string>

using namespace std;

int main() {
    string *ptrLarik = new string[5];

    // Penugasan data ke larik dinamis
    *(ptrLarik + 0) = "Alpha";
    *(ptrLarik + 1) = "Bravo";
    *(ptrLarik + 2) = "Charlie";
    *(ptrLarik + 3) = "Delta";
    *(ptrLarik + 4) = "Echo";

    // Tampilkan isi variabel dinamis
    cout << "Isi larik dinamis: " << endl;
    for (int j = 0; j < 5; j++)
        cout << *(ptrLarik + j) << endl;

    // Variabel dinamis perlu dihapus
    //     sebelum program berakhir
    delete [] ptrLarik;

    return 0;
}

