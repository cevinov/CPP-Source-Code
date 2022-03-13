// Argumen berupa larik dua dimensi

#include <iostream>
#include <iomanip>

using namespace std;

const int MAKS_BARIS = 5;
const int MAKS_KOLOM = 5;

void entriMatriks(double mat[][MAKS_KOLOM],
                  int &jumBaris, int &jumKolom);

int main() {
    double matriks[MAKS_BARIS][MAKS_KOLOM];
    int jumBaris, jumKolom;

    entriMatriks(matriks, jumBaris, jumKolom);

    // Tampilkan matriks
    cout << endl;
    cout << "Matriks:" << endl;
    cout << setiosflags(ios::fixed);
    for (int i = 0; i < jumBaris; i++) {
        for (int j = 0; j < jumKolom; j++)
            cout << setw(12) << setprecision(5)
                 << matriks[i][j];

        cout << endl;
    }

    return 0;
}

void entriMatriks(double mat[][MAKS_KOLOM],
                  int &jumBaris, int &jumKolom) {
    cout << "Pastikan jumlah baris maupun kolom" << endl;
    cout << "tidak lebih dari 5" << endl;;
    cout << "==================================" << endl;

    cout << "Jumlah baris: ";
    cin >> jumBaris;

    cout << "Jumlah kolom: ";
    cin >> jumKolom;

    for (int baris = 0; baris < jumBaris; baris++)
        for (int kolom = 0; kolom < jumKolom; kolom++) {
            cout << "Elemen [" << baris
                 << ", " << kolom
                 << "] = ";
            cin >> mat[baris][kolom];
        }
}
