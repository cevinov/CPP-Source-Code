// Solusi fungsi untuk mencari negara

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct tipeSimpulNegara {
    string negara;
    string ibukota;
    tipeSimpulNegara *berikut;
};

// Prototipe fungsi
void tambahSimpul(tipeSimpulNegara* &ptrNegara,
                  string negara, string ibukota);
void hapusSemuaSimpul(tipeSimpulNegara* &ptrNegara);
tipeSimpulNegara* cariNegara(tipeSimpulNegara* ptrNegara,
                             string negara);

int main() {
    tipeSimpulNegara *ptrNegara = NULL;

    //Penambahan data negara
    tambahSimpul(ptrNegara, "Belanda", "Amsterdam");
    tambahSimpul(ptrNegara, "Taiwan", "Taipei");
    tambahSimpul(ptrNegara, "Jepang", "Tokyo");
    tambahSimpul(ptrNegara, "Indonesia", "Jakarta");
    tambahSimpul(ptrNegara, "India", "New Delhi");
    tambahSimpul(ptrNegara, "Austria", "Wina");

    tipeSimpulNegara *ptrData, *ptrHasil;
    char jawaban;

    do {
        // Pemasukan nama negara yang dicari
        string namaNegara;
        cout << "Masukkan nama negara yang dicari: ";
        getline(cin, namaNegara);

        if (ptrData = cariNegara(ptrNegara, namaNegara))
            cout << "Ibukota -> "
                 << ptrData->ibukota << endl;
        else
            cout << "Data tidak ditemukan" << endl;

        cout << endl;
        cout << "Mau mencari lagi (Y/T)? ";
        jawaban = cin.get();
        jawaban = toupper(jawaban);
        cin.ignore(); // Abaikan sisa data
                      //    dari papan-ketik
    } while (jawaban == 'Y');

    // Hapus semua simpul dinamis
    hapusSemuaSimpul(ptrNegara);

    return 0;
}

void tambahSimpul(tipeSimpulNegara* &ptrNegara,
                  string negara, string ibukota) {
    tipeSimpulNegara* ptrBaru;

    ptrBaru = new tipeSimpulNegara;
    ptrBaru->negara = negara;
    ptrBaru->ibukota = ibukota;
    ptrBaru->berikut = ptrNegara;

    ptrNegara = ptrBaru;
}

void hapusSemuaSimpul(tipeSimpulNegara* &ptrNegara) {
    tipeSimpulNegara *ptrSimpul;
    while (ptrNegara != NULL) {
        ptrSimpul = ptrNegara;
        ptrNegara = ptrNegara->berikut;
        delete ptrSimpul;
    }
}

tipeSimpulNegara* cariNegara(tipeSimpulNegara* ptrNegara,
                             string negara) {
    tipeSimpulNegara *ptrSimpul;
    ptrSimpul = ptrNegara;
    bool ditemukan = false;
    while (ptrSimpul != NULL) {
        if (stricmp(ptrSimpul->negara.c_str(),
                    negara.c_str()) == 0) {
            ditemukan = true;
            break;
        }

        ptrSimpul = ptrSimpul->berikut;
    }

    if (ditemukan)
        return ptrSimpul;
    else
        return NULL;
}
