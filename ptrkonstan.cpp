// Pointer konstan

#include <iostream>

using namespace std;

void tampilkan3kali(const char *str);

int main() {
    const char *teks = "Bahasa C++";

    tampilkan3kali(teks);

    return 0;
}

void tampilkan3kali(const char *str) {
    for (int j = 0; j < 3; j++)
        cout << str << endl;
}
