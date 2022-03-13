// Pembentukan string berisi A hingga Z
//     Versi 1

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "String ABCD..Z versi 1" << endl;
    cout << "----------------------" << endl;

    char teks[27];
    int indeks = 0;

    for (char kar = 'A'; kar <= 'Z'; kar++) {
        teks[indeks] = kar;
        indeks++;
    }

    teks[indeks] = '\0';

    cout << "teks = " << teks << endl;

    return 0;
}
