// Fungsi untuk membalik urutan data pada larik

#include <iostream>

using namespace std;

// Prototipe fungsi
void tampilkanLarik(int data[], int jum);
void balikLarik(int data[], int jum);

int main() {
    const int JUM_DATA = 9;

    int daftarBil[JUM_DATA] = {
       10, 20, 30, 40, 50, 60, 70, 80, 90
    };

    cout << "Sebelum dibalik: " << endl;
    tampilkanLarik(daftarBil, JUM_DATA);

    balikLarik(daftarBil, JUM_DATA);

    cout << "Setelah dibalik: " << endl;
    tampilkanLarik(daftarBil, JUM_DATA);

    return(0);
}

void tampilkanLarik(int data[], int jum) {
    for (int j = 0; j < jum; j++)
        cout << data[j] << " ";

    cout << endl;
}

void balikLarik(int data[], int jum) {
    int sementara;

    for (int j = 0; j <= (jum - 1) / 2; j++) {
        sementara = data[j];
        data[j] = data[jum - 1 - j];
        data[jum - 1 - j] = sementara;
    }
}
