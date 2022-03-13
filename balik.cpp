// Contoh penyajian larik secara terbalik

#include <iostream>

using namespace std;

int main() {

    const int JUM_DATA = 10;
    int data[JUM_DATA] = {
        7, 8, 9, 1, 4, 0, 3, 5, 2, 6
    };

    for (int indeks = 0; indeks < JUM_DATA;
         indeks++)
        cout << data[JUM_DATA - indeks - 1] << " ";

    cout << endl;

    return(0);
}
