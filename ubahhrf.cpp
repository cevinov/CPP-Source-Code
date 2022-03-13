// Pengubahan huruf kecil ke huruf kapital
//     dan sebaliknya

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Contoh tolower() dan toupper()" << endl;
    cout << "------------------------------" << endl;

    char str[22] = "Tes..TES..Dicoba COBA";
    char hasil[22];
    int indeks = 0;

    cout << "str  : " << str << endl;

    // Konversi huruf
    for (int j = 0; j < strlen(str); j++) {
        char karakter = str[j];
        if (isupper(karakter))
            hasil[indeks] = tolower(karakter);
        else
            if (islower(karakter))
                hasil[indeks] = toupper(karakter);
            else
                hasil[indeks] = karakter;

        indeks++;
    }

    hasil[indeks] = '\0';  // Karakter null

    cout << "hasil: " << hasil << endl;

    return 0;
}
