// Argumen baris perintah
//    untuk menjumlahkan argumen-argumennya

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    char *ptr;
    double jumlah = 0;

    bool ok = true;
    for (int j = 1; j < argc; j++) {
        double bilangan = strtod(argv[j], &ptr);
        if (*ptr)    {
            ok = false;
            cout << "Argumen " << argv[j]
                 << " tidak valid. " << endl;
            break;
        }

        jumlah = jumlah + bilangan;
    }

    if (ok)
        cout << "Jumlah = " << jumlah << endl;

    return 0;
}
