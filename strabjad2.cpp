// Pembentukan string berisi A hingga Z
//     Versi 2

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "String ABCD..Z versi 2" << endl;
    cout << "----------------------" << endl;

    char teks[27] = ""; // String kosong
    char strKarakter[2] = "X";

    for (char kar = 'A'; kar <= 'Z'; kar++) {
        strKarakter[0] = kar;
        strcat(teks, strKarakter);
    }

    cout << "teks = " << teks << endl;

    return 0;
}
