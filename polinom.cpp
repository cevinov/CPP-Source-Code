// Perhitungan polinom

#include <iostream>
#include <cmath>

using namespace std;

struct tipeSimpulPolinom {
    double koefisien;
    int pangkat;
    tipeSimpulPolinom* berikut;
};

void tambahData(tipeSimpulPolinom* &ptrSenarai,
                double koefisien,
                int pangkat);

double hitungPolinom(tipeSimpulPolinom* ptrSenarai,
                    double x);
void hapusSemuaSimpul(tipeSimpulPolinom* &ptrSenarai);

int main() {
    tipeSimpulPolinom* ptrSenarai = NULL;

    // Pemasukan data
    cout << "Derajat polinom: ";
    int derajat;
    cin >> derajat;

    for (int j = derajat; j >= 0; j--) {
        cout << endl;
        cout << "Pangkat " << j << ":" << endl;
        cout << "Koefisien: ";

        double koefisien;
        cin >> koefisien;
        if (koefisien != 0)
            tambahData(ptrSenarai, koefisien, j);
    }

    char jawaban;

    cout << endl;
    cout << "Perhitungan untuk nilai x" << endl;

    do {
        // Pemasukan nilai x
        int x;
        cout << endl;
        cout << "Nilai x: ";
        cin >> x;

        double y = hitungPolinom(ptrSenarai, x);
        cout << "Hasil: " << y << endl;

        cout << endl;
        cout << "Mau memasukkan nilai x lagi (Y/T)? ";
        cin.ignore(); // Abaikan sisa data
                      //    dari papan-ketik
        jawaban = cin.get();
        jawaban = toupper(jawaban);
    } while (jawaban == 'Y');

    hapusSemuaSimpul(ptrSenarai);

    return 0;
}

void tambahData(tipeSimpulPolinom* &ptrSenarai,
                double koefisien,
                int pangkat) {
    tipeSimpulPolinom* ptrBaru;

    ptrBaru = new tipeSimpulPolinom;
    ptrBaru->koefisien = koefisien;
    ptrBaru->pangkat = pangkat;
    ptrBaru->berikut = ptrSenarai;

    ptrSenarai = ptrBaru;
}

double hitungPolinom(tipeSimpulPolinom* ptrSenarai,
                     double x) {
    double jum = 0;

    tipeSimpulPolinom* ptrSimpul = ptrSenarai;
    while (ptrSimpul != NULL) {
        jum = jum + ptrSimpul->koefisien *
                    pow(x, ptrSimpul->pangkat);

        ptrSimpul = ptrSimpul->berikut;
    }

    return jum;
}

void hapusSemuaSimpul(tipeSimpulPolinom* &ptrSenarai) {
    tipeSimpulPolinom *ptrSimpul;
    while (ptrSenarai != NULL) {
        ptrSimpul = ptrSenarai;
        ptrSenarai = ptrSenarai->berikut;
        delete ptrSimpul;
    }
}
