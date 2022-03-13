// Contoh penukaran posisi pada larik
//     pada saat menampilkan isi larik

#include <iostream>

using namespace std;

int main() {

    const int JUM_DATA = 10;
    int data[JUM_DATA] = {
        7, 8, 9, 1, 4, 0, 3, 5, 2, 6
    };

    for (int indeks = 0; indeks < JUM_DATA / 2;
         indeks++) {
        cout << data[indeks * 2 + 1] << " ";
        cout << data[indeks * 2] << " ";
    }

    cout << endl;

    return(0);
}
