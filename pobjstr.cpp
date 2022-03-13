// Pointer yang menunjuk objek string

#include <iostream>
#include <string>

using namespace std;

int main() {
    string teks = "Sukses selalu!";

    string *ptrString;

    // Pointer menunjuk ke string
    ptrString = &teks;  // Harus ada &

    // Akses langsung via cout
    cout << *ptrString << endl;

    return 0;
}

