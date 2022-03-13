// Penentuan bilangan ganjil
//    pada baris perintah

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2)
        cout << "Penggunaan: ganjil bilangan_bulat"
             << endl;
    else {
        char *ptr;
        long bilangan = strtol(argv[1], &ptr, 10);
        if (*ptr)    {
             cout << "Penggunaan: ganjil bilangan_bulat"
                  << endl;
        }
        else {
            if (bilangan % 2 == 1)
                cout << bilangan << " -> ganjil" << endl;
            else
                cout << bilangan << " -> bukan ganjil" << endl;
        }
    }

    return 0;
}
