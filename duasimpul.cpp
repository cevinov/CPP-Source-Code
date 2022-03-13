// Contoh pointer yang menunjuk
//     dua simpul

#include <iostream>
#include <string>

using namespace std;

int main() {
    struct tipeSimpul {
        string namaBurung;
        tipeSimpul *berikut;
    };

    tipeSimpul *ptrSimpul; // Pointer

    // Buat simpul pertama dan beri nilai
    ptrSimpul = new tipeSimpul;
    ptrSimpul->namaBurung = "Beo";

    // Buat simpul kedua dan beri nilai
    ptrSimpul->berikut = new tipeSimpul;
    ptrSimpul->berikut->namaBurung = "Jalak";

    // Pointer berikut pada simpul kedua
    //     dibuat menunjuk ke NULL
    ptrSimpul->berikut->berikut = NULL;

    // Tampilkan semua simpul melalui perulangan
    tipeSimpul *ptrSementara;
    ptrSementara = ptrSimpul;

    cout << "Isi kedua simpul:" << endl;

    while (ptrSementara) {
        cout << ptrSementara->namaBurung << endl;
        ptrSementara = ptrSementara->berikut;
    }

    // Bebaskan semua memori yang digunakan oleh
    //     simpul-simpul di senarai berantai
    while (ptrSimpul) {
        ptrSementara = ptrSimpul;
        ptrSimpul = ptrSimpul->berikut;

        delete ptrSementara;
    }

    return 0;
}
