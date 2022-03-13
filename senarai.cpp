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
void tampilkanSenarai(tipeSimpulNegara *ptrNegara);
void hapusSemuaSimpul(tipeSimpulNegara* &ptrNegara);

int main() {
    tipeSimpulNegara *ptrNegara = NULL;

    //Penambahan data negara
    tambahSimpul(ptrNegara, "Belanda");
    tambahSimpul(ptrNegara, "Taiwan");
    tambahSimpul(ptrNegara, "Jepang");
    tambahSimpul(ptrNegara, "Indonesia");
    tambahSimpul(ptrNegara, "India");
    tambahSimpul(ptrNegara, "Austria");

    // Tampilkan senarai
    tampilkanSenarai(ptrNegara);

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
