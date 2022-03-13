// Penguraian karakter pada string

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Penguraian karakter pada string" << endl;
    cout << "-------------------------------" << endl;

    char bunga[] = "Mawar"; // Inisialisasi string

    for (int indeks = 0; indeks < strlen(bunga); indeks++)
        cout << bunga[indeks] << endl;

    return 0;
}
