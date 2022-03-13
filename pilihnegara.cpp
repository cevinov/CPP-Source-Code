// Senarai negara

#include <iostream>
#include <string>

using namespace std;

struct tipeSimpulNegara {
    string negara;
    tipeSimpulNegara *berikut;
};

// Prototipe fungsi
void tambahSimpul(tipeSimpulNegara* &ptrNegara,
                  string negara);
void tampilkanSenarai(tipeSimpulNegara *ptrNegara,
                      string penggalan);
void hapusSemuaSimpul(tipeSimpulNegara* &ptrNegara);
void strKapital(string &teks);

int main() {
    tipeSimpulNegara *ptrNegara = NULL;

    //Penambahan data negara
    tambahSimpul(ptrNegara, "Belanda");
    tambahSimpul(ptrNegara, "Taiwan");
    tambahSimpul(ptrNegara, "Jepang");
    tambahSimpul(ptrNegara, "Indonesia");
    tambahSimpul(ptrNegara, "India");
    tambahSimpul(ptrNegara, "Austria");

    // Pemasukan substring untuk memilih negara
    string penggalan;
    cout << "Masukkan penggalan nama negara: ";
    getline(cin, penggalan);

    // Tampilkan senarai
    tampilkanSenarai(ptrNegara, penggalan);

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

void tampilkanSenarai(tipeSimpulNegara *ptrNegara,
                      string penggalan) {
    tipeSimpulNegara *ptrSimpul;
    ptrSimpul = ptrNegara;
    while (ptrSimpul != NULL) {
        string namaNegara = ptrSimpul->negara;

        strKapital(namaNegara);
        strKapital(penggalan);

        if (namaNegara.find(penggalan) != -1)
            cout << ptrSimpul->negara << endl;

        ptrSimpul = ptrSimpul->berikut;
    }
}

void hapusSemuaSimpul(tipeSimpulNegara* &ptrNegara) {
    tipeSimpulNegara *ptrSimpul;
    while (ptrNegara != NULL) {
        ptrSimpul = ptrNegara;
        ptrNegara = ptrNegara->berikut;
        delete ptrSimpul;
    }
}

// Konversi ke huruf kapital
void strKapital(string &teks) {
    for (int j = 0; j < teks.length(); j++)
        if (islower(teks[j]))
            teks[j] = toupper(teks[j]);
}
