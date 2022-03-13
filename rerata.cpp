// Fungsi untuk menghitung rata-rata
//    nilai di larik

#include <iostream>

using namespace std;

// Prototipe fungsi
float ratarata(int larik[], int jum);

int main() {
    int daftarBil[] = {
        1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 2
    };

    cout << "Rata-rata = "
         << ratarata(daftarBil, 11) << endl;

    return(0);
}

float ratarata(int larik[], int jum) {
    int total = 0;

    for (int j = 0; j < jum; j++) {
        total = total + larik[j];
    }

    return total / (float) jum;
}
