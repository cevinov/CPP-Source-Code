// Contoh penghapusan data negara tertentu

#include <iostream>
#include <string>
#include <cstring> // Diperlukan oleh stricmp()

using namespace std;

struct tipeSimpulNegara {
    string negara;
    tipeSimpulNegara *berikut;
};

// Prototipe fungsi
void tambahSimpul(tipeSimpulNegara* &ptrNegara,
                  string negara);
void tampilkanSenarai(tipeSimpulNegara *ptrNegara);
void hapusSemuaSimpul(tipeSimpulNegara* &ptrNegara);
bool hapusNegara(tipeSimpulNegara* &ptrNegara,
                 string negara);

int main() {
    tipeSimpulNegara *ptrNegara = NULL;

    //Penambahan data negara
    tambahSimpul(ptrNegara, "Belanda");
    tambahSimpul(ptrNegara, "Taiwan");
    tambahSimpul(ptrNegara, "Jepang");
    tambahSimpul(ptrNegara, "Indonesia");
    tambahSimpul(ptrNegara, "India");
    tambahSimpul(ptrNegara, "Austria");

    cout << "Isi senarai semula:" << endl;
    tampilkanSenarai(ptrNegara);

    bool hasil;
    string negara;

    // --- Tes pertama
    negara = "Austria";
    hasil = hapusNegara(ptrNegara, negara);
    if (hasil)
        cout << negara << " sudah dihapus" << endl;
    else
        cout << negara << " tidak tersedia" << endl;

    cout << "Isi senarai setelah "
         << negara << " dihapus:" << endl;

    tampilkanSenarai(ptrNegara);

    // --- Tes kedua
    negara = "JEPANG";
    hasil = hapusNegara(ptrNegara, negara);
    if (hasil)
        cout << negara << " sudah dihapus" << endl;
    else
        cout << negara << " tidak tersedia" << endl;

    cout << "Isi senarai setelah "
         << negara << " dihapus:" << endl;

    tampilkanSenarai(ptrNegara);

    // --- Tes ketiga
    hasil = hapusNegara(ptrNegara, "Jepang");
    if (hasil)
        cout << "Jepang sudah dihapus" << endl;
    else
        cout << "Jepang tidak tersedia" << endl;

    // Hapus semua simpul dinamis
    hapusSemuaSimpul(ptrNegara);

    return 0;
}

void tambahSimpul(tipeSimpulNegara* &ptrNegara,
                  string negara) {
    tipeSimpulNegara* ptrBaru;

    ptrBaru = new tipeSimpulNegara;
    ptrBaru->negara = negara;
    ptrBaru->berikut = ptrNegara;

    ptrNegara = ptrBaru;
}

void tampilkanSenarai(tipeSimpulNegara *ptrNegara) {
    tipeSimpulNegara *ptrSimpul;
    ptrSimpul = ptrNegara;
    while (ptrSimpul != NULL) {
        cout << ptrSimpul->negara << " ";
        ptrSimpul = ptrSimpul->berikut;
    }

    cout << endl; // Pindah baris
    cout << endl; // Tambahkan baris kosong
}

void hapusSemuaSimpul(tipeSimpulNegara* &ptrNegara) {
    tipeSimpulNegara *ptrSimpul;
    while (ptrNegara != NULL) {
        ptrSimpul = ptrNegara;
        ptrNegara = ptrNegara->berikut;
        delete ptrSimpul;
    }
}

bool hapusNegara(tipeSimpulNegara* &ptrNegara,
                 string negara) {
    // Cari simpul yang mau dihapus
    tipeSimpulNegara *ptrSimpul, *ptrSebelum;

    ptrSebelum = NULL;
    ptrSimpul = ptrNegara;
    bool ditemukan = false;
    while (ptrSimpul != NULL) {
        if (stricmp(ptrSimpul->negara.c_str(),
                    negara.c_str()) == 0) {
            ditemukan = true;
            break;
        }

        ptrSebelum = ptrSimpul;
        ptrSimpul = ptrSimpul->berikut;
    }

    if (!ditemukan)
        return false;

    // Proses untuk menghapus simpul
    if (ptrSebelum == NULL) {
        // Kasus pertama
        ptrNegara = ptrNegara->berikut;
        delete ptrSimpul;
    }
    else {
        // Kasus kedua
        ptrSebelum->berikut = ptrSimpul->berikut;
        delete ptrSimpul;
    }

    return true;
}

