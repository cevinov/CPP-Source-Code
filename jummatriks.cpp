// Penjumlahan matriks

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const int JUM_BARIS = 3;
    const int JUM_KOLOM = 3;

    int matriksA[JUM_BARIS][JUM_KOLOM] = {
        {1, 3, 2},
        {4, 6, 5},
        {9, 7, 8}
    };

    int matriksB[JUM_BARIS][JUM_KOLOM] = {
        {8, -1, 4},
        {-7, 3, -6},
        {9, -2, 5},
    };

    // Penyajian jumlah matriksA dan matriksB
    for (int baris = 0; baris < JUM_BARIS; baris++) {
        for (int kolom = 0; kolom < JUM_KOLOM; kolom++)
            cout << setw(4)
                 << matriksA[baris][kolom] +
                    matriksB[baris][kolom];

        cout << endl;
    }

    return(0);
}
