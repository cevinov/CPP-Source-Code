// Penentuan jumlah karakter pada string
//     tanpa strlen()

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Penentuan jumlah karakter" << endl;
    cout << "-------------------------" << endl;

    char teks[255];

    cout << "Masukkan string: ";
    cin.getline(teks, 255);

    int jumKarakter = 0;
    int indeks = 0;

    while (teks[indeks] != '\0') {
        jumKarakter++;
        indeks++;
    }

    cout << "Jumlah karakter = "
         << jumKarakter << endl;

    return 0;
}
