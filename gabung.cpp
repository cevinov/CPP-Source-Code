// Penggabungan string-C ke objek string

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Penggabungan string-C ke objek string"
         << endl;
    cout << "-------------------------------------"
         << endl;

    string namaPeserta = "Fiska Damayanti";

    char nama[] = "Dahlan";

    namaPeserta = namaPeserta + " " + nama;

    cout << "namaPeserta = "
         << namaPeserta << endl;

    return 0;
}
