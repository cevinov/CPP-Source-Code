// Contoh inisialisasi string

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Inisialisasi string" << endl;
    cout << "-------------------" << endl;

    char bunga[13] = "Mawar";

    cout << "bunga: " << bunga << endl;

    // Ubah string
    strcpy(bunga, "Melati");
    cout << "bunga: " << bunga << endl;

    return 0;
}
